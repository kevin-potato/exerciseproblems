#include<stdio.h>
#include<string.h>

char* mycpy(char*dst, const char*src){
	
//	int idx=0;
//	while(src[idx]!='\0'){
//		dst[idx]=src[idx];
//		idx++;
//	}
//	dst[idx]='\0';

	char* ret=dst;
	while(*src!='\0'){
		*dst++=*src++;
	}
	*dst='\0';
	return ret;
//	return dst;
}

int main(int argc, char const *argv[]){
	
	char src[]="hello world.";
	char dst[]="abc";
	mycpy(dst,src);
	printf("%s",dst);
  	
	
	return 0;
}

