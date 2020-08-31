/**************************************************************************
 *   Copyright (C) 2020 MUTHUKUMARAVEL
 *   Author             : MUTHUKUMARAVEL 
 *   github username    : muthu-kumaravel
 *   github email       : muthukumaravel.muthuraman@gmail.com
**************************************************************************/

#include "img_hsv_to_rgb.hpp"

/****************IMAGE TEMPRATURE****************/

status pixel_hsv_to_rgb(
    float32 h,
    float32 s,
    float32 v,
    uint8 *r,
    uint8 *g,
    uint8 *b);

status img_hsv_to_rgb(
    float32 *ip_buff,
    uint8 *op_buff,
    img_size ip_img_size,
    img_size *op_img_size)
{
    DEBUG_INFO("\nInitializing and processing HSV to RGB");
    op_img_size->channel = ip_img_size.channel;
    op_img_size->height = ip_img_size.height;
    op_img_size->width = ip_img_size.width;
    DEBUG_INFO("\nInput Sizes\nHeight:\t %d\nWidth:\t %d\nChennel:\t %d", ip_img_size.height, ip_img_size.width, ip_img_size.channel);
    DEBUG_INFO("\nOutput Sizes set to\nHeight:\t %d\nWidth:\t %d\nChennel:\t %d", op_img_size->height, op_img_size->width, op_img_size->channel);
    uint8 r = 0, g = 0, b = 0;
    for (uint32 iter = 0; iter < op_img_size->height * op_img_size->width * op_img_size->channel; iter += 3)
    {
        r = 0, g = 0, b = 0;
        if (pixel_hsv_to_rgb(*(ip_buff + iter), *(ip_buff + iter + 1), *(ip_buff + iter + 2), &r, &g, &b) == ERROR)
        {
            DEBUG_INFO("\nHSV to RGB failed");
            return ERROR;
        }
        *(op_buff + iter) = r;
        *(op_buff + iter + 1) = g;
        *(op_buff + iter + 2) = b;
    }
    if (op_buff != NULL)
    {
        DEBUG_INFO("\nHSV to RGB successfully completed");
        return SUCCESS;
    }
    else
    {
        DEBUG_INFO("\nHSV to RGB unsuccessfull");
        return ERROR;
    }
}

status pixel_hsv_to_rgb(
    float32 h,
    float32 s,
    float32 v,
    uint8 *r,
    uint8 *g,
    uint8 *b)
{
    if (int32(INRANGE(h, 0, 360)) == int32(0) || int32(INRANGE(s, 0, 1)) == int32(0) || int32(INRANGE(v, 0, 1)) == int32(0))
    {
        DEBUG_INFO("\nPixel value out of bound %f %f %f",h,s,v);
        return ERROR;
    }
    float32 c = v * s;
    float32 x = c * (float)(1 - ABS((int32)(h / 60) % 2 - 1));
    float32 m = v - c;
    float32 tempr, tempg, tempb;
    if (int32(INRANGE(h, 0, 59)) == int32(1))
    {
        tempr = c;
        tempg = x;
        tempb = 0.0;
    }
    else if (int32(INRANGE(h, 60, 119)) == int32(1))
    {
        tempr = x;
        tempg = c;
        tempb = 0.0;
    }
    else if (int32(INRANGE(h, 120, 179)) == int32(1))
    {
        tempr = 0.0;
        tempg = c;
        tempb = x;
    }
    else if (int32(INRANGE(h, 180, 239)) == int32(1))
    {
        tempr = 0.0;
        tempg = x;
        tempb = c;
    }
    else if (int32(INRANGE(h, 240, 299)) == int32(1))
    {
        tempr = x;
        tempg = 0.0;
        tempb = c;
    }
    else if (int32(INRANGE(h, 300, 360)) == int32(1))
    {
        tempr = c;
        tempg = 0.0;
        tempb = x;
    }

    *r = (uint8)(PIXELCHECK((tempr + m) * 255));
    *g = (uint8)(PIXELCHECK((tempg + m) * 255));
    *b = (uint8)(PIXELCHECK((tempb + m) * 255));

    return SUCCESS;
}