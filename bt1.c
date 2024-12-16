#include<stdio.h>

void inPhantu();
int dodaiMang();
int tongPhantu();
int maxArray();
int maxArr();

int main(){
	int chose;
	int arr[100];
	int size;
	do{
		printf("\tMENU\n");
		printf("1. Nhap so phan tu va phan tu vao trong mang\n");
		printf("2. In cac phan tu\n");
		printf("3. Tinh do dai mang\n");
		printf("4. Tinh tong cac phan tu trong mang\n");
		printf("5. Hien thi phan tu lon nhat\n");
		printf("6.Thoat\n");
		printf("Nhap lua chon cua ban: ");
		scanf("%d",&chose);
		switch(chose){
			case 1:
				printf("Nhap so luong phan tu: ");
	            scanf("%d",&size);
	            for(int i=0;i<size;i++){
		            printf("array[%d]=",i);
		            scanf("%d",&arr[i]);
		        }
				break;
			case 2:
				inPhantu(arr, size);
				break;
			case 3:
				dodaiMang(size);
				break;
			case 4:
				tongPhantu(arr, size);
				break;
			case 5:
				printf("Phan tu lon nhat trong mang: %d\n",maxArray(arr, size));
				break;
			case 6:
				break;
		}
	}while(chose != 6);
	return 0;
}

void inPhantu(int *arr, int size){
    for(int i = 0; i < size; i++){
        printf("Phan tu %d: %d\n",i,*(arr + i));
    }
}

int dodaiMang(int size){
	printf("Do dai cua mang la: %d\n",size);
}

int tongPhantu(int *arr, int size){
	int sum = 0;
    for(int i = 0; i < size; i++){
        sum += *(arr + i);
    }
    printf("Tong cac phan tu trong mang: %d\n",sum);
}

int maxArray(int *arr,int size){
	int max = 0;
	for(int i=0;i<size;i++){
		if(*(arr + i) > max){
			max = *(arr + i);
		}
	}
	return max;
}
