#include <stdio.h>

int add(int a, int b)
{
    printf("Address of a: %p\n", (void*)&a);
    printf("Address of b: %p\n", (void*)&b);

    return a + b;
}

int add2(int *x, int *y)
{
    printf("Address of x: %p\n", (void*)x);
    printf("Address of y: %p\n", (void*)y);

    return *x + *y;
}

void testfn(int a, int b)
{
    a = 100;
    b = 200;
}


void testfn2(int *a, int *b)
{
    *a = 100;
    *b = 200;
}

void greet(char *s)
{
    printf("Message: %s!\n", s);
}   

int main()
{

    int num1 = 5;
    int num2 = 10;

    char str[] = "Hello, world!";

    int result = add(num1, num2);
    int result2 = add2(&num1, &num2);

    printf("The sum is: %d\n", result);
    printf("The sum is: %d\n", result2);

    printf("Address of num1: %p\n", (void*)&num1);
    printf("Address of num2: %p\n", (void*)&num2);

    testfn(num1, num2);
    printf("After testfn, num1: %d, num2: %d\n", num1, num2);

    testfn2(&num1, &num2);
    printf("After testfn2, num1: %d, num2: %d\n", num1, num2);

    greet(str);


    return 0;
}