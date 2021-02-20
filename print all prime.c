#include<stdio.h>
#include<stdbool.h>
int main()
{
	int a=2;
	int b=2;
	bool c=true;
	int n=0;
	//printf("All of the prime numbers between 0 and 100:");
	printf("50 prime numbers:");
	do{
	 	while(c==true){
			if (b==a||a==2){
				break;
			}else if((a % b)!=0){
				b++;
			}else{
				c=false;
			}
	}
	    if(c==true){
		   printf("%d ",a);
		   n++;
	}
	c=true;
	a++;
	b=2;
	}while(n<50);
	printf("\n");
	return 0;
}
