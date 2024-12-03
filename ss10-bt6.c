#include <stdio.h>

int main(){
	int a[]={2,5,2,3,5,7,5,89,45,54},b[100],count=0;
	int n=sizeof(a)/sizeof(arr[0]),value;
		printf("nhap vao 1 so nguyen bat ky: ");
		scanf("%d",&value);
	int flag=-1;
		for(int i=0; i < n;i++){
		if(a[i]==value){
			b[count++]=i;
		}
	}
	if(count!=0){
		printf("vi tri cua phan tu trong mang la: ");
		for(int i=0; i < count; i++){
			printf("%d ",b[i]);
		}
	}else{
		printf("phan tu khong co trong mang");
	}

return 0;
}

