/*
Name: Daniel  Muthwii 
Registration no: CT100/G/26277/25
Description: ATM  withdrawal program 
*/
#include <stdio.h>
int main (){
float balance =10000.00;
float withdrawal ;

while ( balance>0){
  printf(" Enter amount to withdraw :\n");
  scanf ("%f", &withdrawal);
balance -=withdrawal;
   printf(" current balance: %.2f\n",balance);
   }
   printf ("Balance is zero or negative.Transactions ended \n");


return 0;
}