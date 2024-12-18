#include <stdio.h>

int main(){
	int n,m;
	printf("Moi ban nhap vao so hang: ");	scanf("%d",&n);
	printf("Moi ban nhap vao so cot: ");	scanf("%d",&m);
	int a[n][m];
	
	for(int i=0;i<n;i++){
		printf("Moi ban nhap vao 3 phan tu thu %d: ",i+1);
		for(int j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("Day la ma tran cua ban:\n");
	for(int i=0;i<n;++i){
		for(int j=0;j<m;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
