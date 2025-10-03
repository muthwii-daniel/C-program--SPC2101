/*
Name:Daniel Muthwii
Reg no:CT100/G/26277/25
Description:c program to check exam eligibility
*/
#include <stdio.h>

int main (){ 
   float class_attendance, average_marks;
   
      printf("Enter the overall class_attendance:\n");
      scanf("%f", &class_attendance);	
      printf("Enter the average_marks:\n");
      scanf("%f", &average_marks);
 
if(class_attendance>=75 && average_marks>=40){
  printf("student is eligible for final exams");}
  
else {
	printf("student is not eligible for the final exam");
}

return 0;

}
