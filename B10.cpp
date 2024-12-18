#include <stdio.h>

int isPrime(int n){
	if(n < 2)	return 0;
	for(int i=2;i*i<=n;i++){
		if(n % i == 0)	return 0;
	}
	return 1;
}

int main(){
	int n;	printf("Moi nhap vao so phan tu trong mang: ");scanf("%d", &n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("Moi nhap vao phan tu thu %d: ",i+1);
		scanf("%d",&a[i]);
	}
	
	printf("Day la tat ca phan tu la so nguyen to: ");
	for(int i=0;i<n;i++){
		if(isPrime(a[i]))	printf("%d ",a[i]);
	}
}
