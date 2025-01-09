#include<stdio.h>
#define size 5
int f=-1,r=-1,a[size],i,x;

void insert_front(int x){
    if(f==((r+1)%size)){
        printf("overflow\n");
    }
    else if(f==-1 && r==-1){
        f=r=0;
        a[f]=x;
    }
    else if(f==0){
        f=size-1;
        a[f]=x;
    }
    else{
        f=f-1;
        a[f]=x;
    }
}

void insert_rear(int x){
    if(f==((r+1)%size)){
        printf("\noverflow\n");
    }
    else if(f==-1 && r==-1){
        f=r=0;
        a[r]=x;
    }
    else if(r==size-1){
        r=0;
        a[r]=x;
    }
    else{
        r=r+1;
        a[r]=x;
    }
}

void display(){
    i=f;
    if(f==-1 && r==-1){
        printf("queue is empty");
    }
    else{
        while(i!=r){
            printf("%d\t",a[i]);
            i=(i+1)%size;
        }
        printf("%d",a[r]);
    }
}

void delete_front(){
    if(f==-1 && r==-1){
        printf("queue is empty");
    }
    else if(f==r){
        f=r=-1;
    }
    else if(f==size-1){
        printf("\ndequed elemnt from front is :%d",a[f]);
        f=0;
    }
    else{
        printf("\ndequed elemnt from front is :%d",a[f]);
        f=f+1;
    }
}

void delete_rear(){
    if(f==-1 && r==-1){
        printf("queue is empty");
    }
    else if(f==r){
        f=r=-1;
    }
    else if(r==0){
        printf("\ndequed elemnt fron rear is: %d",a[r]);
        r=size-1;
    }
    else{
        printf("\ndequed elemnt fron rear is: %d",a[r]);
        r=r-1;
    }
}

int main(){
    insert_front(10);
    insert_front(20);
    insert_front(30);
    display();
    insert_rear(40);
    insert_rear(50);
    insert_rear(60);
    display();
    delete_front();
    printf("\n");
    display();
    delete_rear();
    printf("\n");
    display();
}