[![MIT licensed](https://img.shields.io/github/license/muthu-kumaravel/basic_image_library)](https://opensource.org/licenses/MIT)
[![stars](https://img.shields.io/github/stars/muthu-kumaravel/basic_image_library)](https://github.com/muthu-kumaravel/basic_image_library/stargazers)
[![forks](https://img.shields.io/github/forks/muthu-kumaravel/basic_image_library)](https://github.com/muthu-kumaravel/basic_image_library/network/members)
[![issues](https://img.shields.io/github/issues/muthu-kumaravel/basic_image_library)](https://github.com/muthu-kumaravel/basic_image_library/issues)

# [Basic Image Processing Library](https://muthu-kumaravel.github.io/basic_image_library/)

Basic Image Processing library is a comprehensive computer vision and image processing library for all architecture with CPU backend and developed for __Linux__, __Windows__, and __Mac__.

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
* Temperature Modification (Yet to support in full scale, Added RGB <-> HSV conversio, colour not accurate)

**For more informations on API's Headers and usage visit**
**[API README](https://github.com/muthu-kumaravel/basic_image_library/blob/master/main_code/README.md)** or **[Main Code Includes](https://github.com/muthu-kumaravel/basic_image_library/tree/master/main_code)**

* * *

## INSTRUCTIONS TO RUN ON LINUX AND MAC OS

### Clone the Library

```
$ git clone https://github.com/muthu-kumaravel/basic_image_library.git
```

### TYPE 1: Build Library with demo application and running demop application

```
$ cd basic_image_library/
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
$ ./test_application/bin/Release/basic_image_demo
```

**If Debug**

``` 
$ ./test_application/bin/Release/basic_image_demo
```

### TYPE 2: Build the library

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

## INSTRUCTION TO RUN ON WINDOWS

### Clone and build library

```
$ git clone https://github.com/muthu-kumaravel/basic_image_library.git
```

### TYPE 1: Build Library with demo application and running demo application

```
> cd .\basic_image_library\
> mkdir build
> cd .\build
> cmake..
```

>
> Make Sure cmake is done with `Building for: Visual Studio 16 2019`
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

```
> cd ../
> cd .\test_application\
> mkdir build
> cmake ..
```

**For Release**

```
> cd ../
> .\test_application\bin\Release\basic_image_demo.exe
```

**For Debug**

```
> cd ../
> .\test_application\bin\Debug\basic_image_demo.exe
```

### TYPE 2: Build Library

```
> cd .\basic_image_library\
> cd .\main_code\
> mkdir build
> cd .\build\
> cmake..
```

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

### TYPE 2: Run sample application
```
> cd ../../
> cd .\test_application\
> mkdir build
> cd .\build\
> cmake ..
```

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
