#include<stdio.h>
//Dijkstra
int main(){
	int numofcities,numofroads;
	int c1,c2;
	int flag=0;
	int p1,p2,length;
	int i,j=0;
	int u,v;
	int inf=999999;
	int min;

	scanf("%d %d %d %d",&numofcities,&numofroads,&c1,&c2);
	int numofteams[numofcities];
	for (flag=0; flag<numofcities; flag++){
		scanf("%d",&numofteams[flag]);
	}
	
	int teams[numofcities];		//maximum teams in this city
	int paths[numofcities];		//maximum minimum roads to this city
	int visit[numofcities];		//be visited or not
	int dis[numofcities];		//the distance from c1 to this city 
	
	int road[numofcities][numofcities];
	for(i=0; i<numofcities; i++){
		for(j=0; j<numofcities; j++){
			road[i][j]=inf;			//initialize the array
		}	
	}

	flag=0;
	while(flag<numofroads){
		scanf("%d",&p1);
		scanf("%d",&p2);
		scanf("%d",&length);
		road[p1][p2]=road[p2][p1]=length;
		flag++;
	}
		

	for(i=0; i<numofcities; i++){
		visit[i]=0;
		dis[i]=inf;
	}
	dis[c1]=0;
	teams[c1]=numofteams[c1];
	paths[c1]=1;

	
	for(j=0; j<numofcities; j++){
		u=-1;
		min=inf;
		for(i=0; i<numofcities; i++){
			if(visit[i]==0 && dis[i]<min){
				u=i;
				min=dis[i];
			}
		}
		if(u==-1){
			break;
		}
		visit[u]=1;
		for(v=0; v<numofcities; v++){
			if(visit[v]==0 && road[u][v]!=inf){
				if(dis[u]+road[u][v]<dis[v]){
					dis[v]=dis[u]+road[u][v];
					paths[v]=paths[u];
					teams[v]=teams[u]+numofteams[v];
				}else if(dis[u]+road[u][v]==dis[v]){
					paths[v]=paths[v]+paths[u];
					if(teams[u]+numofteams[v]>teams[v]){
						teams[v]=teams[u]+numofteams[v];
					}
				}
			}
		}
	}


	printf("%d %d",paths[c2],teams[c2]);


	return 0;
}

//	for(int k=1; k<=numofcities; k++){
//		for(i=0; i<numofcities; i++){
//			for(j=0; j<numofcities; j++){
//				if((road[i][k]+road[k][j])<=road[i][j]){
//					road[i][j]=road[i][k]+road[k][j];
//				}
//			}
//		}
//	}
//	
//	printf("%d",road[c1][c2]);
