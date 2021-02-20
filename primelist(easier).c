#include<stdio.h>
int main(){

int n=30;	
int isprime[n];  //1 is prime number
int i;
int x=2;

for(i=0; i<n; i++){
	isprime[i]=1;
}

while(x<n){
	for(i=2; x*i<n; i++){
		isprime[x*i]=0;
	}	
x++;
}

for(i=2; i<n; i++){
	if(isprime[i]==1){
		printf("%d\t",i);
		}
	}	
	return 0;
}
