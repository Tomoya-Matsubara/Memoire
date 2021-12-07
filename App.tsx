/**
 * Sample React Native App
 * https://github.com/facebook/react-native
 *
 * Generated with the TypeScript template
 * https://github.com/react-native-community/react-native-template-typescript
 *
 * @format
 */

// import React from 'react';
// import Instruction from "./Components/Instruction";

// import { UnityView } from '@asmadsen/react-native-unity-view';
// import { StyleSheet, SafeAreaView } from 'react-native';
// import Unity from "./Unity";


// export const App = () => {
//   return (
//     <>
//       {/* <SafeAreaView> 
//         <UnityView style={styles.unity} />    
//       </SafeAreaView> */}
   
//       <Instruction />
//     </>
//   );
// };

// const styles = StyleSheet.create({
//   unity: {
//       height: '100%',
//       width: '100%',
//   },
// });

// export default App;


import { NavigationContainer } from '@react-navigation/native';
import React, { useEffect } from 'react';
import { createStackNavigator } from '@react-navigation/stack';
import Home from './Components/Home';
import Instruction from './Components/Instruction';
import Unity from './Components/Unity';
// import NavigationService from './navigation-service';

const Stack = createStackNavigator();

export const App = () => {
  return (
    <NavigationContainer>
      <Stack.Navigator screenOptions={{ headerShown: false }}>
      {/* <Stack.Navigator screenOptions={{ headerShown: true }}> */}
        <Stack.Screen name="Instruction" component={Instruction}></Stack.Screen>
        <Stack.Screen name="Unity" component={Unity} />
      </Stack.Navigator>
    </NavigationContainer>
  );
};


export default App;