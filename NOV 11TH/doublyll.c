#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head=NULL,*tail=NULL;
void create(){
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    int value;
    printf("enter the data:");
    scanf("%d",&value);
    newnode->data=value;
    newnode->next=NULL;
    newnode->prev=NULL;
    if(head==NULL){
        head=tail=newnode;
    }else{
        tail->next=newnode;
        newnode->prev=tail;
        tail=newnode;
    }
}
void insert_at_begin(){
   struct node *newnode=(struct node*)malloc(sizeof(struct node));
    int value;
    printf("enter the data:");
    scanf("%d",&value);
    newnode->data=value;
    newnode->next=NULL;
    newnode->prev=NULL;
    newnode->next=head;
    head->prev=newnode;
    head=newnode; 
}

void insert_at_end(){
   struct node *newnode=(struct node*)malloc(sizeof(struct node));
    int value;
    printf("enter the data:");
    scanf("%d",&value);
    newnode->data=value;
    newnode->next=NULL;
    newnode->prev=NULL;
    tail->next=newnode; 
    newnode->prev=tail;
        tail=newnode;
     
}

void delete_at_begin(){
    struct node*ptr=head;
    head=head->next;
    head->prev=NULL;
    free(ptr);
}

void delete_at_end()
{
    struct node*tmp=tail->prev;
    while(tmp->next->next!=NULL){
        tmp=tmp->next;
    }
    tail=tmp;
    tmp=tmp->next;
    free (tmp);
    tail->next=NULL;
}                     
void display(){
    struct node*temp=head;
    while(temp!=NULL){
        printf("%d \n",temp->data);
        temp=temp->next;
    }
}
int main() {
    int data;
    while (1) {
        printf("1. Create\n");
        printf("2. Insert at Beginning\n");
        printf("3. Insert at End\n");
        printf("4. Delete at Beginning\n");
        printf("5. Delete at End\n");
        printf("6. Display\n");
        printf("Enter your data: ");
        scanf("%d", &data);

        switch (data) {
            case 1:
                create();
                break;
            case 2:
                insert_at_begin();
                break;
            case 3:
                insert_at_end();
                break;
            case 4:
                delete_at_begin();
                break;
            case 5:
                delete_at_end();
                break;
            case 6:
                display();
                break;
            default:
                printf("Invalid data\n");
        }
    }
    return 0;
}
    