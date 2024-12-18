#include <stdio.h>

int main(){
	int n,m;
	printf("Moi nhap vao so hang: ");	scanf("%d",&n);
	printf("Moi nhap vao so cot: ");	scanf("%d",&m);
	int a[n][m];
	for(int i=0;i<n;i++){
		printf("Moi nhap vao %d phan tu thu %d: ",n,i+1);
		for(int j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(i == 0 || j == 0 || i == n-1 || j == n - 1)	printf("%d ",a[i][j]);
			else	printf("  ");
		}
		printf("\n");
	}
}
