#include <stdio.h>

int main() {
    int n;

    printf("Nhap so nguyen n: ");
    scanf("%d", &n);
    
    int arr[n][n];
    printf("Nhap cac phan tu cua ma tran %dx%d:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Nhap phan tu o vi tri [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\nMa tran %dx%d la:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
