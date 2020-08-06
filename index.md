[![MIT licensed](https://img.shields.io/github/license/muthu-kumaravel/basic_image_library)](https://opensource.org/licenses/MIT)
[![stars](https://img.shields.io/github/stars/muthu-kumaravel/basic_image_library)](https://github.com/muthu-kumaravel/basic_image_library/stargazers)
[![forks](https://img.shields.io/github/forks/muthu-kumaravel/basic_image_library)](https://github.com/muthu-kumaravel/basic_image_library/network/members)
[![issues](https://img.shields.io/github/issues/muthu-kumaravel/basic_image_library)](https://github.com/muthu-kumaravel/basic_image_library/issues)

# Basic Image Processing Library

Basic Image Processing library is a comprehensive computer vision and image processing library for all architecture with CPU backend and developed for __Linux__, __Windows__, and __Mac__.

## Prerequisites

* Any Linux, Windows or Mac based OS
* CMake Version `3.5` or higher
* Visual Studio 2019

## Initial Release

**Basic folder structure and cmake files written**
* Only available function for first release basic Image copy
* Supports only PNG images 
* Partial support for JPEG images (Output may be flipped)

## Supported Functions

* Image Copy
* Absolute Difference

**For more informations on API's Headers and usage visit**
**[API README](https://github.com/muthu-kumaravel/basic_image_library/blob/master/main_code/README.md)** or **[Main Code Includes](https://github.com/muthu-kumaravel/basic_image_library/tree/master/main_code)**

* * *

## INSTRUCTIONS TO RUN ON LINUX

### Clone the Lobrary

```
$ git clone https://github.com/muthu-kumaravel/basic_image_library.git
```

### Build the library

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

### Instructions to run the library

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
$ cd ../
```

**If Release**

``` 
$ ./bin/Release/basic_image_demo
```

**If Debug**

``` 
$ ./bin/Release/basic_image_demo
```

OR

### Build Using Shell Script

**Make sure Build type is Release** (Script is applicable only for build in Release)

#### CMake

Run the below script to cmake the whole library
```
$ cd basic_image_library/main_code/
$ mkdir build
$ cd ../test_application/
$ mkdir build
$ cd ../
$ chmod +x run_cmake.sh
$ ./run_cmake.sh
```

#### Build and Run

Run the below script to build and run the whole library
```
$ chmod +x run_demo.sh
$ ./run_demo.sh
```

* * *

## INSTRUCTION TO RUN ON WINDOWS

### Clone and build library
```
> cd .\basic_image_library\
> cd .\main_code\
> mkdir build
> cmake..
```
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
> cmake ..
```

**For Release**

* Open `BasicImageLibrary.sln` inside `test_application\build\`
* Change to `Release` and `x64`
* Right click basic_image_demo and click `Build`

```
> cd ../
> .\bin\Release\basic_image_demo.exe
```

**For Debug**

* Change `DEBUG OFF` to `DEBUG ON` on `test_application\CMakeLists.txt`
* Open `BasicImageLibrary.sln` inside `test_application\build\`
* Change to `Debug` and `x64`
* Right click basic_image_demo and click `Build`

```
> cd ../
> .\bin\Debug\basic_image_demo.exe
```

**Output will be dumped in** `test_application/output_test_images`
