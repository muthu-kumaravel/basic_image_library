/**************************************************************************
 *   Copyright (C) 2020 MUTHUKUMARAVEL
 *   Author             : MUTHUKUMARAVEL 
 *   github username    : muthu-kumaravel
 *   github email       : muthukumaravel.muthuraman@gmail.com
**************************************************************************/
#ifndef BIL_BASIC_FUNCTIONS_H
#define BIL_BASIC_FUNCTIONS_H

#include "backend_types.hpp"

#ifdef __cplusplus

extern "C"
{
#endif

    /**************************************************************************
     *   img_return 
    ***************************************************************************
    *   in[1]  ip_buff                 (Unsigned char)
    *   out[2] op_buff                 (Unsigned char)
    *   in[3]  ip_img_size             (struct img_size)
    *   out[4] op_img_size             (struct img_size)
    *   OUTPUT = INPUT
    **************************************************************************/
    status img_return(
        uint8 *ip_buff,
        uint8 *op_buff,
        img_size ip_img_size,
        img_size *op_img_size);

#ifdef __cplusplus
}
#endif
#endif