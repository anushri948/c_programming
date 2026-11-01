#include <stdio.h>

#define TRUE 1

int main()
{
    int choice;
    float a, b;

    while (TRUE) {
        printf("----------------------------------\n");
        printf("------CALCULATOR MENU------\n"
                "   1. Addition\n"
                "   2. Subraction\n"
                "   3. Multiplication\n"
                "   4. Division\n"
                "   5. Exit\n");
        printf("----------------------------------\n");
        printf("Enter choice: ");
        scanf("%d", &choice);


        if (choice == 5) {
            printf("Exiting the program\n");
            break;
        }

        printf("Enter two numbers: ");
        scanf("%f%f", &a, &b);

        switch (choice) {
            case 1:
            printf("%.2f + %.2f => %.2f\n", a, b, a+b);
            break;
            
            case 2:
            printf("%.2f - %.2f => %.2f\n", a, b, a-b);
            break;
            
            case 3:
            printf("%.2f * %.2f => %.2f\n", a, b, a*b);
            break;
            
            case 4:
            printf("%.2f / %.2f => %.2f\n", a, b, a/b);
            break;
            
            default:
            printf("Invalid choice\n");
        }

    }
    return 0;
}