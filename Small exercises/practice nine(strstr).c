#include<stdio.h>
#include<string.h>

int main(){
	
	char a[10000];
	char b[10000];
	char c;
	int i=0;
	int ret=0;
	char *r;
	char *p=a;
	char *q=b;
	
	
	while((c=getchar())!='\n'){
		a[i]=c;
		i++;
	}
	i=0;
	while((c=getchar())!='\n'){
		b[i]=c;
		i++;
	}

	r=strstr(q,p);
	if(r==NULL){
		printf("%d",-1);
	}
	while(r!=NULL){
		ret=r-b;
		*r++;
		r=strstr(r,p);
		printf("%d ",ret);
	}

	return 0;
}
