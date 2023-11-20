//Scenario
//Write a program that asks the user to enter a number.Then:
//the program should print the number of lines corresponding to the number inputted;
//each line should contain the number of pairs of characters* # equal to the number of this line.
//The outputted "drawing" should be similar to the right half of a pyramid.
//Your version of the program must print the same result as the expected output.To do this lab, you must use two do - while loops.
//
//However:
//when the user inputs a number less than or equal to 1, the program should print only one line;
//When the user inputs a number greater than 20, the program should print only twenty lines.
//
////////////////////////////////////////////////////////////////////////////////////////////////////
//
//Sample Input
//3
//
//Expected output
//* #
//* # * #
//* # * # * #
//
//Sample Input
//5
//
//Expected output
//* #
//* # * #
//* # * # * #
//* # * # * # * #
//* # * # * # * # * #
//
//Sample Input
//0
//
//Expected output
//* #
//
////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main(void) 
{
	int v1 = 0, v2 = 0;
	scanf_s("%d", &v1);
	do{
		int v3 = 0;
		do{
			printf("*#");
			v3++;
		} while (v3 <= v2);
		v2++;
		printf("\n");
	} while (v2<v1);
}