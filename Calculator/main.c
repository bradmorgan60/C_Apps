#include <stdio.h>
#include <math.h>


double Add(double x, double y) {
    printf("You chose to add!\n");
    printf("\n");
    printf("Enter your first number: ");
    scanf("%lf", &x);

    printf("Enter your second number: ");
    scanf("%lf", &y);

    return x + y;
}

double Subtract(double x, double y) {
    printf("You chose to subtract!\n");
    printf("\n");
    printf("Enter your first number: ");
    scanf("%lf", &x);

    printf("Enter your second number: ");
    scanf("%lf", &y);

    return x - y;
}

double Multiply(double x, double y) {
    printf("You chose to multiply!\n");
    printf("\n");
    printf("Enter your first number: ");
    scanf("%lf", &x);

    printf("Enter your second number: ");
    scanf("%lf", &y);

    return x * y;
}

double Divide(double x, double y) {
    printf("You chose to divide!\n");
    printf("\n");
    printf("Enter your first number: ");
    scanf("%lf", &x);

    printf("Enter your second number: ");
    scanf("%lf", &y);
    

    return x / y;
}
int main() {
    int selection;
    double x, y;

    printf("Options: \n");
    printf("1. Add \n");
    printf("2. Subtract \n");
    printf("3. Multiply \n");
    printf("4. Divide \n");

    printf("Enter the number of the action you want to take: ");
    scanf("%d", &selection);

    switch (selection)
    {
    case 1:
        if (selection == 1)
        {
            printf("Sum : %lf \n", Add(x, y));
        }
        break;
    
    case 2:
         if (selection == 2)
        {
            printf("Difference : %lf \n", Subtract(x, y));
        }
        break;
    
    case 3:
         if (selection == 3)
        {
            printf("Product : %lf \n", Multiply(x, y));
        }
        break;
    
    case 4:
         if (selection == 4)
        {
            printf("Result : %lf \n", Divide(x, y));
        }
        break;

    
    default:
        break;
    }

    return 0;
}