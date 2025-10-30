// 1D array.
#include <stdio.h>
int main(){

int i;
int sum=0; 
int average;

int revenue[7]={2000,1500,3500,1200,2100,3200,4000};

for (i=0;i<7;i++){
    printf("%d\n",revenue[i]);
sum=sum+revenue[i];
average = sum/7;
}
    
        printf(" The sum is %d\n",sum);
        printf(" The average is %d\n",average);
        
return 0;}