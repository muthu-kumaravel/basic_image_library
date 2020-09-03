/**************************************************************************
 *   Copyright (C) 2020 MUTHUKUMARAVEL
 *   Author             : MUTHUKUMARAVEL 
 *   github username    : muthu-kumaravel
 *   github email       : muthukumaravel.muthuraman@gmail.com
**************************************************************************/

#include "img_padding.hpp"

/****************IMAGE PADDING****************/
status img_padding(
    uint8 *ip_buff,
    uint8 *op_buff,
    img_size ip_img_size,
    img_size *op_img_size,
    img_padding_type bg)
{
    DEBUG_INFO("\nInitializing and processing Image Padding");
    DEBUG_INFO("\nInput Sizes\nHeight:\t %d\nWidth:\t %d\nChennel:\t %d", ip_img_size.height, ip_img_size.width, ip_img_size.channel);
    DEBUG_INFO("\nOutput Sizes \nHeight:\t %d\nWidth:\t %d\nChennel:\t %d", op_img_size->height, op_img_size->width, op_img_size->channel);
    if (ip_img_size.height > op_img_size->height || ip_img_size.width > op_img_size->width || ip_img_size.channel != op_img_size->channel)
    {
        DEBUG_INFO("\nImage Padding unsuccessfull dimension missmatch, Source image dimension bigger than output image");
        return ERROR;
    }
    if (bg == NO_COLOUR)
    {
        for (int32 iter1 = 0; iter1 < ip_img_size.height; iter1++)
        {
            for (int32 iter2 = 0; iter2 < ip_img_size.width; iter2++)
            {
                for (int32 iter3 = 0; iter3 < ip_img_size.channel; iter3++)
                {
                    *(op_buff + iter1 * op_img_size->width * op_img_size->channel + iter2 * op_img_size->channel + iter3) = *(ip_buff + iter1 * ip_img_size.width * ip_img_size.channel + iter2 * ip_img_size.channel + iter3);
                }
            }
        }
    }
    else if (bg == WHITE || bg == BLACK)
    {
        for (int32 iter1 = 0; iter1 < op_img_size->height; iter1++)
        {
            for (int32 iter2 = 0; iter2 < op_img_size->width; iter2++)
            {
                for (int32 iter3 = 0; iter3 < op_img_size->channel; iter3++)
                {
                    if (iter1 <= ip_img_size.height && iter2 < ip_img_size.width && iter3 < ip_img_size.channel)
                    {
                        // DEBUG_INFO("\nIF %d %d", iter1, iter2)
                        *(op_buff + iter1 * op_img_size->width * op_img_size->channel + iter2 * op_img_size->channel + iter3) = *(ip_buff + iter1 * ip_img_size.width * ip_img_size.channel + iter2 * ip_img_size.channel + iter3);
                    }
                    else
                    {
                        *(op_buff + iter1 * op_img_size->width * op_img_size->channel + iter2 * op_img_size->channel + iter3) = (uint8)PIXELCHECK(bg);
                    }
                }
            }
        }
    }
    else
    {
        DEBUG_INFO("\nImage Padding unsuccessfull (Background colour un identifed)");
        return ERROR;
    }
    if (op_buff != NULL)
    {
        DEBUG_INFO("\nImage Padding successfully completed");
        return SUCCESS;
    }
    else
    {
        DEBUG_INFO("\nImage Padding unsuccessfull");
        return ERROR;
    }
}