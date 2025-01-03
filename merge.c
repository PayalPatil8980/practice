#include<stdio.h>

int main(){
    int n=3,m=3,i,j,len=0,str[20];
    int a[n],b[m];
    printf("elemnts for first array");
    printf("\n");
    for(i=0;i<n;i++){
        printf("Enter elemnts: ");
        scanf("%d",&a[i]);
    }
    printf("Elemnt for second array\n");
    for(i=0;i<m;i++){
        printf("Enter elemnts: ");
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    printf("\n");
    for(i=0;i<m;i++){
        printf("%d\t",b[i]);
    }
    for(i=0;i<n;i++,len++){
        str[len]=a[i];
    }
    for(int j=0;j<n;j++,len++){
        str[len]=b[j];
    }
    
    printf("\nArray after merge");
    printf("\n");
    for(i=0;i<(n+m);i++){
        printf("%d\t",str[i]);
    }
}