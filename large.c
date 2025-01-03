#include<stdio.h>

int main(){
    int i,n=5;
    int a[n];

    for(i=0;i<n;i++){
        printf("Enter the elment: ");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    int large=a[0];
    printf("\n");
    for(i=0;i<n;i++){
        if(a[i]>large){
            large=a[i];
        }
    }
    printf("The largest element is: %d\t",large);
}