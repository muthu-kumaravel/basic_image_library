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

## Basic Functions

* Image Copy

## API & Header Description

### 1. Image Return

Copies input image bitwise to the destination image (memcpy)

> **img_return** 
> 
> OUTPUT = INPUT1


``` c
status img_return(
        uint8 *ip_buff,
        uint8 *op_buff,
        img_size ip_img_size,
        img_size *op_img_size);
```  


| IO        | Variable          | Type            |
|:----------|:------------------|:----------------|
| in[1]     | ip_buff           | Unsigned char   |
| out[2]    | op_buff           | Unsigned char   |
| in[3]     | ip_img_size       | struct img_size |
| out[4]    | op_img_size       | struct img_size |

### 2. Image Padding

Input a smaller image and outputs a same image padded inside a larger image of user given dimension

``` c
status img_padding(
        uint8 *ip_buff,
        uint8 *op_buff,
        img_size ip_img_size,
        img_size *op_img_size,
        img_padding_type bg);
```  


| IO        | Variable          | Type            |
|:----------|:------------------|:----------------|
| in[1]     | ip_buff           | Unsigned char   |
| out[2]    | op_buff           | Unsigned char   |
| in[3]     | ip_img_size       | struct img_size |
| in[4]     | op_img_size       | struct img_size |
| in[5]     | bg                | img_padding_type|

* **img_padding_type**

``` c
typedef enum
{
    NO_COLOUR = 1,
    WHITE = 255,
    BLACK = 0
} img_padding_type;
```
