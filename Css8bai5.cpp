#include<stdio.h>
int main(){
	int matrix[3][3]={{1,2,5},{2,4,5},{7,1,8}};
	int sum;
	for(int i=0;i<3;i++){
	    for(int j=0;j<3;j++){
	    	if(i==0||i==2||j==0||j==2){
	    		sum+=matrix[i][j];
	    	
			}
	
}
 }
 	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("  %d",matrix[i][j]);
		}
		printf("\n");}
    printf("Sum of the elements on the border of the matrix %d",sum);

	return 0;
}
