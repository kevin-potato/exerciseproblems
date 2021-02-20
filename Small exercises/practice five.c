#include<stdio.h>
//°°µã
int main(){
	
	int result=0;
	int n;
	scanf("%d",&n);
	int a[n][n];
	int m[n];
	int i,j,k;
	int max=0;
	int min;
	int p1,p2;
	int pp1[n];
	int pp2[n];
	int answer1;
	int answer2;
	
	for (i=0; i<n; i++){
		for (j=0; j<n; j++){
			scanf("%d",&a[i][j]);
			if(a[i][j]>max){
				max=a[i][j];
				p1=i;
				p2=j;
			}
		}m[i]=max;
		pp1[i]=p1;
		pp2[i]=p2;
		max=0;
	}
	
	for(i=0; i<n && result==0; i++){
		j=pp2[i];
		min=a[0][j];
		for(k=0; k<n; k++){
			if(a[k][j]<min){
				min=a[k][j];
			}
		}if(min==m[i]){
			result=1;
			answer1=i;
			answer2=pp2[i];
		}		
	}
	
	if (result==1){
		printf("%d %d",answer1,answer2);
	}	
	
	return 0;
} 
