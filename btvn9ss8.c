#include <stdio.h>

int main(){
	int arr[100][100];
	int m,n,i,j;
	
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
	printf("Mang sau khi nhap la: \n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%4d",arr[i][j]);
		}
	}
	
	printf("\nCac phan tu nam tren bien cua mang la: \n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(i==0 || i==n-1 || j==0 || j==m-1){
				printf("%4d",arr[i][j]);
			}else{
				printf("    ");
			}
		}
			printf("\n");
	}

	return 0;
}
