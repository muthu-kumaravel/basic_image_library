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

* How to access the API
* API Definition

## Supported Colour Conversion Functions

* [HSV to RGB](https://github.com/muthu-kumaravel/basic_image_library/blob/master/main_code/README.md)
* [RGB to HSV](https://github.com/muthu-kumaravel/basic_image_library/blob/master/main_code/README.md)

## API & Header Description

### 1. HSV to RGB

Converts HSV image to RGB image

``` c
status img_hsv_to_rgb(
        float32 *ip_buff,
        uint8 *op_buff,
        img_size ip_img_size,
        img_size *op_img_size);
```  


| IO        | Variable          | Type            |
|:----------|:------------------|:----------------|
| in[1]     | ip_buff           | Float           |
| out[2]    | op_buff           | Unsigned char   |
| in[3]     | ip_img_size       | struct img_size |
| out[4]    | op_img_size       | struct img_size |

### 2. RGB to HSV

Converts RGB image to HSV image

``` c
status img_rgb_to_hsv(
        uint8 *ip_buff,
        float32 *op_buff,
        img_size ip_img_size,
        img_size *op_img_size);
```  


| IO        | Variable          | Type            |
|:----------|:------------------|:----------------|
| in[1]     | ip_buff           | Unsigned char   |
| out[2]    | op_buff           | Float           |
| in[3]     | ip_img_size       | struct img_size |
| out[4]    | op_img_size       | struct img_size |