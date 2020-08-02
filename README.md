[![MIT licensed](https://img.shields.io/badge/license-MIT-blue.svg)](https://opensource.org/licenses/MIT)

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

## INSTRUCTIONS TO RUN ON LINUX

### Build the library

```
$ git clone https://github.com/muthu-kumaravel/basic_image_library.git
$ cd basic_image_library/main_code/
$ mkdir build
$ cd build
$ cmake ..
        or
$ ccmake .. 
    > c
    > c
    > g
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
    > c
    > c
    > g
$ make
$ cd ../
$ ./bin/basic_image_demo
```

**OR**

### CMake

Run the below script to cmake the whole library
```
$ git clone https://github.com/muthu-kumaravel/basic_image_library.git
$ cd basic_image_library/main_code/
$ mkdir build
$ cd ../test_application/
$ mkdir build
$ cd ../
$ chmod +x run_cmake.sh
$ ./run_cmake.sh
```

### Build and 

Run the below script to build and run the whole library
```
$ chmod +x run_demo.sh
$ ./run_demo.sh
```

## INSTRUCTION TO RUN ON WINDOWS

### Clone and build library
```
> git clone https://github.com/muthu-kumaravel/basic_image_library.git
> cd .\basic_image_library\
> cd .\main_code\
> mkdir build
> cmake..
```
* Open `BasicImageLibrary.sln` insice `main_code\build`
* Change to `Release` and `x64`
* Right click basic_image_core and click `Build`

### Run sample application
```
> cd ../../
> cd .\test_application\
> mkdir build
> cmake ..
```
* Open `BasicImageLibrary.sln` inside `test_application\build\`
* Change to `Release` and `x64`
* Right click basic_image_demo and click `Property > Linker > Input`
* Edit Additional Dependencies and add `{PATH TO basic_image_library}\lib\Release\basic_image_core.lib`
* Right click basic_image_demo and click `Build`
```
> cd ../
> .\bin\Release\basic_image_demo.exe
```

**Output will be dumped in** `test_application/output_test_images`