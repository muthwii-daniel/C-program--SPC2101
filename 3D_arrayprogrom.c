// 3D ARRAY  multiple  branches .

#include  <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
int i,j, k;
int totaloccupied=0;
int chain [3][5][10];

srand (time(0));
    printf (" Hotel Chain Room Occupancy:\n");
 for(i=0;i<3;i++){
     int branchoccupied =0;
  for(j=0;j<5;j++){
  for (k=0;k<10;k++){
  
      chain[i][j][k]=rand()%2;
       
if( chain[i][j][k]=1){ branchoccupied++;}
        }
    }
    printf (" Branch %d  ->OCCUPIED ROOMS:%d\n",i+1,branchoccupied);
    totaloccupied +=branchoccupied ;}
    
    printf (" \nTOTAL OCCUPIED ROOMS ACROOS ALL BRANCHES : %d\n", totaloccupied);
 
return 0;
}