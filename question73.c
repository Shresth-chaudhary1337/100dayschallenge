#include<stdio.h>
int main(){
    int a,b;
    printf("enter the order of matrix\n");
    scanf("%d %d",&a,&b);
    int n[a][b];
    int p[a];
    printf("enter the elements of arrary\n");
    for(int i=0;i<a;i++){
        p[i]=0;
        for(int j=0;j<b;j++){
            scanf("%d",&n[i][j]);
            p[i]=p[i]+n[i][j];
        }
    }
    for(int i=0;i<a;i++)
    {
        printf("sum of %d row is %d \n",i+1,p[i]);
    }
}