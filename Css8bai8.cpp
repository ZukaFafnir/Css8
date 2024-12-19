#include<stdio.h>
int main(){
	int matrix[4][4]={{1,2,5,4},{4,2,4,5},{6,7,1,8},{5,2,4,7}};
	int sum;
	for(int i=0;i<4;i++){
	    for(int j=0;j<4;j++){
	    		sum+=matrix[i][j];
	    		
					if(i+j==3){
						printf("%d  ",matrix[i][j]);
					}else{
						printf("*   ");
					}
	    			
				
				}
			printf("\n\n");}
	

    printf("sum index of matrix is %d",sum);
    return 0;
 }
 //[0;3],[1;2],[2;1],[3]
