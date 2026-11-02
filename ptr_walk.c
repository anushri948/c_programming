#include <stdio.h>
int main()
{
    char arr[] = {65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 0}; // Array of ASCII values
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    
    char *ptr = arr; // Pointer to the first element of the array
 
    printf("Array elements: ");
    for (;*ptr; ptr++) {
        printf("%d\n", *ptr); // Print each character
    }
    
    printf("\n");
    return 0;
}