#include<stdio.h>

int main(){
    int a[5]={2,5,6,8,10};
    int n=5,i,j;
    int target=114;
    int sum=0;
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            sum=a[i]+a[j];
            if(target!=sum){
                break;
                
            }
            else{
                printf("\n[%d , %d]",i,j);
            }
        }
    }
}