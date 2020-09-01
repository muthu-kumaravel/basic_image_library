![Basic_Image_Library](https://github.com/muthu-kumaravel/basic_image_library/workflows/Basic_Image_Library/badge.svg)
[![MIT licensed](https://img.shields.io/github/license/muthu-kumaravel/basic_image_library)](https://opensource.org/licenses/MIT)
[![stars](https://img.shields.io/github/stars/muthu-kumaravel/basic_image_library)](https://github.com/muthu-kumaravel/basic_image_library/stargazers)
[![forks](https://img.shields.io/github/forks/muthu-kumaravel/basic_image_library)](https://github.com/muthu-kumaravel/basic_image_library/network/members)
[![issues](https://img.shields.io/github/issues/muthu-kumaravel/basic_image_library)](https://github.com/muthu-kumaravel/basic_image_library/issues)

# [Basic Image Processing Library](https://muthu-kumaravel.github.io/basic_image_library/)

Basic Image Processing library is a comprehensive computer vision and image processing library for all architecture with CPU backend and developed for __Linux__, __Windows__, and __Mac__.

>
> Every Link in this page are related to master branch
> (Master branch will contain same code as the latest release which can be found in tags)
>

## Prerequisites

### Common Requirement
* Any Linux, Windows or Mac based OS
* CMake Version `3.5` or higher

### Linux
* Basic g++ compiler (Installed in any linux machine by default)

### Windows
* Cmake GUI
* Visual Studio 2019 with c++ development tool installed

### MacOS
* Xcode command line tools 

## Initial Release

**Basic folder structure and cmake files written**
* Only available function for first release basic Image copy
* Supports only PNG images 
* Partial support for JPEG images (Output may be flipped)

## Supported Functions

* Image Copy
* Absolute Difference
* Temperature Modification
* RGB to HSV
* HSV to RGB

**For more informations on API's Headers and usage visit**
**[API README](https://muthu-kumaravel.github.io/basic_image_library/api_header.html)** or **[API GITHUB README](https://github.com/muthu-kumaravel/basic_image_library/blob/master/main_code/README.md)** or **[Main Code Includes](https://github.com/muthu-kumaravel/basic_image_library/tree/master/main_code)**

* * *

# INSTRUCTIONS TO RUN ON LINUX AND MAC OS

## Clone the Library

```
$ git clone https://github.com/muthu-kumaravel/basic_image_library.git
```

## TYPE 1: BUILDING WHOLE LIBRARY

### Building and Executing Library and Test Application

```
$ cd basic_image_library/
$ mkdir build
$ cd build
$ cmake ..
        or
$ ccmake .. (For CMake GUI Interface)
```

For Debug mode or any other user preference in cmake, make the necessary modification manually in `main_code\CMakeLists.txt` or via cmake gui (`ccmake ..`)

``` 
$ make
$ cd ../
```

**If Release**

``` 
$ ./test_application/bin/Release/basic_image_demo
```

**If Debug**

``` 
$ ./test_application/bin/Debug/basic_image_demo
```

## TYPE 2: BUILDING ONE BY ONE

### Build the Library

```
$ cd basic_image_library/main_code/
$ mkdir build
$ cd build
$ cmake ..
        or
$ ccmake ..
```

For Debug mode or any other user preference in cmake, make the necessary modification manually in `main_code\CMakeLists.txt` or via cmake gui (`ccmake ..`)

``` 
$ make
```

### Instructions to Build and Run the Test Application

**Mandatory to build the library before**

```
$ cd ../../test_application/
$ mkdir build
$ cd build
$ cmake ..
        or
$ ccmake .. 
```

For Debug mode or any other user preference in cmake, make the necessary modification manually in `main_code\CMakeLists.txt` or via cmake gui (`ccmake ..`)

``` 
$ make
$ cd ../../
```

**If Release**

``` 
$ ./test_application/bin/Release/basic_image_demo
```

**If Debug**

``` 
$ ./test_application/bin/Release/basic_image_demo
```

* * *

# INSTRUCTION TO RUN ON WINDOWS

## Clone and build library

```
$ git clone https://github.com/muthu-kumaravel/basic_image_library.git
```

## TYPE 1: BUILDING WHOLE LIBRARY

### Build and Executing Library with Test Application

```
> cd .\basic_image_library\
> mkdir build
> cd .\build
> cmake..
```

If using CMake GUI give the correct `Source` folder and `Build folder`
* **Source** : `{EXACT_PATH_TO_LIBRARY}`
* **Build** : `{EXACT_PATH_TO_LIBRARY}\build`
* `Configure` and `Generate` with necessary options

>
> Make Sure CMake is done with `Building for: Visual Studio 16 2019` (Might not work in older versions)
>

**For Release**

* YET TO CHECK
* Change to `Release` and `x64`
* Right click basic_image_core and click `Build`

**For Debug**

* Change `DEBUG OFF` to `DEBUG ON` on `main_code\CMakeLists.txt` or using CmakeGUI
* YET TO CHECK
* Change to `Debug` and `x64`
* Right click basic_image_core and click `Build`

## TYPE 2: BUILDING ONE BY ONE

### Build Library

```
> cd .\basic_image_library\
> cd .\main_code\
> mkdir build
> cd .\build\
> cmake..
```

If using CMake GUI give the correct `Source` folder and `Build folder`
* **Source** : `{EXACT_PATH_TO_LIBRARY}\main_code`
* **Build** : `{EXACT_PATH_TO_LIBRARY}\main_code\build`
* `Configure` and `Generate` with necessary options

>
> Make Sure cmake is done with `Building for: Visual Studio 16 2019`
>

**For Release**

* Open `BasicImageLibrary.sln` insice `main_code\build`
* Change to `Release` and `x64`
* Right click basic_image_core and click `Build`

**For Debug**

* Change `DEBUG OFF` to `DEBUG ON` on `main_code\CMakeLists.txt`
* Open `BasicImageLibrary.sln` insice `main_code\build`
* Change to `Debug` and `x64`
* Right click basic_image_core and click `Build`

### Run sample application
```
> cd ../../
> cd .\test_application\
> mkdir build
> cd .\build\
> cmake ..
```

If using CMake GUI give the correct `Source` folder and `Build folder`
* **Source** : `{EXACT_PATH_TO_LIBRARY}\test_application`
* **Build** : `{EXACT_PATH_TO_LIBRARY}\test_application\build`
* `Configure` and `Generate` with necessary options

>
> Make Sure cmake is done with `Building for: Visual Studio 16 2019`
>

**For Release**

* Open `BasicImageLibrary.sln` inside `test_application\build\`
* Change to `Release` and `x64`
* Right click basic_image_demo and click `Build`

```
> cd ../
> .\test_application\bin\Release\basic_image_demo.exe
```

**For Debug**

* Change `DEBUG OFF` to `DEBUG ON` on `test_application\CMakeLists.txt`
* Open `BasicImageLibrary.sln` inside `test_application\build\`
* Change to `Debug` and `x64`
* Right click basic_image_demo and click `Build`

```
> cd ../
> .\test_application\bin\Debug\basic_image_demo.exe
```

**Output will be dumped in** `test_application/output_test_images`

# OTHER RELATED INFORMATIONS

* Work flow and [Build Status](https://github.com/muthu-kumaravel/basic_image_library/actions) of Library
* Master Branch [Commits](https://github.com/muthu-kumaravel/basic_image_library/commits/master)
* [Project Plan and Progress](https://github.com/users/muthu-kumaravel/projects/1)
* [Stars](https://github.com/muthu-kumaravel/basic_image_library/stargazers)
* [Issue](https://github.com/muthu-kumaravel/basic_image_library/issues)
* [Fork](https://github.com/muthu-kumaravel/basic_image_library/network/members)
* This project can be used as a template for creating library, Using library to generate executable, writing advanced CMake and proper usage of Macros and C code.
* Refer [Code Of Conduct](https://github.com/muthu-kumaravel/basic_image_library/blob/master/CODE_OF_CONDUCT.md) for contributing informations