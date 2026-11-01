#include <stdio.h>

int main() 
{
    int number;
    
    printf("Enter an integer: ");
    scanf("%d", &number);
    
    char str[12]; // Buffer to hold the string representation of the integer
    sprintf(str, "%d", number); // Convert integer to string
    
    printf("The string representation of the integer is: %s\n", str);
    
    return 0;
}