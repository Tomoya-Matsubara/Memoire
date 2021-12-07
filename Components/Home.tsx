import { createStackNavigator } from '@react-navigation/stack';
import React from 'react';
import { Alert, Button, View, Text, SafeAreaView, StyleSheet } from 'react-native';
import { useNavigation } from '@react-navigation/native';
import { UnityView } from '@asmadsen/react-native-unity-view';

// import Instruction from './Instruction';


// const Stack = createStackNavigator();

// const HomeNavigator = () => (
//   <Stack.Navigator
//     screenOptions={{
//       headerTintColor: "#00ff00",
//       headerStyle: {
//         backgroundColor: "#ff0000",
//       },
//     }}
//   >
//     <Stack.Screen
//       name="Home" component={Home}
//       options={{
//         headerRight: () => (
//           <Button
//             onPress={() => Alert.alert('This is a button!')}
//             title="Info"
//             color="#fff"
//           />
//         ),
//       }}
//     />
//     <Stack.Screen name="Details" component={Details} />
//   </Stack.Navigator>
// );

export const Home = () => {
  const navigation = useNavigation();
  return (
    // <>
    //   <Instruction />
    // </>
    <View style={{ flex: 1, alignItems: 'center', justifyContent: 'center' }}>
      <Text>You have (undefined) friends.</Text>
      {/* <Button
        title="Go to Details"
        onPress={() => navigation.navigate('Details')}
      /> */}
    </View>
  );
};

// export const Unity = () => {
//   const navigation = useNavigation();
//   return (
//     <> 
//       <SafeAreaView> 
//         <UnityView style={styles.unity} />    
//       </SafeAreaView>
//     </>
//   );
// };

// export const Details = () => {
//   const navigation = useNavigation();
//   return (
//     <View style={{ flex: 1, alignItems: 'center', justifyContent: 'center' }}>
//       <Button
//         title="Go to Home"
//         onPress={() => navigation.navigate('Home')}
//       />
//     </View>
//   );
// };

// const styles = StyleSheet.create({
//   unity: {
//       height: '100%',
//       width: '100%',
//   },
// });

export default Home;