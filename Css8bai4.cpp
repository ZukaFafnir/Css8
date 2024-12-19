#include<stdio.h>
int main(){
	int array[3][2]={{1,2},{2,15},{7,1}};
	int max=array[0][0];
	for(int i=0;i<3;i++){
	    for(int j=0;j<2;j++){
	    	if(max<array[i][j]){
	    		max=array[i][j];
			}
	
}
 }
    printf("inDex max is %d",max);

	return 0;
}
