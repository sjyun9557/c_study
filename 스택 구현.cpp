#include <stdio.h>
#define MAA_STACK_SIZE 1000000

int stack[MAX_STACK_SIZE];
int num=-1;

void push(char input){
	num++
	STACK[num]=input;
}

int pop(){
	num--;
	if(num<0)
		return -1;
	else
		return stack[num];
}

void empty(){
	if(num<0){
		printf("True\n");
	}
	else
		printf("False\n");
}

int size(){
	return num+1;
}

int top(){
	if(num<0)
		return -1;
	else
		return stack[num];
}



int main(){
	push(1);
	push(2);
	push(3);
	printf("%d\n",pop());
	printf("%d\n",size());
	printf("%d\n",top());
	empty();
	printf("%d\n",pop());
	printf("%d\n",pop());
	empty();
	
}
