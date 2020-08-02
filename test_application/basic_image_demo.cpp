#include <iostream>
#include <stdio.h>

#define STB_IMAGE_IMPLEMENTATION
#include "includes/stb_image.hpp"
#define STB_IMAGE_WRITE_IMPLEMENTATION
#include "includes/stb_image_write.hpp"

#include "general_include.hpp"

int main()
{
    const char *input_image_path = "input_test_image/test_image.png";
    const char *output_image_path = "output_test_images/test_image.png";
    int32 height, width, channel;
    uint8 *ip_image = stbi_load(input_image_path, &width, &height, &channel, 3);       
    uint8 *op_image = (uint8 *)malloc(height * width * channel * sizeof(uint8)); 
    img_size ip_image_size, op_image_size;
    ip_image_size.channel = channel;
    ip_image_size.height = height;
    ip_image_size.width = width;
    status err;
    err = img_return(ip_image, op_image, ip_image_size, &op_image_size);
    if(err == SUCCESS)
    {
        stbi_write_png(output_image_path, op_image_size.width, op_image_size.height, op_image_size.channel, ip_image, op_image_size.width * op_image_size.channel);
    }
    else
    {
        cerr<<"FAILURE";
    } 
    return 0;
}