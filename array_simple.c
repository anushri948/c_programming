#include <stdio.h>
int main() 
{
    int arr[] = {10, 22, 15, 45, 34, 22, 78, 98, 12, 47, 54, 23, 67, 89, 90, 11, 33, 44, 55, 66};
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array
    printf("Size of the array: %zu bytes\n", sizeof(arr));
    printf("Number of elements in the array: %d\n", size);

    printf("Array elements: ");
    for(int i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }
    
    printf("\n");
    return 0;
}