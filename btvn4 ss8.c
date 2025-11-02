#include <stdio.h>
int main(){
	
	int n,i;
	do {
	printf("can nhap so phan tu cua mang:");
	scanf("%d",&n);
		if(n<=0){
		printf("loi can nhap lai!\n");
		}
		}while(n<=0);
	int a[i];
		for(i=0;i<n;i++){
			
			printf("a[%d]=",i);
			scanf("%d",&a[i]);
		}
		printf("\ncac phan tu co trong mang:");
		for(i=0;i<n;i++){
			printf("%d",a[i]);
		}
		return 0;
	
	
}
