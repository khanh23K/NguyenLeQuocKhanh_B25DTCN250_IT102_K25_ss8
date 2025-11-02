#include <stdio.h>

int main(){
	int arr[100][100];
	int n, m;
	int i, j;
	
	printf("Nhap vao so hang cua mang: ");
	scanf("%d",&n);
	printf("Nhap vao so cot cua mang: ");
	scanf("%d",&m);
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
		printf("arr[%d][%d]= ",i,j);
		scanf("%d",&arr[i][j]);
		}
	}
	printf("Cac phan tu cua mang la: \n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%5d",arr[i][j]);
		}
	}
	printf("\n");
	
	return 0;
}
