#include <stdio.h>

int main() {
	int arr[2][3] = {
	    {1,3,5},
	    {2,4,6},
	};
	int max = arr[0][0];
	for(int i =0; i < 2; i++ ) {
		for(int j = 0; j < 3; j++ ) {
			if(arr[i][j] > max) {
				max = arr[i][j];
			}
		}
	} 
	printf("Phan tu lon nhat trong mang la : %d\n", max);
	return 0;
} 
