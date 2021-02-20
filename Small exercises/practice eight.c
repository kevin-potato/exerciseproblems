#include<stdio.h>
//×î¼ò·ÖÊ½ 
int gcd(int a, int b);
int main(){
	
	int x,y;
	int divisor;
	
	scanf("%d/%d",&x,&y);
	divisor=gcd(x,y);
	x=x/divisor;
	y=y/divisor;
	printf("%d/%d",x,y);
	
	return 0;
}

int gcd(int a, int b){
	
	int t;
	
	do{
		t=a%b;
		a=b;
		b=t;		
	}while(b!=0);
	
	return a;	
}
