#include <stdio.h>

typedef struct{
    uint8_t    head;//包头
    uint32_t   addr_dst;//目的地地址
    uint32_t   addr_src;//网络地址
    uint8_t    type;//包类型
    uint32_t   cseq;//指定这是第几个包
    uint8_t    recur;//重发次数
    uint8_t    length;//数据长度
    uint8_t    data[128];//包数据
    uint32_t   crc;//crc32校验
    uint8_t    end;//包尾
}packet_t;

packet_t txpacket;
packet_t rxpacket;

bool TxBuffer(char *buf, char *data, int data_length, uint32_t addr_dst, uint32_t addr_src, uint8_t typs)
{
    txpacket.head = 0xAA;
    txpacket.end  = 0xBB; 
    if(data_length > 128)
    {
        return false;
    }
    return  true;
}

bool RxBuffer(char *buf, char *data, int data_length, uint32_t addr_dst, uint32_t addr_src, uint8_t typs)
{
    rxpacket.head = 0xAA;
    rxpacket.end  = 0xBB; 
    if(data_length > 128)
    {
        return false;
    }
    return  true;

}