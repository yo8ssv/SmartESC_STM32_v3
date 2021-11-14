/*
 * display_ebics.h
 *
 *  Created on: 11.11.2020
 *      Author: Gaswerke
 */

#ifndef DISPLAY_EBICS_H_
#define DISPLAY_EBICS_H_

void ebics_init();
void ebics_reset();
void process_ant_page(MotorState_t *MS, MotorParams_t *MP);
void send_ant_page(uint8_t page, MotorState_t *MS, MotorParams_t *MP);
void checkUART_rx_Buffer(uint8_t UART_HANDLE);
void process_packet(unsigned char *data, unsigned int len);
void putbuffer(unsigned char *buf, unsigned int len);

#endif /* DISPLAY_EBICS_H_ */
