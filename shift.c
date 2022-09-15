#include <stdio.h>

// This program takes a number and converts to a binary position 
// representation of that number.
// For example:
// The number 3 will set the third position in a binary number equal to 00000100  (4)
// The number 4 will set the fourth position in a binary number equal to 00001000 (8)

void main()
{
    int choice;

    printf("TO BINARY REPRESENTATION\n");

    choice = 1;
	printf("1. (1 << (choice)) = (%d)\n", (1 << (choice-1)));

    choice = 2;
	printf("2. (1 << (choice)) = (%d)\n", (1 << (choice-1)));

    choice = 3;
	printf("3. (1 << (choice)) = (%d)\n", (1 << (choice-1)));

    choice = 4;
	printf("4. (1 << (choice)) = (%d)\n", (1 << (choice-1)));
}
