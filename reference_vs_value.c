#include <stdio.h>
int main()
{
    int a = 10;
    int b = a;

    printf("a = %d, b = %d\n", a, b); // Print the value of 'a'
    
    b = 20; // Change the value of 'b'

    printf("After changing b, a = %d, b = %d\n", a, b);
    
    int *c = &a; // Pointer to 'a'

    printf("a = %d, *c = %d\n", a, *c); // Print the value of 'a' and the value pointed to by 'c'

    *c = 30;

    printf("After changing *c, a = %d, *c = %d\n", a, *c); // Print the value of 'a' and the value pointed to by 'c'

    
    return 0;
}