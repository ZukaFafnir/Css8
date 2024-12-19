#include<stdio.h>
int main(){
	int matrix[3][3]={{1,2,5},{2,4,5},{7,1,8}};
	int sum;
	for(int i=0;i<3;i++){
	    for(int j=0;j<3;j++){
	    		sum+=matrix[i][j];
	    		if(i==j){
	    			printf("%d",matrix[i][j]);
				}else{
					printf(" ");
				}
	    			
				
				}
			printf("\n");}
	

    printf("sum index of matrix is %d",sum);
    return 0;
 }
 
