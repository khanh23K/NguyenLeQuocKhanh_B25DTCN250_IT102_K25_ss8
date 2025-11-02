#include <stdio.h>
int main(){
	int n[5]={2,4,6,8,10};
	int i,dem=0;
	
	printf("nhap cac phan tu:");
	
	for(i=0;i<5;i++){
		if(n[i]%2==0){
		
		printf("\ncac phan tu mang so chan la: %d",n[i]);
		dem++;
		}else{
			printf("day ko phai la so chan");
		}
	}
	if(dem==0){
		printf("mang ko chua so chan");
	}
	return 0;
}

