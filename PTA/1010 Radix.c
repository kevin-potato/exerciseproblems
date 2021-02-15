#include<stdio.h>

long long max(long long a,long long b){
	if(a>=b){
		return a;
	}else{
		return b;
	}
}
int main(){
	int tag,radix,i;
	int N1[10],N2[10];
	int index1=0;
	int index2=0;
	int max1=0;
	int max2=0;
	char ch;
	long long compare=0;
	long long testcase=0;
	int ret=0;
	long long left,right,mid,min;
	
	while((ch=getchar())!=' '){
		if(ch>='0' && ch<='9'){
			N1[index1]=(int)(ch-'0');
		}else if(ch>='a' && ch<='z'){
			N1[index1]=(int)(ch-'a'+10);
		}if(N1[index1]>max1){
			max1=N1[index1];
		}index1++;
	}
	while((ch=getchar())!=' '){
		if(ch>='0' && ch<='9'){
			N2[index2]=(int)(ch-'0');
		}else if(ch>='a' && ch<='z'){
			N2[index2]=(int)(ch-'a'+10);
		}if(N2[index2]>max2){
			max2=N2[index2];
		}index2++;
	}
	scanf("%d %d",&tag,&radix);	
	if(tag==1){
		for(i=0; i<index1; i++){
			compare=compare*radix+N1[i];
		}	
		if(max2==0){
			left=2;
		}else{
			left=max2+1;
		}
		right=max(compare,left);
		while(left<=right){
			mid=left+(right-left)/2;
			for(i=0; i<index2; i++){
				testcase=testcase*mid+N2[i];
			}if(testcase==compare){
				ret=1;
                min=mid;
                right=mid-1;
			}else if(testcase>compare || testcase<0){
				right=mid-1;
			}else if(testcase<compare){
				left=mid+1;
			}testcase=0;
		}
	}else if(tag==2){
		for(i=0; i<index2; i++){
			compare=compare*radix+N2[i];
		}
		if(max1==0){
			left=2;
		}else{
			left=max1+1;
		}
		right=max(compare,left);
		while(left<=right & ret==0){
			mid=left+(right-left)/2;
			for(i=0; i<index1; i++){
				testcase=testcase*mid+N1[i];
			}if(testcase==compare){
				ret=1;
                min=mid;
                right=mid-1;
			}else if(testcase>compare || testcase<0){
				right=mid-1;
			}else if(testcase<compare){
				left=mid+1;
			}testcase=0;
		}
	}
	if(ret==0){
		printf("Impossible");
	}else{
		printf("%d",min);
	}
	return 0;
}
