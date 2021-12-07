# Memoire

This project is a student project for Centrale Supelec. Its purpose is to add Augmented Reality in cimeteries.


## Requirements

* Set up your environement with [react-native-cli](https://reactnative.dev/docs/environment-setup)
* Node version >= 14
* Unity version >= 2019.4
* Git and **Git LFS** 2.x
* Once you've cloned the repository, don't forget to run `git submodule init` and then `git submodule update` to get the files of our Unity project
* If not already installed, you will need [Github for Unity](https://unity.github.com/)
* You might want to have a look to how [submodules](https://git-scm.com/book/fr/v2/Utilitaires-Git-Sous-modules) work in git

## Setup your Unity project

The git submodule with our Unity project has already been configured so the steps below should not be needed.
But the whole procedure is explained here in case you want to give it a try with your own unity project.

### Configuring Unity

To configure Unity to add the exported files somewhere accessible to your app we use some build scripts. And the default
configuration expects that you place your Unity Project in the following position relative to our app.

```
.
├── android
├── ios
├── unity
│   └── <Your Unity Project>
├── node_modules
├── package.json
└── README.md
```

#### Add Unity Build scripts

Copy files in the `/template` folder in `/unity/<Your Unity Project>/Assets/Editor/ReactNative/`.

#### Player Settings

1. Open your Unity Project
2. Go to Player settings (File => Build Settings => Player Settings)
3. Change `Product Name` to the name of the Xcode project which is in `ios/${XcodeProjectName}.xcodeproj`

##### Additional changes for Android

Under `Player settings > Android > Other Settings` make sure `Scripting Backend` is set to `IL2CPP`, `ARM64` is checked under `Target Architectures`, and that `Auto Graphics API` is unchecked (with `OpenGLES3` and `OpenGLES2` in the list in that order).

##### Additional changes for iOS

Under `Player settings > iOS > Other Settings` make sure `Auto Graphics API` is checked.

#### Check that Unity is ready

Now you should be able to export the Unity Project using `ReactNative => Export Android` or `ReactNative => Export IOS`.
The exported artifacts will be placed in a folder called `UnityExport` inside either the `/android` or the `/ios` folder.
Don't forget to export your Unity project each time you make changes, if you want to see it in React Native.

#### Notes

* Unity integration hasn't been tested yet on iOS.
* Android emulation only works with ARM

#### How to use the Unity View API

Please see [react-native-unity-view](https://github.com/asmadsen/react-native-unity-view) repository.


## Launch project in dev mode

* On android device: `npm run android`
* On iOS device: `npm run ios`

## Documentation

In this section you can find all links towards our documentation pages
* [Technological choices](https://hackmd.io/NCrHiv5TTmGNwUr9kq840g?view)