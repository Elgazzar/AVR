
#define F_CPU 8000000UL    // Define CPU frequency for delay functions
#include <avr/io.h>
#include <util/delay.h>

int main(void) {
	// Set PB0 as output
	DDRB |= (1 << PB0);

	while (1) {
		// Toggle PB0
		PORTB ^= (1 << PB0);
		_delay_ms(1000);    // 500 ms delay
	}
}
