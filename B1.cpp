#include <stdio.h>

int main(){
	int a[10] = {1,4,2,10,5,-10,-9,232,421,542};
	for(int i=0;i<10;++i){
		printf("Phan tu thu %d: ",i);
		printf("%d \n",a[i]);
	}
	int size = sizeof(a)/sizeof(int);
	printf("Do dai cua mang: %d",size);
}
