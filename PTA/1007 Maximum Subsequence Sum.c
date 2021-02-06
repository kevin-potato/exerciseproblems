#include<stdio.h>

int main(){
	
	int k;
	scanf("%d",&k);
	
	int a[k];
	int i;
	for(i=0; i<k; i++){
		scanf("%d",&a[i]);
	}
	
	int maxsum=-1;
	int sum=0;
	int start=0;
	int end=0;
	int finalstart=0;
	int flag=1;
	
	for(i=0; i<k; i++){
		if(a[i]>=0){
			flag=0;
		}
		sum+=a[i];
		if(sum<0){
			sum=0;
			start=i+1;
		}else if(sum>maxsum){
			maxsum=sum;
			end=i;
			finalstart=start;
		}
	}
	if(flag){
		finalstart=0;
		end=k-1;
		maxsum=0;
	}
	
	printf("%d %d %d",maxsum,a[finalstart],a[end]);

	return 0;
}
