#include<stdio.h>

int isPrime(int x, int knownPrimes[], int numberofknownPrimes);
int main(){

const int number=100;	
int prime[100]={2};
int i=3;
int count=1;


	
	while(count<number){
		if(isPrime(i, prime, count)){
			prime[count++]=i;
		}
		i++;
	}
		
	
	for(i=0; i<number; i++){
		printf("%d ",prime[i]);
		if(i%5==0){
			printf("\n");
		}
	}
	
	return 0;
}


int isPrime(int x, int knownPrimes[], int numberofknownPrimes){
	
int result=1;
int i;		

	for(i=0; i<numberofknownPrimes; i++){
		if(x% knownPrimes[i]==0){
			result=0;
			break;
		}
	}
	return result;
}
