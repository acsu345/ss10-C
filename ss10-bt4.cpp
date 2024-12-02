#include <stdio.h>

int main(){
	int arr[5]={4,8,99,5,10};
	for (int i = 0; i< 5; i++){
		int minIdx = i; 
		for (int j=i; j <5; j++){
			if (arr[j]<arr[minIdx]){
				minIdx = j; 
			} 
		}
		if (minIdx!=i){
			int temp;
			temp = arr[minIdx];
			arr[minIdx]= arr[i];
			arr[i]= temp; 
		}  
	}
	for(int i = 0 ; i < 5 ; i++){
		printf("%d  ", arr[i]);
	}
	
	return 0; 
}
