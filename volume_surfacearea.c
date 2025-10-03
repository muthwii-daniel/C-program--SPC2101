/*
NAME:Daniel Muthwii 
REG:CT100/G/26277/25
DESCRIPTION :surface area and volume of a cylinder 
#define PI 3.14159 ;// define Pi value';'
*/
int  main  () {
float radius;
float height;
float PI=3.13159;
// prompt user for inputs 
printf("enter radius of the cylinder:");
scanf("%f",&radius);

printf("enter height of the cylinder");
scanf("%f",&height);

// calculate  volume and surface area 
  float volume=PI*radius*radius*height ; 
 //πr2h';'
 float surfacearea =2*PI*radius*radius+2*PI*radius*height;
 //2πr2+2πrh ';'
 // display results 
 printf("\n ___ cylinder results___\n");
 printf("volume=    %.2f\n",volume);
 printf("surface area=   %.2f \n",surfacearea);
 return 0;
 }
 
