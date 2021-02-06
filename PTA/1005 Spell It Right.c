#include<stdio.h>

int main(){
	
	int sum=0;
	char ch;
	char *digits[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
	int i,cnt=0;
	int mod=1;
	
	
	while((ch=getchar())!='\n'){
		sum+=(int)(ch-'0');
	}

	i=sum;
	while(i!=0){
		i=i/10;
		cnt++;
	}
	for(i=1; i<cnt; i++){
		mod=mod*10;
	}
	while(mod!=0){
		printf("%s",digits[sum/mod]);
		sum=sum%mod;
		mod=mod/10;
		if(mod!=0){
			printf(" ");
		}
	}

	return 0;
}

