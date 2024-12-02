#include <stdio.h>

int main(){
	int arr[] = {3,7,9,11,32,65,99},value;
		printf("nhap vao phan tu bat ky: ");
		scanf("%d",&value);
	for(int i =0; i < sizeof(arr)/sizeof(arr[0]);i++){	
		if(arr[i] == value){
			printf("phan tu %d co ton tai trong mang",value);
			break;
		}else{
			printf("phan tu %d khong ton tai trong mang",value);
			break;
		}
	}
	
return 0;
}

