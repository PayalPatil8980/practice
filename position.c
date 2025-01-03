#include<stdio.h>

int main(){
    int pos,i,val=0;
    int a[5]={12,23,34,45,56};
    int n=5;
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    printf("\nEnter the position: ");
    scanf("%d",&pos);
    printf("Enter the value: ");
    scanf("%d",&val);
    for(i=n-1;i>=pos;i--){
        a[i]=a[i-1];
    }
    a[pos-1]=val;
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}