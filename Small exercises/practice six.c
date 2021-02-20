#include<stdio.h>
//µ¥´Ê³¤¶È 
int main(){

	char str;
	int n=0;
	int sign=1;
	
	scanf("%c",&str);
	while (str!='.'){
		if (str==' ' && n!=0){
			if(sign==1){
				printf("%d",n);
				n=0;
				sign=0;
			}else{
				printf(" %d",n);
				n=0;
			}
		}else if (str!=' '){
			n++;
		}		
		scanf("%c",&str);
	}
	if(n!=0){
	printf(" %d",n);
	}
	
	return 0;
}
