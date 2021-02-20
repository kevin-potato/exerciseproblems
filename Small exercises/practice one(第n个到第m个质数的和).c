#include<stdio.h>
//第n个到第m个质数的和 
int isPrime(int x, int known[], int y);
int main(){
	
	int a[200]={2};
	int i=3;
	int count=1;
	int t=0;
	
	while (count<200){
		if (isPrime(i,a,count)==1){
			a[count++]=i;	
		}
		i++;
	}
	
	int m,n;
	int sum;
	
	printf("enter the range:");
	scanf("%d %d",&n,&m);
	for(n; n<=m; n++){
		sum+=a[n-1];
	}
	printf("%d",sum);
	
	return 0;
}

int isPrime(int x, int known[], int y){
	
	int result=1;
	int j=0;
	
	while(result==1 && j<y){
		if(x% known[j]==0){
			result=0;
		}
		j++;
	}
	return result;
} 
