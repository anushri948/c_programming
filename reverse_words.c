#include <stdio.h>
#include <string.h>

/* Implement a function to reverse each word in the given string */

void strip_newline(char *str)
{
  while ((*str != '\n') && (*str != '\0')) {
    str++;
  }
  *str = '\0';
}


char *word_end(char *str)
{   
    while (*str != ' ' && *str != '\0')
        str++;

    return str-1;
}

void words_reverse(char *str)
{
    char ch;

    char *start = str;

    do {
        char *pos = word_end(start);
        char *wend = pos;


        while (start < wend) {
            ch = *start;
            *start++ = *wend;
            *wend-- = ch;
        }

        start = pos+1; // Move to the next word
        
        while (*start == ' ' && *start != '\0') // Skip spaces as long as it does not reach the end of string
            start++;

    } while (*start);

}

int main()
{
    char str[100];

    printf("Enter a string:");
    fgets(str, sizeof(str), stdin);
 
    strip_newline(str);
    words_reverse(str);

    printf("Reversed words of this string: %s\n", str);

    return 0;
}