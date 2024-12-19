#include<stdio.h>
int main(){
	int array[3]={3,7,4};
	int predict,check=0;
	printf("please enter predict: ");
	scanf("%d",&predict);
	for(int i=0;i<3;i++){
	if(predict==array[i]){
		printf("index %d",i);
		check=1;}
	}
  
    if(check==0){

		printf("wrong");
	}
	
	
	
	
	return 0;
}
