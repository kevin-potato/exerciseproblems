#include<stdio.h>

int main(){
	
	int M;
	scanf("%d",&M);
	
	typedef struct{
		char id[16];
		int SH[2];
		int SM[2];
		int SS[2];
		int EH[2];
		int EM[2];
		int ES[2];
	}data;
	
	data p[1000];
	int i=0;
	while(M!=0){
		scanf("%s",p[i].id);
		scanf("%02d:%02d:%02d",&p[i].SH,&p[i].SM,&p[i].SS);
		scanf("%02d:%02d:%02d",&p[i].EH,&p[i].EM,&p[i].ES);
		M--;
		i++;
	}
	
	int firstinHH=24;
	int lastoutHH=0;
	int firstinMM=60;
	int lastoutMM=0;
	int firstinSS=60;
	int lastoutSS=0;
	int inpeople=0;
	int outpeople=0;
		
	M=i-1;
	for(; (M+1)!=0; M--){
		if(*p[M].SH<firstinHH){
			firstinHH=*p[M].SH;
			inpeople=M;
		}else if(*p[M].SH==firstinHH){
			if(*p[M].SM<firstinMM){
				firstinMM=*p[M].SM;
				inpeople=M;
			}else if(*p[M].SM==firstinMM){
				if(*p[M].SS<firstinSS){
					firstinSS=*p[M].SS;
					inpeople=M;
				}
			}
		}
		if(*p[M].EH>lastoutHH){
			lastoutHH=*p[M].EH;
			outpeople=M;
		}else if(*p[M].EH==lastoutHH){
			if(*p[M].EM>lastoutMM){
				lastoutMM=*p[M].EM;
				outpeople=M;
			}else if(*p[M].EM==lastoutMM){
				if(*p[M].ES>lastoutSS){
					lastoutSS=*p[M].ES;
					outpeople=M;
				}
			}
		}
	}
	
	printf("%s %s",p[inpeople].id,p[outpeople].id);
	
	return 0;
}
