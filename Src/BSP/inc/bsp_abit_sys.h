#ifndef __BSP_ABIT_SYS_H
#define __BSP_ABIT_SYS_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "stm32f4xx_usart.h"

#include "bsp_abit_delay.h"

uint8_t bsp_abit_char_2_hex(uint8_t *src);

uint8_t bsp_abit_hex_2_char(uint8_t *src);

void bsp_abit_reset_recv_buff(uint8_t *recv_len, uint8_t *recv_buff, uint8_t size);

uint8_t bsp_abit_string_cpy(uint8_t *src, uint8_t *desc, uint8_t *obj, uint8_t *end, uint8_t srclen);

uint8_t bsp_abit_string_search(uint8_t *src, uint8_t *obj, uint8_t srclen);

uint8_t bsp_abit_send_at_cmd(USART_TypeDef *usartx, uint8_t *cmd, uint8_t *relay, uint8_t *msg, uint8_t delay, uint8_t msg_len);

#endif //__BSP_ABIT_SYS_H