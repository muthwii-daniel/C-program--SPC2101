/* 
c program  to calculate  fare rate.
*/

#include <stdio.h>

int calculateFare(int distance) {
    int fareRate = 50;
    int totalFare = distance * fareRate;
    return totalFare;
}

int main() {
    int distance;
    printf("Enter the distance traveled (in km): ");
    scanf("%d", &distance);

    int fare = calculateFare(distance);
    printf("Total fare: %d Ksh\n", fare);

    return 0;
}