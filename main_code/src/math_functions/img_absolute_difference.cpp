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
    op_img_size->channel = ip_img_size.channel;
    op_img_size->height = ip_img_size.height;
    op_img_size->width = ip_img_size.width;
    for (int i = 0; i < ip_img_size.channel * ip_img_size.height * ip_img_size.width; i++)
    {
        int temp = (int)*(ip_buff1 + i) - (int)*(ip_buff2 + i);
        temp = ABS(temp);
        *(op_buff + i) = PIXELCHECK(temp);
    }
    if (op_buff != NULL)
    {
        return SUCCESS;
    }
    else
    {
        return ERROR;
    }
}