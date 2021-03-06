/*
*********************************************************************************************************
*
*    模块名称 : CRC32算法，STM32硬件专用
*    文件名称 : crc32_stm32.h
*    说    明 : 头文件
*
*    Copyright (C), 2019-2030, 安富莱电子 www.armfly.com
*
*********************************************************************************************************
*/

#ifndef CRC32_STM32_H
#define CRC32_STM32_H

uint32_t STM32_CRC32_LE(uint8_t *_pBuf, uint32_t _Len, uint32_t _InitValue);
 
#endif
