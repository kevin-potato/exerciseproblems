#include<stdio.h>

int compare(const char* s1, const char* s2){
	
//	int idx=0;
//	while(s1[idx]!='\0' && s2[idx]!='\0'){
//		if(s1[idx]!=s2[idx]){
//			break;
//		}
//		idx++;
//	}
//	return s1[idx]-s2[idx];

	while(*s1==*s2 && *s1!='\0'){
		s1++;
		s2++;
	}
	return *s1-*s2;
	
}
int main(int argc, char const *argv[]){
	
  	char line[]="abcd";
  	char line2[]="abcd";
  	
  	
  	printf("%d",compare(line,line2));
	
	return 0;
}

