#include<stdio.h>

int main(){
	
	double odd[3]={0.0};
	double maxodd[3]={0.0};
	int bestresult[3]={0};
	char out[3];
	int i,j;
	double profit=0.0;
	
	for(j=0; j<3; j++){
		for(i=0; i<3; i++){
			scanf("%lf",&odd[i]);
			if(odd[i]>maxodd[j]){
				maxodd[j]=odd[i];
				bestresult[j]=i;
			}
		}
	}
	profit=((maxodd[0]*maxodd[1]*maxodd[2]*0.65)-1)*2;
	for(i=0; i<3; i++){
		if(bestresult[i]==0){
			out[i]='W';
		}else if(bestresult[i]==1){
			out[i]='T';
		}else if(bestresult[i]==2){
			out[i]='L';
		}
	}
	
	printf("%c %c %c %.2lf",out[0],out[1],out[2],profit);
	
	return 0;
}
