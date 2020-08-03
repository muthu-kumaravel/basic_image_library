[![MIT licensed](https://img.shields.io/github/license/muthu-kumaravel/basic_image_library)](https://opensource.org/licenses/MIT)
[![stars](https://img.shields.io/github/stars/muthu-kumaravel/basic_image_library)](https://github.com/muthu-kumaravel/basic_image_library/stargazers)
[![forks](https://img.shields.io/github/forks/muthu-kumaravel/basic_image_library)](https://github.com/muthu-kumaravel/basic_image_library/network/members)
[![issues](https://img.shields.io/github/issues/muthu-kumaravel/basic_image_library)](https://github.com/muthu-kumaravel/basic_image_library/issues)

# [Basic Image Processing Library](https://muthu-kumaravel.github.io/basic_image_library/)

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

### Build the library

```
$ git clone https://github.com/muthu-kumaravel/basic_image_library.git
$ cd basic_image_library/main_code/
$ mkdir build
$ cd build
$ cmake ..
        or
$ ccmake .. 
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
$ make
$ cd ../
$ ./bin/basic_image_demo
```

OR

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

### Build and Run

Run the below script to build and run the whole library
```
$ chmod +x run_demo.sh
$ ./run_demo.sh
```

* * *

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
* Edit Additional Dependencies and add 
```{exact_path_to_basic_image_library}\lib\Release\basic_image_core.lib```
* Right click basic_image_demo and click `Build`

```
> cd ../
> .\bin\Release\basic_image_demo.exe
```

**Output will be dumped in** `test_application/output_test_images`
