#include <stdio.h>

int main(){
	
	int arr[5] = {11, 7, 11, 13, 9};
	int i;
	int dem = 0;
	
	printf("Cac phan tu cua mang la: ");
	for(i=0;i<5;i++){
		printf("%5d", arr[i]);
	}
	
	printf("\nCac phan tu chan trong mang la: ");
	for(i=0;i<5;i++){
		if(arr[i]%2==0){
			printf("%5d",arr[i]);
			dem++;
		}
	}
	if(dem==0){
		printf("\nMang khong chua so chan\n");
	}else{
		printf("\nTong cong co %d so chan trong mang.\n",dem);
	}
	return 0;
}
