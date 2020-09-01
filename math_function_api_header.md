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

## Supported Math Functions

* Absolute Difference

## API & Header Description

### 1. Absolute Difference

Performes a Absolute difference on two input images and does a pixel check on top of that

> **img_absolute_difference** 
>
> OUTPUT = ABS(INPUT1 - INPUT2)


``` c
status img_absolute_difference(
        uint8 *ip_buff1,
        uint8 *ip_buff2,
        uint8 *op_buff,
        img_size ip_img_size,
        img_size *op_img_size);
```  


| IO        | Variable          | Type            |
|:----------|:------------------|:----------------|
| in[1]     | ip_buff1          | Unsigned char   |
| in[2]     | ip_buff2          | Unsigned char   |
| out[3]    | op_buff           | Unsigned char   |
| in[4]     | ip_img_size       | struct img_size |
| out[5]    | op_img_size       | struct img_size |