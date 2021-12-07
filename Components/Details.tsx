import { createStackNavigator } from '@react-navigation/stack';
import React from 'react';
import { Alert, Button, View } from 'react-native';
import { useNavigation } from '@react-navigation/native';

const Stack = createStackNavigator();

const HomeNavigator = () => (
  <Stack.Navigator
    screenOptions={{
      headerTintColor: "#00ff00",
      headerStyle: {
        backgroundColor: "#ff0000",
      },
    }}
  >
    <Stack.Screen
      name="Home"
      component={Home}
      options={{
        headerRight: () => (
          <Button
            onPress={() => Alert.alert('This is a button!')}
            title="Info"
            color="#fff"
          />
        ),
      }}
    />
    {/* <Stack.Screen name="Details" component={Details} /> */}
  </Stack.Navigator>
);

const Details: React.FunctionComponent = () => {
  const navigation = useNavigation();
  return (
    <View style={{ flex: 1, alignItems: 'center', justifyContent: 'center' }}>
      <Button
        title="Go to Details"
        onPress={() => navigation.navigate('Details')}
      />
    </View>
  );
};

export default HomeNavigator;