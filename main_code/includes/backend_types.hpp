/**************************************************************************
 *   Copyright (C) 2020 MUTHUKUMARAVEL
 *   Author             : MUTHUKUMARAVEL 
 *   github username    : muthu-kumaravel
 *   github email       : muthukumaravel.muthuraman@gmail.com
**************************************************************************/

#include <iostream>
#include <stdio.h>
#include <cstring>

#define MAX_IMG_LENGTH ( 24883200 )                         // 4K image: 3840 * 2160 * 3

using namespace std;

typedef unsigned char       uint8;
typedef signed char         int8;
typedef unsigned short      uint16;
typedef short               int16;
typedef unsigned int        uint32;
typedef int                 int32;
typedef unsigned long long  uint64;
typedef long long           int64;
typedef float               float32;
typedef double              float64;

typedef void*               vptr;

typedef enum
{
    SUCCESS = 0,
    ERROR   = 1,
} status;

typedef struct 
{
    unsigned int width;
    unsigned int height;
    unsigned int channel;
} img_size;