#include <stdio.h>
#include <string.h>

/* Implement a function to reverse a given string */

void string_reverse(char *str)
{
    int len = strlen(str);
    char ch;
    char *start = str;
    char *end = str + (len-1);
    while (start < end) {
        ch = *start;
        *start++ = *end;
        *end-- = ch;
    }

}
int main()
{
    char str[100];

    printf("Enter a string:");
    fgets(str, sizeof(str), stdin);
    string_reverse(str);

    printf("The reverse of the given string: %s\n", str);

    return 0;
}