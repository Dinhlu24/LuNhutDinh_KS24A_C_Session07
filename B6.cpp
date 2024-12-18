#include <stdio.h>

int main(){
	int a[5]={1,2,3,4,5};
	printf("Mang truoc khi thay doi: ");
	for(int i=0;i<5;++i){
		printf("%d ",a[i]);
		if(a[i] % 2 == 0)	a[i] += 3;
		else	a[i] += 2;
	}
	printf("\nMang moi sau khi thay doi: ");
	for(int i=0;i<5;++i){
		printf("%d ",a[i]);
	}
}
