#include<stdio.h>
#include<string.h>

int demChuCai();
int demChuSo();
int DemKitudacbiet();

int main(){
	int chose;
	char chuoi[100];
	
	do{
		printf("\tMENU\n");
	    printf("1. Nhap vao chuoi\n");
	    printf("2. In ra chuoi\n");
	    printf("3. Dem so luong chu cai trong chuoi\n");
	    printf("4. Dem so luong chu so trong chuoi\n");
	    printf("5. Dem so luong ki tu dac biet\n");
	    printf("6.Thoat\n");
	    printf("Nhap lua chon cua ban: ");
	    scanf("%d",&chose);
	    switch(chose){
	    	case 1:
	    		printf("Vui long nhap vao mot chuoi: ");
	    		getchar();
                fgets(chuoi, 100, stdin);
                chuoi[strcspn(chuoi, "\n")] = 0;
                break;
	    	case 2:
	    		printf("Chuoi vua nhap la: %s\n",chuoi);
	    		int size = strlen(chuoi);
	    		break;
	    	case 3:
	    		printf("So luong chu cai trong chuoi: %d\n",demChuCai(chuoi));
	    		break;
	    	case 4:
	    		printf("So luong chu so trong chuoi: %d\n",demChuSo(chuoi));
	    		break;
	    	case 5:
	    		size -= demChuCai(chuoi);
	    		size -= demChuSo(chuoi);
	    		printf("So luong ki tu dac biet trong chuoi: %d\n",size);
	    		break;
	    	case 6:
	    		break;
		}
	}while(chose != 6);
}

int demChuCai(char *str){
    int count = 0;
    while (*str != '\0'){
        if((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z')){
            count++;
        }
        str++;
    }
    return count;
}

int demChuSo(char *str){
    int count = 0;
    while (*str != '\0'){
        if(*str >= '0' && *str <= '9'){
            count++;
        }
        str++;
    }
    return count;
}

