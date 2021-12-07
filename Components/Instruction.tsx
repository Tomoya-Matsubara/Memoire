import React, {useRef} from 'react';
import {
  View,
  Text,
  Image,
  Button,
  StyleSheet,
  StatusBar,
  Slider,
  LogBox,
} from 'react-native';
import AppIntroSlider from 'react-native-app-intro-slider';
import Icon from 'react-native-vector-icons/Ionicons';
import { useNavigation } from '@react-navigation/native';
// import Toast from 'react-native-simple-toast';

LogBox.ignoreLogs([
  'Non-serializable values were found in the navigation state',
]);

const data = [
  {
    title: 'Étape 1',
    text: 'Activez votre caméra',
    image: require('../Assets/camera.png'),
    bg: '#59b2ab',
    bgImage: "#ffff00",
    sizeImage: 140,
  },
  {
    title: 'Étape 2',
    text: 'Trouvez un VuMark',
    image: require('../Assets/vumark.png'),
    bg: '#febe29',
    bgImage: '#3D3D3B',
    sizeImage: 160,
  },
  {
    title: 'Étape 3',
    text: "Scannez-le !",
    image: require('../Assets/scanner.png'),
    bg: '#ff8484',
    // bgImage: '#7fff7f',
    bgImage: '#7b6079',
    sizeImage: 170,
  },
];

type Item = typeof data[0];

const styles = StyleSheet.create({
  slide: {
    flex: 1,
    alignItems: 'center',
    justifyContent: 'center',
    paddingBottom: 96,
  },
  imageContainer: {
    alignItems: 'center',
    justifyContent: 'center',
    height: 200,
    width: 200,
    borderRadius: 50,
    margin: 40,
  },
  image: {
    width: 140,
    height: 140,
  },  
  text: {
    fontSize: 20,
    color: 'rgba(255, 255, 255, 0.8)',
    textAlign: 'center',
  },
  title: {
    fontSize: 30,
    color: 'white',
    textAlign: 'center',
  },
  buttonCircle: {
    width: 44,
    height: 44,
    backgroundColor: 'rgba(0, 0, 0, .2)',
    borderRadius: 22,
    justifyContent: 'center',
    alignItems: 'center',
  },
});


export const Instruction = () => {
  const navigation = useNavigation();
  const slider = useRef();
  
  const _keyExtractor = (item: Item) => item.title;

  const _renderItem = ({item}: {item: Item}) => {
    return (
      <View
        style={[styles.slide, { backgroundColor: item.bg, },]}>
        <Text style={styles.title}>{item.title}</Text>
        <View style={ [styles.imageContainer, { backgroundColor: item.bgImage }]}>
          <Image source={item.image} 
            style={[styles.image, {width: item.sizeImage, height: item.sizeImage, }]} />
        </View>
        <Text style={styles.text}>{item.text}</Text>
      </View>
    );
  };

  const _renderDoneButton = () => {
    return (
      <View style={styles.buttonCircle}>
        <Icon name="md-checkmark" color="rgba(255, 255, 255, .9)" size={24} />
      </View>
    );
  };

  const _renderNextButton = () => {
    return (
      <View style={styles.buttonCircle}>
        <Icon
          name='arrow-forward-sharp'
          color="rgba(255, 255, 255, .9)"
          size={24}
        />
      </View>
    );
  };

  const _onDone = () => {  
    // Toast.show('App starts!');
    navigation.navigate('Unity', {param: slider});
    setTimeout(() => { slider.current.goToSlide(0, true) }, 5000);
  };

  return (
    <View style={{flex: 1}}>
      <StatusBar translucent backgroundColor="transparent" />
      <AppIntroSlider
        keyExtractor={_keyExtractor}
        renderItem={_renderItem}
        renderDoneButton={_renderDoneButton}
        renderNextButton={_renderNextButton}
        onDone={_onDone}
        onSkip={_onDone}
        data={data}
        showSkipButton
        showPrevButton
        ref={(ref) => (slider.current = ref)} 
      />
    </View>
  );
};


export default Instruction;