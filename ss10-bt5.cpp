#include <stdio.h>

int main(){
	int arr[7]={2,6,4,8,7,13,10};
	int start = 0;
	int end = 6;
	int mid;
	int item; 
	for (int i = 0 ; i < 7; i++){
		for (int j = 0 ; j<7-i-1; j++){
			if(arr[j]>arr[j+1]){
				int temp= arr[j];
				arr[j]= arr[j+1];
				arr[j+1]= temp;  
		} 
	}
	printf("Moi ban nhap gia tri can tim kiem: ");
	scanf("%d", &item);
	while(start <= end ){
		mid = (start + end )/2;
		if(arr[mid]==item){
			printf("Phan tu %d co vi tri %d \n", item, mid); 
			return 0; 
		}else if(arr[mid]<item){
			start = mid +1; 
		}else{
			end = mid -1; 
		}
	}
	printf("Khong tim thay vi tri");  
}
}
