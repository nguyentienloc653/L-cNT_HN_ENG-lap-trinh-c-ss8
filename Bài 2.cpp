#include <stdio.h>
int main(){
    int n[2][3]={
        {1,2,3},
        {4,5,6}
    };
    int x,exist=0;
    printf("moi nhap vao mot phan tu: ");
    scanf("%d",&x);
    for(int i=0;i<2;i++){
        for(int f=0;f<3;f++){
            if(x==n[i][f]){
                printf("vi tri phan tu trong mang la n[%d][%d]\n",i,f);
                exist=1;
            }
        }
    }
    if(exist==0){
        printf("phan tu khong ton tai trong mang");
    }
    return 0;
} 
