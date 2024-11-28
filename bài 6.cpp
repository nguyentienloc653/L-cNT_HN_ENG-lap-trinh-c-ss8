#include <stdio.h>
int main(){
    int n[3][3]={
        {2,3,1},
        {0,2,0},
        {0,6,6}
    };
    int x=0,sum=0;
    for(int i=0;i<3;i++){
        for(int f=x;f<x+1;f++){
            printf("[%d]",n[i][f]);
            sum+=n[i][f];
        }
        x++;
    }
    printf("\ntong cac so tren duong cheo chinh cua mang la: %d",sum);
    return 0;
}
