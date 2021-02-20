#include<stdio.h>
//Polynomial Addition
int main(){
	
	int time=0;
	int i=0;
	int j=0;
	int a[101]={0};
	int b[101]={0};
	int max=0;
	
	while(time!=2){
		scanf("%d %d", &i,&j);
		if (i==0){
			time++;
		}if(i>max){
			max=i;
		}if(time==0){
			a[i]=j;
		}else if(time==1 && i==0){
			a[i]=j;
		}else{
			b[i]=j;
		}		
	}
	
	while (max>=0){
		if(max>1 && (a[max]+b[max])!=0){
			printf("%dx%d",a[max]+b[max],max);
			printf("+");
		}else if(max==0){
			printf("%d",(a[0]+b[0]));
		}else if(max==1){
			printf("%dx+",(a[1]+b[1]));
		}
		max--;
	}
	
	
	return 0;
}
