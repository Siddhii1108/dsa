#include<stdio.h>
#include<stdlib.h>
#define MAX 3

int main(){
    int front = -1;
    int rear = -1;
    int item; 
    int ch; 
    int Queue[MAX];

    while(1){
        printf("\n1. Insertion\n");
        printf("2. Deletion\n");
        printf("3. Traverse\n");
        printf("4. Exit\n");
        scanf("%d", &ch); 

        switch(ch){
            case 1:
                if(rear == MAX - 1){
                    printf("Queue is full\n");
                } else {
                    if (front == -1){ 
                        front = 0; 
                    }
                    printf("Enter the element\n");
                    scanf("%d", &item); 

                    rear++;
                    Queue[rear] = item;
                }
                break;

            case 2:
                if(front == -1){ 
                    printf("Queue is empty\n");
                    front = -1; 
                    rear = -1;
                } else {
                    printf("Element to be deleted is %d\n", Queue[front]); 
                    front++; 

                    if (front == rear) { 
                        front = -1;
                        rear = -1;
                    }
                }
                break;
            
            
            case 3: 
                if(front == -1 ){
                    printf("Queue is empty\n");
                } else {
                    printf("Queue elements: ");
                    for(int i = front; i <= rear; i++){
                        printf("%d ", Queue[i]);
                    }
                    printf("\n");
                }
                break;

            case 4:
                exit(0);

            default:
                printf("Invalid Choice\n"); 
                break;
        }
    }
}