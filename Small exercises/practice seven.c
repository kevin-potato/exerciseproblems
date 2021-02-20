#include<stdio.h>
#include<string.h>
//gps 
void gps(char data[], int answer[3]);
int main(){
	
	char end[]="END";
	char in[1000];
	int time[3]={0};
	
	
	do{
		scanf("%s",in);
		gps(in,time);
		
	}while (strcmp(in,end)!=0);
	
	printf("%02d:%02d:%02d",time[0],time[1],time[2]);	
	return 0;
}

void gps(char data[], int time[3]){
	
	int i;
	int test=0;
	int p1,p2;
	int checknum,checknum1,checknum2;

	if(data[0]=='$'&& data[1]=='G'&& data[2]=='P'&& data[3]=='R'&& data[4]=='M'&& data[5]=='C'&& data[6]==','){
		for (i=1; data[i]!='*'; i++){
			test=test^data[i];
		}
		test=test%65536;
		p1=data[i+1];
		p2=data[i+2];
		
		if('A'<=p1 && p1<='F'){
			checknum1=data[i+1]-'A'+10;
		}else{
			checknum1=data[i+1]-'0';
		}if('A'<=p2 && p2<='F'){
			checknum2=data[i+2]-'A'+10;
		}else{
			checknum2=data[i+2]-'0';
		}
		checknum=checknum1*16+checknum2;
		
		if(test==checknum && data[18]=='A'){
			time[0]=((data[7]-'0')*10+(data[8]-'0')+8)%24;
			time[1]=(data[9]-'0')*10+(data[10]-'0');
			time[2]=(data[11]-'0')*10+(data[12]-'0');			
		}		
	}	
}
