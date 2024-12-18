#include <stdio.h>

int main(){
	int a[5]={5,4,2,12,2},min=a[1],max=a[1];
	for(int i=0;i<5;i++){
		if(max < a[i])	max=a[i];
		if(min > a[i])	min=a[i];
	}	
	printf("Phan tu lon nhat trong mang la: %d\nPhan tu nho nhat trong mang la: %d",max,min);
}
