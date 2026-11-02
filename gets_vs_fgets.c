#include <stdio.h>
int main()
{
    int j = 456;
    char str[10];
    int i = 123;

    printf("Enter a string: ");
    /* gets(str); // Read a string from the user */
    /* gets is dangerous and should be avoided. Use fgets instead. */
    /* The size of the buffer is not specified. Therefore, it can lead to buffer overflow. */
    /* fgets(char_array, size_of_array, input_stream); */

    fgets(str, sizeof(str), stdin);
    /* NOTE: extra characters in the buffer will spill into the next gets() / getchar() / scanf() inputs.*/
    /* If the input string is longer than the buffer size, the extra characters will remain in the input stream. */
    /* Also note - fgets() includes the newline character in the string, so you might want to remove it. */
    printf("The entered string is: %s\n", str); // Print the entered string

    printf("The value of i is: %d\n", i);
    printf("The value of j is: %d\n", j); 

    return 0;
}