#include<stdio.h>

int main(){
	
	int i,j,k,n,max=0;
	double index1[1001]={0.0};
	double index2[1001]={0.0};
	double index[2002]={0.0};
	int maxindex=0;
	int flag=1;
	int cnt=0;
	
	for(i=0; i<2; i++,flag--){
		scanf("%d",&k);
		for(k; k!=0; k--){
			if(flag==1){
				scanf("%d",&n);
				scanf("%lf",&index1[n]);
			}else if(flag==0){
				scanf("%d",&n);
				scanf("%lf",&index2[n]);
			}if(n>maxindex){
				maxindex=n;
			}
		}
	}
	
	for(i=maxindex; i>=0; i--){
		if(index1[i]!=0){
			for(j=maxindex; j>=0; j--){
				if(index2[j]!=0){
					index[i+j]+=index1[i]*index2[j];
					if((i+j)>max){
						max=i+j;
					}
				}
			}
		}
	}
    for(i=0; i<=max; i++){
        if(index[i]!=0){
            cnt++;
        }
    }
	printf("%d",cnt);
    for(i=max; i>=0; i--){
		if(index[i]!=0){
			printf(" %d %.1lf",i,index[i]);
		}
	}

	return 0;
}
