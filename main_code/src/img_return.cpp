#include "img_return.hpp"

status img_return(uint8* ip_buff, uint8* op_buff, img_size ip_img_size, img_size* op_img_size)
{
    op_img_size->channel = ip_img_size.channel;
    op_img_size->height = ip_img_size.height;
    op_img_size->width = ip_img_size.width;
    memcpy(op_buff, ip_buff, ip_img_size.channel * ip_img_size.height * ip_img_size.width * sizeof(uint8));
    if(op_buff != NULL)
    {
        return SUCCESS;
    }
    else
    {
        return ERROR;
    }
}