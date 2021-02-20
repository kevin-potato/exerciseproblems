#include<stdio.h>
#include<string.h>


int main(int argc, char const *argv[]){
	
	char a[100]="hello";
	char b[]="world";
	char *p=strchr(a,'\0');
	for( int i=0; b[i]!='\0'; i++){
		*p++=b[i];
	}
	printf("%s",a);
	return 0;
}
