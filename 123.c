#include<stdio.h>
int main(){
	printf("enter the number:");
	int num;
	scanf("%d",&num);
	if(num%2==0){
		printf("even");
	}
	else{
		printf("odd");
	}
}
