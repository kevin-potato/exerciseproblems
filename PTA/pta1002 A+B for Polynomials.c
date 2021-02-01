#include<stdio.h>

int main(){
	
	char ch;
	int count=1;
	double n1[1001]={0.0};
	double n2[1001]={0.0};
	double answer[1001]={0.0};
	int num;
	int a=0;
	double b=0.0;
	int max=0;
	int i;

	scanf("%d",&num);
	while(count<3){
		scanf("%d %lf",&a,&b);
		if(a>max){
			max=a;
		}
		if(count==1){
			n1[a]=b;
		}else if(count==2){
			n2[a]=b;
		}
		if((ch=getchar())=='\n'){
			count++;
			if(count==2){
				scanf("%d",&num);
			}
		}
	}
	count=0;
	for(i=max; i>=0; i--){
		answer[i]=(n1[i]+n2[i]);
		if(answer[i]!=0){
			count++;
		}
	}
	
	printf("%d",count);
	for(i=max; i>=0; i--){
		if(answer[i]!=0){
			printf(" %d %.1lf",i,answer[i]);
		}
	}
	
	return 0;
}
