#include<stdio.h>
struct node 
{
    int data;
    struct node *next;    
};
struct node *head=NULL,*tail=NULL;
void create(){
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
        int data;
        printf("enter the value: ");
        scanf("%d",&data);
        newnode->data=data;
        newnode->next=NULL;
        if(head=NULL)
        {
            head=tail=newnode;
        }
        else
        {
            tail->next=newnode;
            tail=newnode;
        }
    }

void insert_at_begin(){
struct node *newnode=(struct node*)malloc(sizeof(struct node));
        int data;
        printf("enter the value: ");
        scanf("%d",&data);
         newnode->data=data;
         newnode->next=NULL;
         newnode->next=head;
         head=newnode;
}
void insert_at_end(){
struct node *newnode=(struct node*)malloc(sizeof(struct node));
        int data;
        printf("enter the value: ");
        scanf("%d",&data);
         newnode->data=data;
         newnode->next=NULL;
         tail->next=newnode;
         tail=newnode;
}
void delete_at_begin(){ 
    struct node*temp=head;
    head=head->next;
    free(temp);
}
void delete_at_end(){ 
    struct node*ptr=head;
    while(ptr->next->next!=NULL){
        ptr=ptr->next;
    }
    tail=ptr;
    ptr=ptr->next;
    free(ptr);
    tail->next=NULL;
}
void display() {
    if(head == NULL){
        printf("List is empty\n");
        return;
    }
    struct node* temp = head;
    printf("List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
int main() {
    int choice;
    while (1) {
        printf("\nMenu:\n");
        printf("1. Create\n");
        printf("2. Insert at Beginning\n");
        printf("3. Insert at End\n");
        printf("4. Delete at Beginning\n");
        printf("5. Delete at End\n");
        printf("6. Display\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
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
                printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}





