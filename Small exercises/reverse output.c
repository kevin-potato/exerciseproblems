#include<stdio.h>
#include<stdlib.h>

typedef struct{
	int *array;
	int size;
}Array; 

void creat(Array*a, int moresize);
int main(){
	Array num; 
	int number;
	int i=0;
	
	num.array=(int*)malloc(sizeof(int));
	num.size=0;
	
	scanf("%d",&number);
	while(number!=-1){
		num.array[i]=number;
		num.size++;
		i++;
		scanf("%d",&number);
		if(number!=-1){
			creat(&num,1);
		}
	}

	for(i=num.size; i>0; i--){
		printf("%d ",num.array[i-1]);
	}

	free(num.array);
	return 0;
}

void creat(Array*a, int moresize){
	
	int *p=(int*)malloc(sizeof(int)*(a->size+moresize));
	int i;
	for(i=0; i<a->size; i++){
		p[i]=a->array[i];
	}
	free(a->array);
	a->array=p;
}

