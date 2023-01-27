#include<stdio.h>
int main(){
	int N,sum=0,rem=0;
	printf("enter the positive number: ");
	scanf("%d",&N);
	while(N!=0){
		rem=N%10;
		sum+=rem;
		N=N/10;
	}
	printf("the sum of individual is %d",sum);
	
}
