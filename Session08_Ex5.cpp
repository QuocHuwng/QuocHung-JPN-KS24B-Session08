#include<stdio.h>

int main(){
	int arr[2][3]={
    	{1,2,3},
    	{4,5,6},
	};
	int sum;
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			if(i==0 || i==2-1 || j==0 || j==3-1){
				sum+=arr[i][j];
			}
		}
	}
	printf("tong = %d",sum);
	return 0;
}