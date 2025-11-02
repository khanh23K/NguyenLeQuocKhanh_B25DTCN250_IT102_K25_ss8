#include <stdio.h>
int main(){
	int arr[5]={2,23,16,74,10};
	int max,min,i;
	printf("cac co da cho la:");
	
	max=arr[0];
	min=arr[0];
	
	for (i = 1; i < 5; i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }
	printf("\nphan tu lon nhat la: %d",max);
	printf("\nphan tu nho nhat la: %d",min);
	
	
}
