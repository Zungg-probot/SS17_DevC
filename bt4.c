#include<stdio.h>

void inSonguyento();
void daoNguoc();
void sapxepTangdan();
void sapxepGiamdan();
void search();

int main(){
	int chose;
	int size;
	int arr[100];
	int choose;
	do{
		printf("\tMENU\n");
		printf("1. Nhap so phan tu va phan tu vao trong mang\n");
		printf("2. In cac phan tu\n");
		printf("3. In cac phan tu la so nguyen to\n");
		printf("4. Dao nguoc mang\n");
		printf("5. Sap xep mang\n");
		printf("       a. Tang dan\n");
		printf("       b. Giam dan\n");
		printf("6.Tim kiem phan tu\n");
		printf("7. Thoat\n");
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
				for(int i=0;i<size;i++){
		            printf("array[%d]=%d\n",i,arr[i]);
		        }
				break;
			case 3:
				inSonguyento(arr,size);
				break;
			case 4:
				daoNguoc(arr,size);
				break;
			case 5:
				printf("Lua chon phu\n");
				printf("     1. Tang dan\n");
		        printf("     2. Giam dan\n");
		        printf("Nhap lua chon: ");
		        scanf("%d",&choose);
		        if(choose == 1){
		        	sapxepTangdan(arr,size);
				}else if(choose == 2){
					sapxepGiamdan(arr,size);
				}
				break;
			case 6:
				search(arr,size);
				break;
			case 7:
				break;
		}
	}while(chose != 7);
}

void inSonguyento(int *arr, int size){
	int flag = 0;
	for(int i=0;i<size;i++){
		if(*(arr+i)==1){
		}else if(*(arr+i)==2){
			flag++;
			printf("So nguyen to: %d\n",*(arr+i));
		}else if(*(arr+i)==3){
			flag++;
			printf("So nguyen to: %d\n",*(arr+i));
		}else if(*(arr+i) % 2 ==0 || *(arr+i) % 3 ==0){
			continue;
		}else{
			printf("So nguyen to: %d\n",*(arr+i));
		}
	}
	if(flag == 0){
		printf("Khong co so nao la so nguyen to\n");
	}
}

void daoNguoc(int *arr,int size){
	for(int i=size-1;i>=0;i--){
		printf("%d",*(arr+i));
	}
	printf("\n");
}

void sapxepTangdan(int *arr,int size){
	for(int i=0;i<size -1;i++){
		for(int j = 0;j<size -i-1;j++){
			if(*(arr+j) > *(arr+j+1)){
				int temp = *(arr+j);
				*(arr+j) = *(arr+j+1);
				*(arr+j+1) = temp;
			}
		}
	}
	for(int i=0;i<size;i++){
		printf("%d\n",*(arr+i));
	}
}

void sapxepGiamdan(int *arr,int size){
	for(int i=0;i<size -1;i++){
		for(int j = 0;j<size -i-1;j++){
			if(*(arr+j) < *(arr+j+1)){
				int temp = *(arr+j);
				*(arr+j) = *(arr+j+1);
				*(arr+j+1) = temp;
			}
		}
	}
	for(int i=0;i<size;i++){
		printf("%d\n",*(arr+i));
	}
}

void search(int *arr, int size){
	int timkiem;
	printf("Nhap so ban muon tim: ");
	scanf("%d",&timkiem);
	int flag = -1;
	for(int i =0;i<size;i++){
		if(timkiem == *(arr +i)){
			flag = i;
		}
	}
	if(flag == -1){
		printf("khong tim thay phan tu\n");
	}else{
		printf("Phan tu o vi tri %d\n",flag);
	}
}
