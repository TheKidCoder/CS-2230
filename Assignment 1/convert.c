/*
	Christopher M. Ostrowski
	Base Converter
	Will Converter between Decimal, Hex, and Binary.
	
*/


#include <stdarg.h>
#include <stdio.h>

int main() {
	
	/* Define our array of base digits */
	char base_digits[16] = {'0', '1', '2', '3', '4', '5', '6', '7','8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

	/* Take a long int of input */
	long int input_number;
	
	/* Base */
	int base;
	
	/* Index counter for divison */
	int index = 0;
	
	/* An array of ints to hold the moded(is this even a word???) remainders. */
	/* We'll make it 64 long for top bits */
	int conversion_assembler[64];
	
	/* Get input */
	printf("Please enter the number you would like to convert: ");
	/*Get a long signed int */
	scanf("%ld", &input_number);
	
	/* Get Base */
	printf("Please provide the base to convert to: ");
	/* Get int */
	scanf("%i", &base);
	
	
	/* Loop until the remainder is zero. */
	while(input_number != 0) {
		/* Get the remainder and add it to the assembler */
		conversion_assembler[index] = input_number % base;
		/* Go down to the next number and divide */
		input_number = input_number / base;
		/* Increment our index counter */
		index++;
	}
	
	/* Jump back to the last entry in the assembler */
	index--;
	
	/* Print out the assembled number */
	printf("\nConverted Number = ");
	for(; index >= 0; index--) {
		/* Print out the base digit corresponding to the  */
		printf("%c", base_digits[conversion_assembler[index]]);
	}

	
}


