#include <stdio.h>

int main(){
	int max;
	float avr=0,result=0;
	int score[5];
	for(int i=0;i<5;i++){
		scanf("%d",score[i]);
		result+=score[i];
	}
	max=score[0];
	for(int i=0;i<5;i++){
		if(max<arr[i])
			max=arr[i];
	}
	avr=result/5;
	printf("%d %.1f",max,avr);
}
