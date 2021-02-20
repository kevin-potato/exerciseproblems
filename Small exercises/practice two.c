#include<stdio.h>
//ÄîÕûÊý 
int main(){
	
	int x=0;
	int n=1;
	int y=0;
	
	printf("enter a number:");
	scanf("%d",&x);
	if(x>-100000 && x<100000){
		y=x;
		while ((x/10)!=0){
			n=n*10;
			x=x/10;
		}
		if(y<0){
			printf("fu ");
			y=-y;
		}
		while (n!=0){
			switch(y/n){
				case 0:
					printf("ling");
					break;
				case 1:
					printf("yi");
					break;
				case 2:
					printf("er");
					break;
				case 3:
					printf("san");
					break;
				case 4:
					printf("si");
					break;
				case 5:
					printf("wu");
					break;
				case 6:
					printf("liu");
					break;
				case 7:
					printf("qi");
					break;
				case 8:
					printf("ba");
					break;
				case 9:
					printf("jiu");
					break;			
			}if(n!=1){
				printf(" ");
			}
			y=y%n;
			n=n/10;
		}
	}else{
		printf("wrong");
	}
	
	
	return 0;
}
