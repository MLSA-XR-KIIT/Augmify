# Augmify

A Microsoft Learn Student Ambassador (MLSA) Project Wing Collaborative  focusing on Extended Reality (XR) technologies. This project combines Web AR portfolio creation and facial tracking capabilities.

## 🎯 Project Overview

This project consists of two main components:

1. **AR Portfolio**: An interactive portfolio system using Unity that allows users to create immersive AR portfolios and business cards.

2. **AR Face Tracker**: A facial recognition and tracking system built with Unity AR Foundation.

## 🚀 Prerequisites

Before you begin, ensure you have:
- Unity 2022.3 LTS or newer installed
- Basic knowledge of C# programming
- Git installed on your computer

# Part 1: AR Portfolio Implementation Guide

## 🛠️ Technical Stack

- **Game Engine**: Unity 2022.3+
- **AR Framework**: AR Foundation
- **Programming**: C#, JavaScript
- **Version Control**: Git

# Face Recognition System Implementation Guide

## Understanding the System

The face recognition system we're building will capture faces through the device camera, detect them using AR Foundation, and match them against a pre-existing database to retrieve information like name and age. Think of it as a digital attendance system or identity verification tool.

### Building for Mobile

For Android:
```
1. Player Settings adjustments:
   - Minimum API Level: 24
   - Target API Level: Latest
   - Required permissions:
 	* Camera
 	* Internet (if using online database)
 	* Write External Storage (for local database)
```

For iOS:
```
1. Player Settings requirements:
   - Minimum iOS Version: 11.0
   - Camera Usage Description
   - Required frameworks:
 	* ARKit
 	* CoreML (if using for face recognition)
```

# Technical Stack 

## Core Development Platform
- **Unity 2022.3 LTS** or newer
  - Primary development environment
  - Cross-platform build support
  - URP (Universal Render Pipeline) for optimal mobile performance

## AR/Camera Frameworks
- **AR Foundation 5.0+**
  - Core AR framework for Unity
  - Camera management
  - Face detection capabilities
- **ARCore (Android)**
  - Google's AR platform
  - Minimum API level 24
  - Camera2 API support
- **ARKit (iOS)**
  - Apple's AR platform
  - Requires iOS 11.0+
  - TrueDepth camera support

## Database & Storage
- **SQLite**
  - Local database storage
  - Face data management
  - User information storage
- **SQLite for Unity Plugin**
  - Database integration with Unity
  - Cross-platform compatibility

## Development Tools
- **Visual Studio 2022** or **Visual Studio Code**
  - C# development
  - Debugging tools
  - IntelliSense support
- **Android Studio**
  - Android SDK management
  - APK building and signing
  - Device debugging
- **Xcode** (for iOS development)
  - iOS build processing
  - Device deployment
  - Certificate management

## Programming Languages
- **C#**
  - Primary development language
  - Unity scripting
  - Business logic implementation
- **SQL**
  - Database queries
  - Data management

## Mobile Platform SDKs
- **Android SDK**
  - API Level 24+ (Android 7.0)
  - NDK (Native Development Kit)
  - Build tools
- **iOS SDK**
  - iOS 11.0 minimum
  - CocoaPods (if needed)

## Version Control
- **Git**
  - Source code management
  - Collaboration tools
- **Git LFS** (Large File Storage)
  - Binary file management
  - Asset version control

## Testing Tools
- **Unity Test Framework**
  - Unit testing
  - Integration testing
- **Unity Profiler**
  - Performance monitoring
  - Memory management
- **Firebase Test Lab** (Optional)
  - Device testing
  - Performance monitoring

## Build Tools
- **Gradle** (Android)
  - Build automation
  - Dependency management
- **CocoaPods** (iOS)
  - Dependency management
  - Library integration

## Required Unity Packages
```
Required Packages (Package Manager):
- AR Foundation
- ARCore XR Plugin
- ARKit XR Plugin
- XR Plugin Management
- Universal RP
- Test Framework
- Visual Studio Editor
- Version Control
```

## 🤝 Contributing

1. Fork the repository
2. Create your feature branch
3. Commit your changes
4. Push to the branch
5. Open a Pull Request

## 📝 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## 📞 Contact

For questions or feedback:
- Create an issue in this repository
- Contact the MLSA Project team

## ⚠️ Troubleshooting

Common issues and solutions:
- If Needle Engine fails to install, ensure Node.js is updated to the latest LTS version
- For AR features, ensure you're using a WebXR-compatible browser
- Face tracking requires camera permissions and works best in well-lit conditions

## 🙏 Acknowledgments

- Unity Technologies

---
**Note**: This project is under active development. Features and requirements may change.

