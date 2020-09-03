/**************************************************************************
 *   Copyright (C) 2020 MUTHUKUMARAVEL
 *   Author             : MUTHUKUMARAVEL 
 *   github username    : muthu-kumaravel
 *   github email       : muthukumaravel.muthuraman@gmail.com
**************************************************************************/

#include <iostream>
#include <stdio.h>
#include <cstring>
#include <math.h>

using namespace std;

#ifndef BILBT_H
#define BILBT_H

#ifdef __cplusplus

extern "C"
{
#endif

    typedef unsigned char uint8;
    typedef signed char int8;
    typedef unsigned short uint16;
    typedef short int16;
    typedef unsigned int uint32;
    typedef int int32;
    typedef unsigned long long uint64;
    typedef long long int64;
    typedef float float32;
    typedef double float64;

    typedef void *vptr;

    typedef enum
    {
        SUCCESS = 0,
        ERROR = 1,
    } status;

    typedef struct
    {
        uint32 width;
        uint32 height;
        uint32 channel;
    } img_size;

    typedef enum
    {
        NO_COLOUR = 1,
        WHITE = 255,
        BLACK = 0
    } img_padding_type;

#if BIL_DEBUG
#define ASSERT(s) assert(s);
#define DEBUG_INFO(...)      \
    {                        \
        printf(__VA_ARGS__); \
        fflush(stdout);      \
    }
#else
#define ASSERT(s)
#define DEBUG_INFO(...)
#endif

#define MAX_IMG_LENGTH (24883200)
#define PI 3.14159265
#define RAD(deg) (deg * PI / 180)
#define ABS(a) ((a < 0) ? (-a) : (a))
#define MIN2(a, b) ((a < b) ? a : b)
#define MIN3(a, b, c) ((a < b) && (a < c) ? a : ((b < c) ? b : c))
#define MAX2(a, b) ((a > b) ? a : b)
#define MAX3(a, b, c) ((a > b) && (a > c) ? a : ((b > c) ? b : c))
#define INRANGE(a, x, y) ((a >= x) && (a <= y) ? 1 : 0)
#define FLOOR(a) ((int32)a)
#define CEIL(a) ((int32)(a + 1.0))
#define ISEVEN(a) ((a % 2 == 0) ? 1 : 0)
#define PIXELCHECK(pixel) (pixel < (float32)0) ? ((float32)0) : ((pixel < (float32)255) ? pixel : ((float32)255))
#define ISGREATER(pixel, value) ((pixel > value) ? 1 : 0)
#define ISLESSER(pixel, value) ((pixel < value) ? 1 : 0)

#ifdef __cplusplus
}

#endif
#endif