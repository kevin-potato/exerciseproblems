#include<stdio.h>
//high-accuracy division

int main(){
	
	int a;
	int b;
	int r[200]={0};
	int i=0;
	
	printf("enter the dividend and the divisor:");
	scanf("%d/%d",&a,&b);
	printf("answer is: ");
	
	while(a%b!=0 && i<=200){
		r[i++]=a/b;
		printf("%d",r[i-1]);
		if(r[0]==0 && i==1){
			printf(".");
		}
		a=(a%b)*10;
		
	}printf("\n");
	
	
	
	
	return 0;
}
