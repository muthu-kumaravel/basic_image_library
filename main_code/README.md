![Basic_Image_Library](https://github.com/muthu-kumaravel/basic_image_library/workflows/Basic_Image_Library/badge.svg)
[![MIT licensed](https://img.shields.io/github/license/muthu-kumaravel/basic_image_library)](https://opensource.org/licenses/MIT)
[![stars](https://img.shields.io/github/stars/muthu-kumaravel/basic_image_library)](https://github.com/muthu-kumaravel/basic_image_library/stargazers)
[![forks](https://img.shields.io/github/forks/muthu-kumaravel/basic_image_library)](https://github.com/muthu-kumaravel/basic_image_library/network/members)
[![issues](https://img.shields.io/github/issues/muthu-kumaravel/basic_image_library)](https://github.com/muthu-kumaravel/basic_image_library/issues)

# [Basic Image Processing Library](https://muthu-kumaravel.github.io/basic_image_library/)

Basic Image Processing library is a comprehensive computer vision and image processing library for all architecture with CPU backend and developed for __Linux__, __Windows__, and __Mac__.

>
> Every Link in this page are related to master branch
> Master branch will contain same code as the latest release which can be found in tags
>

## File Description 

* Information about different group of functions
* Definition functions
* How to access the API
* API Definition

## Supported Functions

- Basic Functions
  - Basic Function [REDME](https://github.com/muthu-kumaravel/basic_image_library/blob/master/main_code/includes/basic_functions/README.md)
  - [Image Copy](https://github.com/muthu-kumaravel/basic_image_library/blob/master/main_code/includes/basic_functions/README.md#1-image-return)
- Math Functions
  - Math Function [REDME](https://github.com/muthu-kumaravel/basic_image_library/blob/master/main_code/includes/math_functions/README.md)
  - [Absolute Difference](https://github.com/muthu-kumaravel/basic_image_library/blob/master/main_code/includes/math_functions/README.md#1-absolute-difference)
- Adobe Functions
  - Adobe Function [REDME](https://github.com/muthu-kumaravel/basic_image_library/blob/master/main_code/includes/adobe_functions/README.md)
  - [Temperature](https://github.com/muthu-kumaravel/basic_image_library/blob/master/main_code/includes/adobe_functions/README.md#1-temperature)
- Colour Conversion Function
  - Colour Conversion Function [README](https://github.com/muthu-kumaravel/basic_image_library/blob/master/main_code/includes/colour_conversion_functions/README.md)
  - [HSV to RGB](https://github.com/muthu-kumaravel/basic_image_library/blob/master/main_code/includes/colour_conversion_functions/README.md#1-hsv-to-rgb)
  - [RGB to HSV](https://github.com/muthu-kumaravel/basic_image_library/blob/master/main_code/includes/colour_conversion_functions/README.md#2-rgb-to-hsv)

## Backend Types information

* **Image Size**

``` c
typedef struct
{
    uint32 width;
    uint32 height;
    uint32 channel;
} img_size;
```


| Variable          | Type            |
|:------------------|:----------------|
| width             | int             |
| height            | int             |
| channel           | int             |