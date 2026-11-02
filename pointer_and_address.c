#include <stdio.h>
int main()
{
    int a = 123;

    int *ptr = &a; /* Assign the address of 'a' to the pointer 'ptr' */

    printf("The value of a is: %d\n", a); // Print the value of 'a'
    printf("The address of a is: %p\n", &a); // Print the address of 'a'
    printf("The ptr is: %p\n", ptr); // Print the address stored in 'ptr'
    printf("The value stored at the address in ptr is: %d\n", *ptr); // Print the value pointed to by 'ptr'

    printf("The address of ptr is: %p\n", &ptr); // Print the address of 'ptr'

    (*ptr)++; /* Increment the value pointed to by 'ptr' */

    printf("The value of a after incrementing the value pointed to by ptr is: %d\n", a); // Print the value of 'a' after incrementing

    return 0;
}