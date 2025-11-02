#include <stdio.h>
int main(){
	int n;
	printf("nhap so luong phan tu cua mang: ");
	scanf("%d",&n);
	
	int a[n];
	int i;
	for(i=0;i<n;i++){
		while(1){
			printf("nhap mang[%d]= ",i);
			scanf("%d",&a[i]);
			
			if(a[i]%2!=0){
				//thoang khoi vong lap neu la so le
				break;
			}else{
				printf("gia tri vua nhap ko phai la so le!, Vui long nhap lai\n");
			}
		}
	}
		printf("\Mang toan so le vua nhap la: ");
		for(i=0;i<n;i++){
			printf("%d",a[1]);
		}
	
		printf("\n");
		
		
		
		return 0;
	
}

