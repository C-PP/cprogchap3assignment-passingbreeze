/*
	200845388 È«Á¤¹Î assignment
	Problem 6
		The mass of a single molecule of water is about 3.0¡¿10 -23 grams. A quart of water is
		about 950 grams. Write a program that requests an amount of water, in quarts, and
		displays the number of water molecules in that amount.
*/ 

#include <stdio.h>
#include <stdlib.h>

void function(float);
/* ANSI/ISO C function prototyping */

int main(void) 
{
	float quarts=0.0f; //water quarts
	
	printf("Please enter water weight in quarts: ");//get input from the user
	scanf("%f", &quarts);
	printf("\nI will summon the function calculating the number of water molecules from your input data.\n");
	function(quarts);
	getchar();
	return 0;
}

void function(float quarts) // start of function definition
	{
		double num_mole = 0.0;  // water equivalent

		num_mole = (950.0*quarts)/(3.0*0.000000000000000000000001);
		printf("\nthe number of water molecules = %.e ea\n\n", num_mole);
		system("pause");
	}
