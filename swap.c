#include<stdio.h>

int main(){
    int i,n=5;
    int a[n];
    for(i=0;i<n;i++){
        printf("Enter the elemnt: ");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);  
    }
    printf("\n");
    for(i=0;i<n;i++){
        a[0]=a[0]+a[n-1];
        a[n-1]=a[0]-a[n-1];
        a[0]=a[0]-a[n-1];

        printf("%d\t",a[i]);
    }

}