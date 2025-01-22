#include<stdio.h>

int main(){
    int a[6]={10,8,8,10,8,10};
    int n=5,i,j;
    int target=18;
    int sum=0;
    int found=0;
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            sum=a[i]+a[j];
            if(target==sum){
               printf("\n[%d , %d]",i,j);
               found=1;
            }
        }
    }
    if(found==0){
        printf("\n the target %d not found",target);
    }
}



