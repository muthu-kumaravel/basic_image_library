/**************************************************************************
 *   Copyright (C) 2020 MUTHUKUMARAVEL
 *   Author             : MUTHUKUMARAVEL 
 *   github username    : muthu-kumaravel
 *   github email       : muthukumaravel.muthuraman@gmail.com
**************************************************************************/
#ifndef BIL_MATH_FUNCTIONS_H
#define BIL_MATH_FUNCTIONS_H

#include "backend_types.hpp"

#ifdef __cplusplus

extern "C"
{
#endif

    /**************************************************************************
     *   img_absolute_difference
    ***************************************************************************
    *   in[1]  ip_buff1                (Unsigned char)
    *   in[2]  ip_buff2                (Unsigned char)
    *   out[3] op_buff                 (Unsigned char)
    *   in[4]  ip_img_size             (struct img_size)
    *   out[5] op_img_size             (struct img_size)
    *   OUTPUT = ABS(INPUT1 - INPUT2)
    *   Size of input1 = Size of input2
    **************************************************************************/
    status img_absolute_difference(
        uint8 *ip_buff1,
        uint8 *ip_buff2,
        uint8 *op_buff,
        img_size ip_img_size,
        img_size *op_img_size);

#ifdef __cplusplus
}
#endif
#endif