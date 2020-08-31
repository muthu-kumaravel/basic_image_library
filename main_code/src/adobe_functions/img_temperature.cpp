/**************************************************************************
 *   Copyright (C) 2020 MUTHUKUMARAVEL
 *   Author             : MUTHUKUMARAVEL 
 *   github username    : muthu-kumaravel
 *   github email       : muthukumaravel.muthuraman@gmail.com
**************************************************************************/

#include "img_temperature.hpp"

/****************IMAGE temperature****************/
status img_temperature(
    uint8 *ip_buff,
    uint8 *op_buff,
    img_size ip_img_size,
    img_size *op_img_size,
    int8 temperature)
{
    DEBUG_INFO("\nInitializing and processing Image Temperature");
    if(int32(INRANGE((int32)temperature, -127, 128)) == (int32)(0))
    {
        DEBUG_INFO("\nTemperature out of range must be between -127 to 128, but input temperature is %d and range is %d", (int32)temperature, INRANGE((int32)temperature, -127, 128));
        return ERROR;
    }
    else
    {
        op_img_size->channel = ip_img_size.channel;
        op_img_size->height = ip_img_size.height;
        op_img_size->width = ip_img_size.width;
        DEBUG_INFO("\nInput Sizes\nHeight:\t %d\nWidth:\t %d\nChennel:\t %d", ip_img_size.height, ip_img_size.width, ip_img_size.channel);
        DEBUG_INFO("\nOutput Sizes set to\nHeight:\t %d\nWidth:\t %d\nChennel:\t %d", op_img_size->height, op_img_size->width, op_img_size->channel);
        float32 *hsv = (float32 *)malloc(sizeof(float32) * op_img_size->height * op_img_size->width * op_img_size->channel);
        img_size hsv_img_size;
        if(img_rgb_to_hsv(ip_buff, hsv, ip_img_size, &hsv_img_size) == ERROR)
        {
            DEBUG_INFO("\nImage Temperature unsuccessfull"); 
            return ERROR;
        }
        if(img_hsv_to_rgb(hsv, op_buff, hsv_img_size, op_img_size) == ERROR)
        {
            DEBUG_INFO("\nImage Temperature unsuccessfull"); 
            return ERROR;
        }
        if (op_buff != NULL)
        {
            DEBUG_INFO("\nImage Temperature successfully completed");
            return SUCCESS;
        }
        else
        {
            DEBUG_INFO("\nImage Temperature unsuccessfull"); 
            return ERROR;
        }
    }
}