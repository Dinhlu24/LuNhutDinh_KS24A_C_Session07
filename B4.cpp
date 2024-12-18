#include <stdio.h>

int main(){
	int n;	printf("Moi nhap vao so phan tu cua mang: ");	scanf("%d", &n);
	
	int a[n];
	for(int i=0;i<n;++i){
		printf("Moi nhap vao phan tu thu %d cua mang: ", i+1);
		scanf("%d", &a[i]);
	}
	printf("Mang da duoc nhap xong");
}
