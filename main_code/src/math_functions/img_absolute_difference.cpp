/**************************************************************************
 *   Copyright (C) 2020 MUTHUKUMARAVEL
 *   Author             : MUTHUKUMARAVEL 
 *   github username    : muthu-kumaravel
 *   github email       : muthukumaravel.muthuraman@gmail.com
**************************************************************************/

#include "img_absolute_difference.hpp"

/****************ABSOLUTE DIFFERENCE****************/
status img_absolute_difference(
    uint8 *ip_buff1,
    uint8 *ip_buff2,
    uint8 *op_buff,
    img_size ip_img_size,
    img_size *op_img_size)
{
    DEBUG_INFO("\nInitializing and processing Image Absolute Difference");
    op_img_size->channel = ip_img_size.channel;
    op_img_size->height = ip_img_size.height;
    op_img_size->width = ip_img_size.width;
    DEBUG_INFO("\nInput Sizes\nHeight:\t %d\nWidth:\t %d\nChennel:\t %d", ip_img_size.height, ip_img_size.width, ip_img_size.channel);
    DEBUG_INFO("\nOutput Sizes set to\n Height:\t %d\nWidth:\t %d\nChennel:\t %d", op_img_size->height, op_img_size->width, op_img_size->channel);
    for (int i = 0; i < ip_img_size.channel * ip_img_size.height * ip_img_size.width; i++)
    {
        int temp = (int)*(ip_buff1 + i) - (int)*(ip_buff2 + i);
        temp = ABS(temp);
        *(op_buff + i) = PIXELCHECK(temp);
    }
    if (op_buff != NULL)
    {
        DEBUG_INFO("\nImage Absolute Difference successfully completed");
        return SUCCESS;
    }
    else
    {
        DEBUG_INFO("\nImage Absolute Difference unsuccessfull");
        return ERROR;
    }
}