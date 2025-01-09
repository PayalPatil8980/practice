#include<stdio.h>

int f=-1,r=-1,i,x,n=5;
int a[5];

void equeue(int x){
    if(f==-1 && r==-1){
        f=0;
        r=0;
        a[r]=x;
    }
    else if(f==((r+1)%n)){
        printf("queue is full\n");
    }
    else{
        r++;
        a[r]=x;
    }
}
void dqueue(){
    if(f==-1 && r==-1){
        printf("queue is empty");
    }
    else if(f==r){
        f=-1;
        r=-1;
    }
    else{
        printf("\n%d: Dequed",a[f]);
        f++;
        printf("\n");
        
    }
}

void display(){
    i=f;
    if(r==-1 && f==-1){
        printf("Queue is empty");
    }
    else{
        while(i!=r){
            printf("%d\t",a[i]);
            i=(i+1)%n;
        }
        printf("%d",a[r]);
    }
}

int main(){
    equeue(10);
    equeue(20);
    equeue(30);
    equeue(40);
    equeue(50);
    equeue(60);
    display();
    dqueue();
    display();
}