/*
Reg no.CT100/G/26277/25 
*/  

#include <stdio.h> 

// Function to calculate the electric bill based on units consumed
double calculateElectricBill(int units) {
    double totalBill = 0.0;

    if (units <= 100) {
        totalBill = units * 10.0;
    } else if (units <= 200) {
        totalBill = (100 * 10.0) + ((units - 100) * 15.0);
    } else { // units > 200
        totalBill = (100 * 10.0) + (100 * 15.0) + ((units - 200) * 20.0);
    }

    return totalBill;
}


int main() {
    int unitsConsumed1 = 50;
    int unitsConsumed2 = 150;
    int unitsConsumed3 = 250;

    printf("Bill for %d units: KSh. %.2f\n", unitsConsumed1, calculateElectricBill(unitsConsumed1));
    printf("Bill for %d units: KSh. %.2f\n", unitsConsumed2, calculateElectricBill(unitsConsumed2));
    printf("Bill for %d units: KSh. %.2f\n", unitsConsumed3, calculateElectricBill(unitsConsumed3));

    return 0;
}