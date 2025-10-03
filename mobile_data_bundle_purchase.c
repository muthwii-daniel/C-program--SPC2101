/*
Name: Daniel Muthwii
Reg no:CT100/G/26277/25
Description:c program to display mobile data bundles purchase
*/

#include <stdio.h>

int main (){
	int choice;
	
	printf("mobile data purchase\n");
	printf("option\tBundle\tCost(KES)\n");
	printf("1\t100 MB\t50\n");
	printf("2\t500 MB\t200\n");
	printf("3\t1 GB \t350\n");
	printf("4\t2 GB\t600\n");
	
	printf("\nEnter your choice(1-4):");
	scanf("%d",&choice);
	
	
	switch(choice){
		case 1:
			printf("You selected 100MB. Cost=50 KES\n");
			break;
		case 2:
			printf("You selected 500MB . Cost=200 KES\n");
			break;
		case 3:
			printf("You selected 1GB. Cost=350 KES\n");
			break;
		case 4:
			printf("You selected 2GB. Cost=600 KES\n");
			break;
		default:
			printf("invalid choice! please select a valid choice in between 1-4.\n");
	}
			
		
	 
	
	
	
	
	return 0;
}

