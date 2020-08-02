/**************************************************************************
 *   Copyright (C) 2020 MUTHUKUMARAVEL
 *   Author             : MUTHUKUMARAVEL 
 *   github username    : muthu-kumaravel
 *   github email       : muthukumaravel.muthuraman@gmail.com
**************************************************************************/

#include <iostream>
#include <stdio.h>

#define STB_IMAGE_IMPLEMENTATION
#include "includes/stb_image.hpp"
#define STB_IMAGE_WRITE_IMPLEMENTATION
#include "includes/stb_image_write.hpp"

#include "general_include.hpp"

int main()
{
    const char *input_image_path_1 = "input_test_image/test_image.png";
    const char *input_image_path_2 = "input_test_image/test_image.png";
    int32 height, width, channel;
    uint8 *ip_image_1 = stbi_load(input_image_path_1, &width, &height, &channel, 3);
    uint8 *ip_image_2 = stbi_load(input_image_path_2, &width, &height, &channel, 3);
    uint8 *op_image_1 = (uint8 *)malloc(height * width * channel * sizeof(uint8)); 
    img_size ip_image_size_1, op_image_size_1;
    ip_image_size_1.channel = channel;
    ip_image_size_1.height = height;
    ip_image_size_1.width = width;
    status err = SUCCESS;

    /* img_return */
    const char *output_image_path_img_return = "output_test_images/img_return.png";
    if(err == img_return(ip_image_1, op_image_1, ip_image_size_1, &op_image_size_1))
    {
        stbi_write_png(output_image_path_img_return, op_image_size_1.width, op_image_size_1.height, op_image_size_1.channel, op_image_1, op_image_size_1.width * op_image_size_1.channel);
        cerr<<"SUCCESS\n";
    }
    else
    {
        cerr<<"FAILURE\n";
    } 

    /* Absolute */
    const char *output_image_path_img_absolute_difference = "output_test_images/img_absolute_difference.png";
    if(err == img_absolute_difference(ip_image_1, ip_image_2, op_image_1, ip_image_size_1, &op_image_size_1))
    {
        stbi_write_png(output_image_path_img_absolute_difference, op_image_size_1.width, op_image_size_1.height, op_image_size_1.channel, op_image_1, op_image_size_1.width * op_image_size_1.channel);
        cerr<<"SUCCESS\n";
    }
    else
    {
        cerr<<"FAILURE\n";
    } 

    return 0;
}