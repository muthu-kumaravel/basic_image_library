## Image Library

You can use the [editor on GitHub](https://github.com/muthu-kumaravel/basic_image_library/edit/gh-pages/index.md) to maintain and preview the content for your website in Markdown files.

Whenever you commit to this repository, GitHub Pages will run [Jekyll](https://jekyllrb.com/) to rebuild the pages in your site, from the content in your Markdown files.

### Markdown

Markdown is a lightweight and easy-to-use syntax for styling your writing. It includes conventions for

```markdown
Syntax highlighted code block

# Header 1
## Header 2
### Header 3

- Bulleted
- List

1. Numbered
2. List

**Bold** and _Italic_ and `Code` text

[Link](url) and ![Image](src)
```

For more details see [GitHub Flavored Markdown](https://guides.github.com/features/mastering-markdown/).

### Jekyll Themes

Your Pages site will use the layout and styles from the Jekyll theme you have selected in your [repository settings](https://github.com/muthu-kumaravel/basic_image_library/settings). The name of this theme is saved in the Jekyll `_config.yml` configuration file.

### Support or Contact

Having trouble with Pages? Check out our [documentation](https://help.github.com/categories/github-pages-basics/) or [contact support](https://github.com/contact) and we’ll help you sort it out.


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


