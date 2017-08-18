//--------------------------------------------------
//Titel: LED_Würfel
//Dateiname: main.c
//
//Ersteller: Raum
//Datum: 08.08.2017
//--------------------------------------------------


#include <stdlib.h>
#include <avr/io.h>
#include <util/delay.h>

#define F_CPU 8000000UL//definiert Zeit

void led(char x, char y, char z);//Unterprogramm: LEDs

int main(void)
{
	
	int zeit = 500;
	
	DDRA = 0x00;//Pin 0-4
	DDRB = 0x00;//Pin 0-4
	DDRC = 0x00;//Pin 3-7
	DDRD = 0x00;//Pin 3-7
	
	
	while(1){
		DDRA = 0xFF;//Pin 0-4
		DDRB = 0xFF;//Pin 0-4
		DDRC = 0x00;//Pin 3-7
		DDRD = 0x00;//Pin 3-7
		
		PORTA = 0xFF;
		PORTB = 0x00;
		
		_delay_ms(zeit);
		
		DDRA = 0xFF;//Pin 0-4
		DDRB = 0x00;//Pin 0-4
		DDRC = 0xFF;//Pin 3-7
		DDRD = 0x00;//Pin 3-7
		
		PORTA = 0x00;
		PORTC = 0xFF;
		
		_delay_ms(zeit);
		
		PORTA = 0xFF;
		PORTC = 0x00;
		
		_delay_ms(zeit);
		
		DDRA = 0xFF;//Pin 0-4
		DDRB = 0x00;//Pin 0-4
		DDRC = 0x00;//Pin 3-7
		DDRD = 0xFF;//Pin 3-7
		
		PORTA = 0x00;
		PORTD = 0xFF;
		
		_delay_ms(zeit);
		
		PORTA = 0xFF;
		PORTD = 0x00;
		
		_delay_ms(zeit);
		
		
		
	}
	
	return 0;
	
}//Ende von main