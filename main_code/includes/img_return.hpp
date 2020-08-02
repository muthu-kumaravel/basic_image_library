/**************************************************************************
 *   Copyright (C) 2020 MUTHUKUMARAVEL
 *   Author             : MUTHUKUMARAVEL 
 *   github username    : muthu-kumaravel
 *   github email       : muthukumaravel.muthuraman@gmail.com
**************************************************************************/

#include "backend_types.hpp"

/**************************************************************************
 *   img_return 
 **************************************************************************
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

/**************************************************************************
 *   img_absolute_difference
 **************************************************************************
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