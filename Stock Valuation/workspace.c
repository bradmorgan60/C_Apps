#include <stdio.h>
#include <math.h>

double DCF_Model(double* cashflow, double rate, int time) {
    // take note of the double*, what is the pointer value for?
    double dcf = 0.00;
    for(int i = 0; i < time; i++) {

        dcf += cashflow[i] / pow(1 + rate, i + 1);
    }

    return dcf;
}

int main() {
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

    return 0;
}