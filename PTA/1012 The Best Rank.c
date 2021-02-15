#include<stdio.h>
#include<string.h>

int getrank(int N, int thegrade[2000], int therank[2000]){
	
	int rank=1;
	int maxp,max=0;
	int flag=0;
	int record=0;
	
	for(int j=0; j<N; j++){
		for(int i=0; i<N; i++){
			if(thegrade[i]>max){
				max=thegrade[i];
				maxp=i;
				if(flag==1){
					flag=0;
				}
			}else if(thegrade[i]==max){			//发生并列 
				flag=1;
			}
		}
		therank[maxp]=rank++;
		thegrade[maxp]=-1;
		max=0;
		if(flag==1){
			rank--;
			flag=0;
			record++;
		}else{
			rank+=record;					//把并列的加回去 
		}
	}
}

int main(){
	
	int N,M;
	scanf("%d %d",&N,&M);
	
	int i,j,min;
	char id[2000][7];
	char checkid[2000][7];
	int gradeC[2000]={0};
	int gradeM[2000]={0};
	int gradeE[2000]={0};
	int gradeA[2000]={0};
	int rankC[2000]={0};
	int rankM[2000]={0};
	int rankE[2000]={0};
	int rankA[2000]={0};
	int p,flag=0;
	char minp;
	
	for(i=0; i<N; i++){
		scanf("%s %d %d %d",id[i],&gradeC[i],&gradeM[i],&gradeE[i]);
		gradeA[i]=(gradeC[i]+gradeM[i]+gradeE[i])/3;
	}
	for(i=0; i<M; i++){
		scanf("%s",checkid[i]);
	}
	getrank(N,gradeC,rankC);
	getrank(N,gradeM,rankM);
	getrank(N,gradeE,rankE);
	getrank(N,gradeA,rankA);

	for(j=0; j<M; j++){
		for(i=0; i<N; i++){
			if((strcmp(id[i],checkid[j]))==0){
				flag=1;
				p=i;
				break;
			}
		}if(flag==0){
			printf("N/A");
		}else{
			if(rankC[p]<rankA[p]){
				min=rankC[p];
				minp='C';
			}else{
				min=rankA[p];
				minp='A';
			}if(rankM[p]<min){
				min=rankM[p];
				minp='M';
			}if(rankE[p]<min){
				min=rankE[p];
				minp='E';
			}printf("%d %c",min,minp);
		}
		flag=0;
		if(j!=(M-1)){
			printf("\n");
		}
	}
	
	return 0;
}
