#include <stdio.h>
#include <string.h>

void print_binary(unsigned char letter) {
  int binary[8];

  for(int n = 0; n < 8; n++)
    binary[7-n] = (letter >> n) & 1;

  for(int n = 0; n < 8; n++)
    printf("%d", binary[n]);

  printf("\n");
}

char trade(unsigned char value){
	
	unsigned char y = (value & 0b1111);
	unsigned char x = value >> 4 & 0b1111;

	unsigned char sub = ~(y & 0b11);

	y = y >> 2;
	y = (y << 2) + (sub & 0b11);

	unsigned char result = (y << 4) + x;

	printf("%c", result);
}

void main(){

	unsigned char bin[] = {
		0b10010110,
		0b11110111,
		0b01010110,
		0b00000001,
		0b00010111,
		0b00100110,
		0b01010111,
		0b00000001,
		0b00010111,
		0b01110110,
		0b01010111,
		0b00110110,
		0b11110111,
		0b11010111,
		0b01010111,
		0b00000011
	};

	for(int num=0; num < sizeof(bin); num++){
		trade(bin[num]);
	}
}
