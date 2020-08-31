/**************************************************************************
 *   Copyright (C) 2020 MUTHUKUMARAVEL
 *   Author             : MUTHUKUMARAVEL 
 *   github username    : muthu-kumaravel
 *   github email       : muthukumaravel.muthuraman@gmail.com
**************************************************************************/

#include "img_rgb_to_hsv.hpp"

/****************IMAGE TEMPRATURE****************/

status pixel_rgb_to_hsv(
    uint8 r,
    uint8 g,
    uint8 b,
    float32 *h,
    float32 *s,
    float32 *v);

status img_rgb_to_hsv(
    uint8 *ip_buff,
    float32 *op_buff,
    img_size ip_img_size,
    img_size *op_img_size)
{
    DEBUG_INFO("\nInitializing and processing RGB to HSV");
    op_img_size->channel = ip_img_size.channel;
    op_img_size->height = ip_img_size.height;
    op_img_size->width = ip_img_size.width;
    DEBUG_INFO("\nInput Sizes\nHeight:\t %d\nWidth:\t %d\nChennel:\t %d", ip_img_size.height, ip_img_size.width, ip_img_size.channel);
    DEBUG_INFO("\nOutput Sizes set to\nHeight:\t %d\nWidth:\t %d\nChennel:\t %d", op_img_size->height, op_img_size->width, op_img_size->channel);
    float32 h = 0, s = 1, v = 0;
    for (uint32 iter = 0; iter < op_img_size->height * op_img_size->width * op_img_size->channel; iter += 3)
    {
        h = 0, s = 1, v = 0;
        if (pixel_rgb_to_hsv(*(ip_buff + iter), *(ip_buff + iter + 1), *(ip_buff + iter + 2), &h, &s, &v) == ERROR)
        {
            DEBUG_INFO("\nRGB to HSV failed");
            return ERROR;
        }
        *(op_buff + iter) = h;
        *(op_buff + iter + 1) = s;
        *(op_buff + iter + 2) = v;
    }
    if (op_buff != NULL)
    {
        DEBUG_INFO("\nRGB to HSV successfully completed");
        return SUCCESS;
    }
    else
    {
        DEBUG_INFO("\nRGB to HSV unsuccessfull");
        return ERROR;
    }
}

status pixel_rgb_to_hsv(
    uint8 r,
    uint8 g,
    uint8 b,
    float32 *h,
    float32 *s,
    float32 *v)
{
    if (int32(INRANGE(r, 0, 255)) == int32(0) || int32(INRANGE(g, 0, 255) == int32(0)) || int32(INRANGE(b, 0, 255)) == int32(0))
    {
        DEBUG_INFO("\nPixel value out of bound");
        return ERROR;
    }
    float32 normr = float32(r) / 255;
    float32 normg = float32(g) / 255;
    float32 normb = float32(b) / 255;
    float32 cmax = float32(MAX3(normr, normg, normb));
    float32 cmin = float32(MIN3(normr, normg, normb));
    float32 delta = cmax - cmin;

    if (delta == 0)
    {
        *h = 0;
    }
    else if (cmax == normr)
    {
        *h = (float32)((int32)(60 * ((normg - normb) / delta) + 360) % 360);
    }
    else if (cmax == normg)
    {
        *h = (float32)((int32)(60 * ((normb - normr) / delta) + 120) % 360);
    }
    else if (cmax == normb)
    {
        *h = (float32)((int32)(60 * ((normr - normg) / delta) + 240) % 360);
    }

    if (cmax == 0)
    {
        *s = 0.0f;
    }
    else
    {
        *s = delta / cmax;
    }

    *v = cmax;

    return SUCCESS;
}