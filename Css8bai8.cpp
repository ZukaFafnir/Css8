#include<stdio.h>
int main(){
	int matrix[4][4]={{1,2,5,4},{4,2,4,5},{6,7,1,8},{5,2,4,7}};
	int sum;
	for(int i=0;i<4;i++){
					if(matrix[i][4-i-1]){
						printf("%d ",matrix[i][4-i-1]);
						sum+=matrix[i][4-i-1];
					}
					
				}
				
				 printf("sum index of matrix is %d",sum);
		return 0;
 }
 //[0;3],[1;2],[2;1],[3]
