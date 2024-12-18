#include <stdio.h>

int main(){
	int a[5];
	for(int i=0;i<5;++i){
		printf("Moi ban nhap vao phan tu thu %d: ",i+1);
		scanf("%d",&a[i]);
	}
	
	printf("Day la mang ban vua nhap vao: ");
	for(int i=0;i<5;++i){
		printf("%d ",a[i]);
	}
}
