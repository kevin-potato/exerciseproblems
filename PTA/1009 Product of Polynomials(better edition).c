#include<stdio.h>

int main(){
	
	double index[1001]={0.0};
	double ret[2002]={0.0};
	double a=0.0;
	int k,i,j,n,maxindex=0;
	int cnt=0;
	
	scanf("%d",&k);
	for(i=0; i<k; i++){
		scanf("%d",&n);
		scanf("%lf",&index[n]);
		if(n>maxindex){
			maxindex=n;
		}
	}

	scanf("%d",&k);
	for(i=0; i<k; i++){
		scanf("%d %lf",&n,&a);
		for(j=0; j<=maxindex; j++){
			ret[j+n]+=index[j]*a;
		}
	}
	for(i=0; i<=2000; i++){
		if(ret[i]!=0){
			cnt++;
			if(i>maxindex){
				maxindex=i;
			}
		}
	}
	printf("%d",cnt);
	for(i=maxindex; i>=0; i--){
		if(ret[i]!=0){
		printf(" %d %.1lf",i,ret[i]);
		}
	}
	return 0;
}
