#include <stdio.h>

int main(){
	int input,count=0;
	int arr[5];
	for(int i=0;i<5;i++)
		scanf("%d",&arr[i]);
	scanf("%d",&input);
	for(int i=0;i<5;i++){
		if(arr[i]==input)
			count++;
	}
	printf("%d",count);
}
