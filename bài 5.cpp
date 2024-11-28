#include <stdio.h>
int main(){
    int n[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int sum=0;
    for(int i=0;i<3;i++){
        sum+=n[0][i];
    }
    for(int i=0;i<3;i++){
        sum+=n[2][i];
    }
    sum+=n[1][0];
    sum+=n[1][2];
    printf("tong cac phan tu tren duong bien la: %d",sum);
    return 0;
}
