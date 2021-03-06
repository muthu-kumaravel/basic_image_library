/**************************************************************************
 *   Copyright (C) 2020 MUTHUKUMARAVEL
 *   Author             : MUTHUKUMARAVEL 
 *   github username    : muthu-kumaravel
 *   github email       : muthukumaravel.muthuraman@gmail.com
**************************************************************************/
#ifndef BIL_ADOBE_TEMPERATURE_FUNCTIONS_H
#define BIL_ADOBE_TEMPERATURE_FUNCTIONS_H

#include "backend_types.hpp"
#include "img_rgb_to_hsv.hpp"
#include "img_hsv_to_rgb.hpp"

#ifdef __cplusplus

extern "C"
{
#endif

    /**************************************************************************
     *   img_temperature 
    ***************************************************************************
    *   in[1]  ip_buff                 (Unsigned char)
    *   out[2] op_buff                 (Unsigned char)
    *   in[3]  ip_img_size             (struct img_size)
    *   out[4] op_img_size             (struct img_size)
    *   in[5]  temperature              (char)
    *   OUTPUT_R = INPUT_R + temp
    *   OUTPUT_B = INPUT_B - temp
    *   temperature Limit               -127 to 128 ()
    *   Input image                    RGB
    **************************************************************************/
    status img_temperature(
        uint8 *ip_buff,
        uint8 *op_buff,
        img_size ip_img_size,
        img_size *op_img_size,
        int8 temperature);

#ifdef __cplusplus
}
#endif
#endif