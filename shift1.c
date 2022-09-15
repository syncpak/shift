#include <stdio.h>

// This program takes a binary position and converts it to the number it represents  
// For example:
// The third position in a binary number equal to 00000100 (4) will be converted to the number 3
// The fourth position in a binary number equal to 00001000 (8) will be converted to the number 4

void main()
{
    int choice;
    int choice_tmp;
    int shift_ct;

    printf("TO INTEGER REPRESENTATION\n");

    /* Count the number of right shifts to get the '1' into the LSB. */
    /* The test in the printf statement is in case "choice" was '0' to start with. */
    /* This code does NOT check for "choice" entries that have more than one bit set. */

    choice = 0; /* Testing invalid choice. */
    for(choice_tmp = choice, shift_ct = 0; choice_tmp > 1; choice_tmp >>= 1, shift_ct++);
    printf("choice = (%d), Integer = (%d)\r\n", (choice), (choice_tmp > 0 ? (shift_ct + 1) : 0));

    choice = 1;
    for(choice_tmp = choice, shift_ct = 0; choice_tmp > 1; choice_tmp >>= 1, shift_ct++);
    printf("choice = (%d), Integer = (%d)\r\n", (choice), (choice_tmp > 0 ? (shift_ct + 1) : 0));

    choice = 2;
    for(choice_tmp = choice, shift_ct = 0; choice_tmp > 1; choice_tmp >>= 1, shift_ct++);
    printf("choice = (%d), Integer = (%d)\r\n", (choice), (choice_tmp > 0 ? (shift_ct + 1) : 0));

    choice = 4;
    for(choice_tmp = choice, shift_ct = 0; choice_tmp > 1; choice_tmp >>= 1, shift_ct++);
    printf("choice = (%d), Integer = (%d)\r\n", (choice), (choice_tmp > 0 ? (shift_ct + 1) : 0));

    choice = 8;
    for(choice_tmp = choice, shift_ct = 0; choice_tmp > 1; choice_tmp >>= 1, shift_ct++);
    printf("choice = (%d), Integer = (%d)\r\n", (choice), (choice_tmp > 0 ? (shift_ct + 1) : 0));
}
