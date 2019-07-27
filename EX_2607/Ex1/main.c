#include <stdio.h>

int main() {
    int N;
    printf("Nhap 1 so:");
    scanf("%d",&N);

//    if(N==2){
//        printf("Day la thu %d\n",N);
//    }if(N==3){
//        printf("Day la thu %d\n",N);
//    }if(N==4){
//        printf("Day la thu %d\n",N);
//    }if(N==5){
//        printf("Day la thu %d\n",N);
//    }if(N==6){
//        printf("Day la thu %d\n",N);
//    }if(N==7){
//        printf("Day la thu %d\n",N);
//    }if(N==8){
//        printf("Day la thu %d\n",N);
//    }if(N<2 || N>8){
//    printf("Khong phai ngay trong tuan");
//    }

//    if(N>=2 && N<=7){
//        printf("Day la thu %d\n",N);
//    } else if(N==8){
//        printf("Day la chu nhat");
//    } else{
//        printf("Khong phai ngay trong tuan");
//    }

    switch (N){
        case 2: printf("Day la ngay thu 2 \n");break;
        case 3: printf("Day la ngay thu 3 \n");break;
        case 4: printf("Day la ngay thu 4 \n");break;
        case 5: printf("Day la ngay thu 5 \n");break;
        case 6: printf("Day la ngay thu 6 \n");break;
        case 7: printf("Day la ngay thu 7 \n");break;
        default: printf("Khong phai ngay trong tuan \n");

    }


    return 0;
}
