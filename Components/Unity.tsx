import React from 'react';
import { StyleSheet, SafeAreaView, Text, View, TouchableOpacity, Alert} from 'react-native';
import { UnityView } from '@asmadsen/react-native-unity-view';
import { useNavigation } from '@react-navigation/native';
import Icon from 'react-native-vector-icons/Ionicons';

declare const global: { HermesInternal: null | {} };

export const Unity = () => {
  const navigation = useNavigation();

  const showAlert = () => {
    Alert.alert(
      'Instruction',
      "Voulez-vous revenir à l'écran de guide ?",
      [
        {text: 'Oui', onPress: () => navigation.navigate('Instruction')},
        {text: 'Non', onPress: () => {}},
      ],
      { cancelable: false }
    )
  };

  return (
    <> 
      <SafeAreaView> 
        <UnityView style={styles.unity}>
          <View style={styles.container}>
            <TouchableOpacity onPress={() => showAlert()}>
              <View style={styles.buttonCircle}>
                <Icon name="md-settings" color="rgba(255, 255, 255, .9)" size={30} />
              </View>
            </TouchableOpacity>
          </View>
        </UnityView>
      </SafeAreaView>
    </>
  );
};

const styles = StyleSheet.create({
  container: {
    flex: 1,
    alignItems: 'flex-end',
    marginTop: '10%',
    marginRight: '5%',
  },
  unity: {
    height: '100%',
    width: '100%',
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
  

export default Unity;