/*
 * File:		n_digits.c
 * Project:		C-Programming
 * Date:		11.02.22
 * Author:		Faint
 * Description:
 *
 * Calculates how many digits exist within a given number
 */

#include <stdio.h>

int digits_of_n(int n){
	
	if(n != 0){
		return (1 + (digits_of_n(n / 10)));
	} else{
		return 0;
	}
}

// === Main entry point of the program  ===
int main(){
	int number = 314159;
	int sum = digits_of_n(number);
	printf("Total digits: %d", sum);
	return 0;
}
