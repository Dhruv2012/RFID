#ifndef LCD
#define LCD


#define F_CPU 8000000UL
#include <avr/io.h>
#include <util/delay.h>
#include <stdlib.h>
#include <avr/sfr_defs.h>

#define DATA_PORT			PORTB
#define DDR_DATA_PORT		DDRB
#define DATA_READ			PINB
#define D7					7
#define CONTROL_PIN_PORT	PORTF
#define DDR_CONTROL_PIN		DDRF
#define ENABLE				PINF4
#define W_R					PINF3
#define CMD_CHAR			PINF2

void flash_enable(void);
void send_char(unsigned char character);
void send_command(unsigned char command);
void lcd_busy(void);
void send_string(char *string);
void config_LCD(void);
void send_integer(double numb);
void send_double(double numb);
void goto_location(int x,int y);

#endif