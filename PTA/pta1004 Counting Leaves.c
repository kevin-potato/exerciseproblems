#include<stdio.h>

int ret[100]={0};
int depth=0;

int dfs(int a[100][100], int num[100], int nonleafnodes, int nodes, int level);
int main(){

	int numofnodes,nonleafnodes=0;
	scanf("%d %d",&numofnodes,&nonleafnodes);
	
	int a[100][100]={0};
	int num[100]={0};
	int i,j=0;
	
	if(numofnodes!=0){
		if(nonleafnodes==0){
			printf("1");
		}else{
			for(i=0; i<nonleafnodes; i++){
				scanf("%02d %d",&a[i][0],&num[i]);
				for(j=0; j<num[i]; j++){
					scanf("%02d",&a[i][j+1]);
				}
			}
			dfs(a,num,nonleafnodes,1,0);
			printf("0");
			for(i=1; i<=depth; i++){
				printf(" %d",ret[i]);
			}
		}
		
	}
	return 0;
}

int dfs(int a[100][100], int num[100], int nonleafnodes, int nodes, int level){
	if(level>depth){
		depth=level;
	}
	for(int i=0; i<nonleafnodes; i++){
		if(nodes==a[i][0]){
			for(int j=0; j<num[i]; j++){
				dfs(a,num,nonleafnodes,a[i][j+1],level+1);
			}return 0;				//易错点，若不退出会重复加 
		}
	}
	ret[level]++;
}

//最开始时没有考虑输入可能是无序的，存在父级比son后输入的情况，导致出错无法搜索到父级
//附上之前的代码
//#include<stdio.h>
//
//int main(){
//
//	int numofnodes,nonleafnodes=0;
//	scanf("%d %d",&numofnodes,&nonleafnodes);
//	
//	int level[100]={0};
//	int a[100][100]={0};
//	int i,j=0;
//	int ID,k=0;
//	int p,pp=0;
//	
//	level[0]=1;
//	a[0][0]=1;
//
//	if(numofnodes!=0){
//		if(nonleafnodes==0){
//			printf("1");
//		}else{
//			while(nonleafnodes!=0){
//				scanf("%02d %d",&ID,&k);
//				for(i=0; i<100; i++){
//					for(j=0; j<100; j++){
//						if(a[i][j]==0){
//							break;
//						}else if(a[i][j]==ID){
//							p=i;
//							break;
//						}
//					}if(a[i][j]==ID){
//						break;
//					}
//				}
//				level[p]--;
//				level[p+1]+=k;
//				while(k!=0){
//					scanf("%02d",&ID);
//					for(j=0; j<100; j++){
//						if(a[p+1][j]==0){
//							pp=j;
//							break;
//						}
//					}
//					a[p+1][pp]=ID;
//					k--;
//				}
//				nonleafnodes--;
//			}
//			
//			printf("0");
//			for(i=1; i<=(p+1); i++){
//				printf(" %d",level[i]);
//			} 
//		}
//	}
//	return 0;
//}
 

