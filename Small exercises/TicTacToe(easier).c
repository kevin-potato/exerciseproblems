#include<stdio.h>
int main()
{
int size=3;
int board[size][size];
int i;
int j;
int judge=-1; //-1: no one win,1: X win, 0: O win
int numofO1;
int numofX1;
int numofO2;
int numofX2;
//int board[3][3]={
//	{0,0,0},
//	{1,1,1},
//	{1,1,1},
//};


for(i=0; i<3; i++){ 
	for(j=0; j<3; j++){
		scanf("%d",&board[i][j]);
	} 
} 

for(i=0; i<size&&judge==-1;i++){
	numofO1=numofO2=numofX1=numofX2=0;
	for(j=0; j<size; j++){
		if(judge==-1){
			if(board[i][j]==1){
				numofX1++;
			}else if(board[i][j]==0){
				numofO1++;
			}else if(board[j][i]==0){
				numofO2++;
			}else if(board[j][i]==1){
				numofX2++;
			}
		}
	}if(numofX1||numofX2==size){
		judge=1;
	}else if(numofO1||numofO2==size){
		judge=0;
	}
}

if(judge==-1){
	numofX1=numofX2=numofO1=numofO2=0;
	for(i=0; i<size; i++){
		if(board[i][i]==1){
			numofX1++;
		}else if(board[i][i]==0){
			numofO1++;
		}else if(board[i][size-i-1]==1){
			numofX2++;
		}else if(board[i][size-i-1]==0){
			numofO2++;
		}
	}if(numofX1==size||numofX2==size){
		judge=1;
	}else if(numofO1==size||numofO2==size){
		judge=0;
	} 
}

if(judge==-1){
	printf("no one wins!");
}else if(judge==0){
	printf("O wins!");
}else if(judge==1){
	printf("X wins!");
}

return 0;
}
