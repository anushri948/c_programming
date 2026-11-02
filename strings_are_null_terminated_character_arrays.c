#include <stdio.h>
int main()
{
    char str[] = "Hello,\0 World!";
    printf("%s", str); // Print the string

    return 0;
}