#include <stdio.h>
int main()
{
    char arr[] = {65, 66, 67, 68, 69, 70, 71, 72, 73, 74}; // Array of ASCII values
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    
    int *ptr = (int *)arr; // Pointer to the first element of the array
/* short *ptr = (short *)arr; */


    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%x\n", *(ptr + i)); // Print each character
    }
    printf("\n");
    return 0;
}