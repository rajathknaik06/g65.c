/*Drake is working on a program that converts an integer to both binary and hexadecimal representations. 



Write a program that prints the binary representation of the integer without leading zeros and its hexadecimal representation.

Input format :
The first line of input consists of an integer value 'n', representing the user input.



Output format :
The first line of output displays "Binary: " followed by the binary representation without leading zeros.

The second line of output displays "Hexadecimal: " followed by the hexadecimal representation.*/



#include <stdio.h>

int main() {
    int number;

    scanf("%d", &number);

    printf("Binary: ");  //print the lable for binary output
    
    int leadingZero = 1;   //a flag to track leading zeros    The leadingZero flag is used to skip leading zeros until the first 1 bit is encountered.
    
    for (int i = sizeof(int) * 8 - 1; i >= 0; i--) {
        int bit = (number >> i) & 1;
        
        if (bit == 1) {
            leadingZero = 0;    //If the number is 0, the binary loop will skip all bits, resulting in no output. To handle this, you could add a special case for zero.
        }
        
        if (!leadingZero) {
            printf("%d", bit);
        }
    }

    printf("\n");
    printf("Hexadecimal: %X\n", number);    //The %X format specifier in printf is used to print the number in uppercase hexadecimal format.

    return 0;
}
