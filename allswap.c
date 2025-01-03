#include<stdio.h>

int main(){
    int n=6,i,j, a[6]={12,34,56,67,89,101};
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    printf("\n");
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[j]>a[i]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;  
            }
        }
        printf("%d\t",a[i]);
    }
}