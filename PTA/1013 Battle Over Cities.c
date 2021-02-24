#include<stdio.h>

void dfs(int N, int node, int visit[], char highway[][1000]){
	
	int i;
	visit[node]=1;
	for(i=1; i<=N; i++){
		if(visit[i]==0 && highway[node][i]==1){
			dfs(N, i, visit, highway);
		}
	}
}

int main(){
	
	int N,M,K;
	scanf("%d %d %d",&N,&M,&K);
	
	char highway[1000][1000]={0};
	int visit[1000]={0};
	int i,j,start,count,a,b;
	
	for(i=1; i<=M; i++){
		scanf("%d %d",&a,&b);
		highway[a][b]=highway[b][a]=1;
	}
	
	for(i=1; i<=K; i++){
		for(j=1; j<=1000; j++){
			visit[j]=0;
		}scanf("%d", &start);
		count=0;
		visit[start]=1;
		for(j=1; j<=N; j++){
			if(visit[j]==0){
				dfs(N, j, visit, highway);
				count++;
			}
		}
		printf("%d\n",count-1);
	}
	return 0;
}
