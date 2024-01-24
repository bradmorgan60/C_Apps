#include <stdio.h>
#include <math.h>

double Comp_Interest(double principal, double rate, double time, double compound) {
    /*
    Formula: P(1 + r/n) ** (nt) 
    P = Principal
    r = rate
    t = time (years)
    n = times compounded
    */ 

   printf("Enter initial principal amount: ");
   scanf("%lf", &principal);

   printf("Enter the expected rate of return: ");
   scanf("%lf", &rate);

   printf("Expected time to hold investment: ");
   scanf("%lf", &time);

   printf("Number of distributions per year: (1 / 2 / 4 / 12) : ");
   scanf("%lf", &compound);

   return principal * pow((1 + rate / compound), compound * time);
    // double power = compound * time;

    // printf("%lf is your anticipated sum", pow(A, power));

//    printf("\n");
    

    // printf("After %.1lf years and a %.2lf percent rate of return: \n", time, rate * 100);
    // printf("Result: $%lf \n", A);

}

void CashFlow(int FCF, double rate, int time) {
    /*
     Stock Valuation - Discounted Cash Flow Analysis

     (FCF / (1 + rate) ^ n) + (FCF / (1 + rate) ^ n + 1)
     If we were to write a program for this formula, we need to take into account the
     number of periods
    */

   printf("The purpose of this is to find the intrinsic value of the business");
   printf("\n");

   printf("Enter the Free Cash Flow (FCF) for the business: ");
   scanf("%d", &FCF);

   printf("Enter the interest rate: ");
   scanf("%lf", &rate);

   printf("Enter the number of periods: ");
   scanf("%d", &time);


    printf("$%lf", FCF / pow(1 + rate, time));

    // printf("Result: $%lf", result);

}

int main() {

    double principal, rate, power, A, time, compound, FCF;
    int selection;


    printf("Welcome to this little finance tool! \n");
    printf("Select the below options: ");
    printf("\n");
    printf("Options: \n");
    printf("1. Compound Interest Calculator \n");
    printf("2. Discounted Cash Flow (DCF) \n");

    printf("Select an option: ");
    scanf("%d", &selection);

    switch (selection)
    {
    case 1: 
        if(selection == 1) {
            double Interest = Comp_Interest(principal, compound, rate, time);
            printf("Compound Interest: $%.2lf", Interest);
        }
        break;
    
    case 2: 
        if(selection == 2) {
            CashFlow(FCF, rate, time);
        }
    
    default:
        break;
    }


    return 0;
}