#include <stdio.h>
/*
NAME:Daniel  Muthwii 
REG:CT100/G/26277/25
DESCRIPTION: loan qualification
*/

int main()
{
float age;
float income;
// prompt user for inputs 
 printf("enter your age");
 scanf("%d",age);
 
 printf("enter your income");
 scanf("%d",income);
 
 //check loan qualifications 
 if (age>=21&&income>=21000)
 {
 printf("congratulations you qualify for a loan");
 }
 else
 {
 printf("unfortunately,we are unable to offer you loanat this time");
 }
 
 return 0;
 }
