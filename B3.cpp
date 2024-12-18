#include <stdio.h>

int main(){
	int a[5]={1,2,3,4,5},chan = 0;
	
	for(int i=0;i<5;++i){
		if(a[i] % 2 == 0){
			printf("Day la so chan vi tri thu %d: %d \n",i+1,a[i]);
			chan++;
		}
	}
	
	if(chan == 0){
		printf("Mang nay khong chua so chan: ");
		for(int i=0;i<5;++i){
			printf("%d ",a[i]);
		}
	}
	else	printf("Mang nay co %d so chan\n", chan);
	
	chan =0;
	int b[5]={1,3,5,7,9};
	
	for(int i=0;i<5;++i){
		if(b[i] % 2 == 0){
			printf("Day la so chan vi tri thu %d: %d \n",i+1,b[i]);
			chan++;
		}
	}
	
	if(chan == 0){
		printf("Mang nay khong chua so chan: ");
		for(int i=0;i<5;++i){
			printf("%d ",b[i]);
		}
	}
	else	printf("Mang nay co %d so chan", chan);
	
	
}
