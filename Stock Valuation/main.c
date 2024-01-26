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

double DCF_Model(double* cashflow, double rate, int time) {
    /*
     Stock Valuation - Discounted Cash Flow Analysis

     (FCF / (1 + rate) ^ n) + (FCF / (1 + rate) ^ n + 1)
     If we were to write a program for this formula, we need to take into account the
     number of periods
    */

    double dcf = 0.00;
    for(int i = 0; i < time; i++) {

        dcf += cashflow[i] / pow(1 + rate, i + 1);
    }

    return dcf;
}

int main() {

    double principal, rate, power, A, time, compound, FCF;
    int selection;
    double cashflow;


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
            int time;
        double rate;

        printf("Enter the discount rate: ");
        scanf("%lf", &rate);

        printf("Enter the number of years: ");
        scanf("%d", &time);

        double cashflow[time];
        for (int i = 0; i < time; i++)
        {
            printf("Enter the future cashflow for period %d : ", i + 1);
            scanf("%lf", &cashflow[i]);
        }

        double dcf = DCF_Model(cashflow, rate, time);
        
        printf("Discounted Cash Flow: %.2lf", dcf);

        }
    
    default:
        break;
    }

    return 0;
}