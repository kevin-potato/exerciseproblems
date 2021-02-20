#include<stdio.h>
int main()
{
//int board[3][3];
int i;
int j;
int judge=-1; //-1: no one win,1: X win, 0: O win
int numofO;
int numofX;
//in
//for(i=0; i<3; i++){ 
//	for(j=0; j<3; j++){
//		scanf("%d",&board[i][j]);
//	} 
//} 

int board[3][3]={
	{0,0,0},
	{1,1,1},
	{1,1,1},
};

//columns
for(i=0; i<3&&judge==-1; i++){
	numofO=numofX=0;
	for(j=0; j<3; j++){
		if(board[i][j]==0){
			numofO++;
		}else{
			numofX++;
		}
	}if(numofO==3){
		judge=0;
	}else if(numofX==3){
		judge=1;
	}
}
//row
if(judge==-1){
	numofO=numofX=0;
	for(j=0; j<3&&judge==-1; j++){
		for(i=0; i<3; i++){
			if(board[i][j]==0){
				numofO++;
			}else{
				numofX++;
			}
		}if(numofO==3){
			judge=0;
		}else if(numofX==3){
			judge=1;
		}
	}
}
//forward diagonal
if(judge==-1){
	numofO=numofX=0;
	for(i=0; i<3; i++){
		if(board[i][i]==1){
			numofX++;
		}else{
			numofO++;
		}
	}
}
//backward diagonal
if(judge==-1){
	numofO=numofX=0;
	for(i=0; i<3; j++){
		if(board[i][3-i-1]==1){
			numofX++;
		}else{
			numofO++;
		}
	}
}

if(judge==-1){
	printf("no one wins");
}else if(judge==0){
	printf("O wins");
}else if(judge==1){
	printf("X wins");
}

return 0;
}
