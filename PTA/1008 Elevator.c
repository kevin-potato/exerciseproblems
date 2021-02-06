#include<stdio.h>

int main(){
	
	int floor=0;
	int nextfloor;
	int n=0;
	int time=0;
	
	scanf("%d",&n);
	for(; n!=0; n--){
		scanf("%d",&nextfloor);
		if(nextfloor>floor){
			time+=6*(nextfloor-floor);
		}else{
			time+=4*(floor-nextfloor);
		}
		time+=5;
		floor=nextfloor;
	}
	printf("%d",time);
	
	return 0;
}
