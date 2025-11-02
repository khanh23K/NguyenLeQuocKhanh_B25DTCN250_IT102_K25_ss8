#include <stdio.h>
int main(){
	int arr[5]={1,2,3,4,5};
	int i;
	printf("cac so cua mang dau tien la: \n");
	for(i=0;i<5;i++){
		printf("arr[%d] = %d\n",i,arr[i]);
	}
	printf("Cac so cua mang sau thay doi la: \n");
	for(i=0;i<5;i++){
		if(arr[i]%2!=0){
			arr[i]=arr[i]+2;
		}else{
			arr[i]=arr[i]+3;
		}
		printf("arr[%d]= %d\n",i,arr[i]);
	}
	
	return 0;	
}

