#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
# define max 5 
int main() {
    int queue[max], f=-1, r=-1, item, choice;

    do {
        printf("\nChoose an operation:\n");
        printf("1. Insertion from front\n");
        printf("2. Deletion from front\n");
        printf("3. Insertion from rear:\n");
        printf("4. Deletion from rear\n");
        printf("5. Traverse\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1: if( f==0 && r== max-1){
                printf("dequeue is full");
            }
            else 
            {
                   
                    if(f==0)
                    {
                        for(int i=r;i>=f;i--)
                        {
                            queue[i+1]=queue[i];
                        }
                        r=r+1;

                    }
                    else if (f==-1)   
                    {
                    f=0;
                    r=0;

                    }
                   else               
                    {
                        f=f-1;
                    }
                    printf("Enter item\n");
                    scanf("%d",&item);
                    queue[f]=item;
                    
                }
                break;
             case 2:
                if (f==-1) {
                    printf("Deqeue is empty");
                }

                else {
                    printf("Item deleted is:\t%d\t", queue[f]);
                    
                    if (f==r) {
                        f=-1;
                        r=-1;
                    }

                    else {
                        f=f+1;
                    }

                    
                }
                break;

            case 3:  
                if ((f==0) && (r == max-1)) {
                    printf("Dequeue is full");
                }

                else {
                    
                    if(r==max-1)
                    {
                        for(int i=f;i<=r;i++)
                        {
                            queue[i-1]=queue[i];
                        }
                        f=f-1;

                    }
                    else{
                        r=r+1;
                    }
                    printf("Enter item\n");
                    scanf("%d",&item);
                    queue[r]=item;
                    if(f == -1) {
                        f = 0;
                    }
                }
                break;
            case 4:
                if (r==-1) {
                    printf("Deqeue is empty");
                }

                else {
                    printf("Item deleted is:\t%d\t", queue[r]);
                    
                    if (f==r) {
                        f=-1;
                        r=-1;
                    }

                    else {
                        r=r-1;
                    }

                    
                }
                break;


            case 5:
                if (f==-1) {
                    printf("Deqeue is empty.");
                }
                else {
                    for(int i=f;i<=r; i++) {
                        printf("%d\t", queue[i]);
                    }
                }
                break;

            case 6:
                printf("Exiting program.");
                break;

            default:
                printf("Enter valid choice. Please try again");
                break;
        }
    } while(choice!=6);



}
