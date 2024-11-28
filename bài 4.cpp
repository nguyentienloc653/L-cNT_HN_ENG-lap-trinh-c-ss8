#include <stdio.h>
int main(){
    int n[2][3]={
        {1,2,3},
        {4,5,6}
    };
    int max=n[0][0];
    for(int i=0;i<2;i++){
        for(int f=0;f<3;f++){
            if(n[i][f]>max){
                max=n[i][f];
            }
        }
    }
    printf("phan tu lon nhat trong mang la: %d",max);
    return 0;
}
