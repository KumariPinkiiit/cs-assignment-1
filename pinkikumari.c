#include <stdio.h>  
#include<stdlib.h> 
#include<time.h>
/* Main Function */  
int main()  
{ 
/* Declaring pointer for matrix multiplication.*/ 
double time_spent = 0.0;
 
    clock_t begin = clock();
int **ptr1, **ptr2, **ptr3; 
/* Declaring integer variables for row and columns of two matrices.*/  
int row1=4096, col1=4096, row2=4096, col2=4096; 
/* Declaring indexes. */  
int i, j, k; 
/* Request the user to input number of columns of the matrices.*/  
 
 
/* Allocating memory for three matrix rows. */ 
ptr1 = (int **) malloc(sizeof(int *) * row1);  
ptr2 = (int **) malloc(sizeof(int *) * row2); 
ptr3 = (int **) malloc(sizeof(int *) * row1); 
/* Allocating memory for the col of three matrices. */ 
for(i=0; i<row1; i++) 
 	ptr1[i] = (int *)malloc(sizeof(int) * col1); 
for(i=0; i<row2; i++)  
 	ptr2[i] = (int *)malloc(sizeof(int) * col2); 
for(i=0; i<row1; i++)  
 	ptr3[i] = (int *)malloc(sizeof(int) * col2); 
/* Request the user to input members of first matrix. */ 
for(i=0; i< row2; i++) 
{ 
	for(j=0; j< col2; j++) 
	{ 
		
		 ptr2[i][j]=20;
	} 
} 
for(i=0; i< row1; i++) 
{ 
	for(j=0; j< col1; j++) 
	{ 
		
		 ptr1[i][j]=20;
	} 
}
/* Calculation begins for the resultant matrix. */ 
for(i=0; i < row1; i++) 
{ 
	for(j=0; j < col1; j++) 
	{ 
		ptr3[i][j] = 0; 
 		for(k=0; k<col2; k++)  
		ptr3[i][j] = ptr3[i][j] + ptr1[i][k] * ptr2[k][j]; 
	} 
} 
/* Printing the contents of third matrix. */  
clock_t end = clock();
 
    // calculate elapsed time by finding difference (end - begin) and
    // dividing the difference by CLOCKS_PER_SEC to convert to seconds
    time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
 
    printf("The elapsed time is %f seconds", time_spent);

return 0; 
} 
