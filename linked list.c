#include<stdio.h>
#include<stdlib.h>

typedef struct _node{
	int value;
	struct _node *next;
}Node;

typedef struct _list{
	Node*head;
//	Node*tail;
}List; 

void add(List* plist, int number);
void print(List *plist);

int main(){
	List list;
	//add a number
	list.head=NULL;
	int number;
	do{
		scanf("%d",&number);
		if(number!=-1){
			add(&list,number);
		}
	}while(number!=-1);
	print(&list);
	scanf("%d",&number);
	
	Node *p;
	int isFound=0;
	for(p=list.head; p; p=p->next){
		if (p->value==number){
			isFound=1;
			break;
		}	
	}
	
	Node *q;
	for(q=NULL,p=list.head; p; q=p,p=p->next){
		if(p->value==number){
			if(q==NULL){
				list.head=p->next;
			}else{
				q->next=p->next;
			}
			free(p);
			break;
		}
	}
//	for(p=list.head; p; p=q){
//		q=p->next;
//		free(p);									//delete the whole linked list 
//	}
	print(&list);

	return 0;
}

void add(List* plist, int number){
//add to linked-list
	Node *p=(Node*)malloc(sizeof(Node));
	p->value=number;
	p->next=NULL;
	//find the last
	Node*last=plist->head;
	if(last!=NULL){
		while(last->next!=NULL){
			last=last->next;
		} 
			//attach
			last->next=p;
	}else{
		plist->head=p;
	}
}

void print(List *plist){
	Node *p;
	for(p=plist->head; p; p=p->next){
		printf("%d ",p->value);
	}
}
