#include <stdio.h>
#include <math.h>
 int i;
int laSoNguyenTo(int n) {
    if (n < 2) return 0;
    for ( i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int n;

    printf("can nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];


    for ( i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }


    printf("Mang sau khi nhap la: ");
    for ( i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }


    printf("\nCac so nguyen to trong mang la: ");
    for ( i = 0; i < n; i++) {
        if (laSoNguyenTo(arr[i])) {
            printf("%d ", arr[i]);
        }
    }

    printf("\n");
    return 0;
}
