#include <stdio.h>

int string_length(char *str) {
    int length = 0;
    while (*str++) {
        length++;
    }
    return length;
}

void strip_newline(char *str)
{
  /*for(; *str != '\n' && *str != '\0'; str++)
     ;
  *str = '\0'; */

  while ((*str != '\n') && (*str != '\0')) {
    str++;
  }
  *str = '\0';
}

int is_palindrome_1(char *str) {
    int length = string_length(str);
    int start = 0;
    int end = length - 1;

    while (start < end) {
        if (str[start] != str[end]) {
            return 0; // Not a palindrome
        }
        start++;
        end--;
    }
    return 1; // Is a palindrome
}


int is_palindrome(char *str) {
    int length = string_length(str);
    char *start = str;
    char *end = str + length - 1;

    while (start < end) {
        if (*start++ != *end--) {
            return 0; // Not a palindrome
        }
    } 
    return 1; // Is a palindrome
}

int main()
{
    char str[100];

    printf("Enter a string: ");  
    fgets(str, sizeof(str), stdin);

    strip_newline(str);
    int length = string_length(str);

    printf("The entered string is: %s\n", str); // Print the entered string
    printf("The length of the string is: %d\n", length); // Print the length of the string

    if (is_palindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}