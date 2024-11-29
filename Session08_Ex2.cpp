#include <stdio.h>

int main() {
	int arr[10];
	int cantim;
	
	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 3;
	arr[3] = 4;
	arr[4] = 5;
	
	printf("Nhap vao mot phan tu : ");
	scanf("%d", &cantim);
	
	for(int i = 0; i < 5; i++ ) {
		if( cantim == arr[i] ) {
			printf("Vi tri phan tu trong mang la : %d\n", i);
			return 0;
		}
	}
	printf("Phan tu khong ton tai trong mang.\n");
	return 0;
}
