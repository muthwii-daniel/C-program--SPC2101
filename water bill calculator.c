/*
Name: DANIEL MUTHWII
Reg no: CT100/G/26277/25
Description: C program to compute water bills
*/

#include <stdio.h>

int main() {
    float number_of_water_bills_consumed, bill_amount;

    printf("Enter the number of units of water consumed: ");
    scanf("%f", &number_of_water_bills_consumed);

    if (number_of_water_bills_consumed <= 30) {
        bill_amount = number_of_water_bills_consumed * 20;
    } 
    else if (number_of_water_bills_consumed > 30 && number_of_water_bills_consumed <= 60) {
        bill_amount = number_of_water_bills_consumed * 25;
    } 
    else {
        bill_amount = number_of_water_bills_consumed * 30;
    }

    printf("\nTotal Water Bill = KSH %.2f\n", bill_amount);

    return 0;
}
