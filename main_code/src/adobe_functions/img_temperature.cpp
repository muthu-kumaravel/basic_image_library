/**************************************************************************
 *   Copyright (C) 2020 MUTHUKUMARAVEL
 *   Author             : MUTHUKUMARAVEL 
 *   github username    : muthu-kumaravel
 *   github email       : muthukumaravel.muthuraman@gmail.com
**************************************************************************/

#include "img_temperature.hpp"

/****************IMAGE TEMPRATURE****************/
status img_temprature(
    uint8 *ip_buff,
    uint8 *op_buff,
    img_size ip_img_size,
    img_size *op_img_size,
    int8 temprature)
{
    DEBUG_INFO("\nInitializing and processing Image Temperature");
    if(temprature > 128 || temprature < -127)
    {
        DEBUG_INFO("\nTemperature out of range must be between -127 to 128");
        return ERROR;
    }
    else
    {
        op_img_size->channel = ip_img_size.channel;
        op_img_size->height = ip_img_size.height;
        op_img_size->width = ip_img_size.width;
        DEBUG_INFO("\nInput Sizes\nHeight:\t %d\nWidth:\t %d\nChennel:\t %d", ip_img_size.height, ip_img_size.width, ip_img_size.channel);
        DEBUG_INFO("\nOutput Sizes set to\nHeight:\t %d\nWidth:\t %d\nChennel:\t %d", op_img_size->height, op_img_size->width, op_img_size->channel);
        for(uint32 iter = 0; iter < op_img_size->height * op_img_size->width * op_img_size->channel; iter += 3)
        {
            int32 temp = (int32)*(ip_buff + iter) + (int32)(temprature);
            temp = (int32)(PIXELCHECK(temp));
            *(op_buff + iter) = (uint8)(temp);
            temp = (int32)*(ip_buff + iter + op_img_size->channel - 1) - (int32)(temprature);
            temp = (int32)(PIXELCHECK(temp));
            *(op_buff + iter + op_img_size->channel - 1) = (uint8)(temp);
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