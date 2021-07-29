#include <stdio.h>
#include <stdlib.h>
#define STACK_MAX_SIZE 1000000
 
int stack[STACK_MAX_SIZE];
int num=-1;
 
void empty(){
    if(num<0)
        printf("True\n");
    else
        printf("False\n");
    }
 
void push(int input){
    if(num<-1)
        printf("-1\n");
    else{
		stack[++num]=input;
	}	
}
  
void pop(){
    if(num<0)
        printf("-1\n");
    else 
        printf("%d\n",stack[num--]);
}

void size(){
	printf("%d\n",num+1);
}

void top(){
	if(num<0)
        printf("-1\n");
    else 
        printf("%d\n",stack[num]);
}
 
int main(){
	int input1,input2,input3;
	for(int i=0;i<3;i++){
		scanf("%d %d",&input1,&input2);
		push(input2);
	}
	
	for(int i=0;i<8;i++){
		scanf("%d",&input3);
		switch(input3){
			case 0:
				exit(0);
				break;
			case 2:
				pop();
				break;
			case 3:
				size();
				break;
			case 4:
				empty();
				break;
			case 5:
				top();
				break;
		}
	}
	return 0;
}
