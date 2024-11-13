#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head = NULL, *tail = NULL;

void create(){
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    int value;
    printf("Enter the data: ");
    scanf("%d", &value);
    newnode->data = value;
    newnode->next = NULL;
    newnode->prev = NULL;
    
    if(head == NULL){
        head = tail = newnode;
    } else {
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }
}

void insert_at_begin(){
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    int value;
    printf("Enter the data: ");
    scanf("%d", &value);
    newnode->data = value;
    newnode->next = NULL;
    newnode->prev = NULL;
    
    if (head == NULL) {  // If the list is empty
        head = tail = newnode;
    } else {
        newnode->next = head;
        head->prev = newnode;
        head = newnode;
    }
}

void insert_at_end(){
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    int value;
    printf("Enter the data: ");
    scanf("%d", &value);
    newnode->data = value;
    newnode->next = NULL;
    newnode->prev = NULL;
    
    if (head == NULL) {  // If the list is empty
        head = tail = newnode;
    } else {
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }
}

void delete_at_begin(){
    if (head == NULL) {
        printf("List is empty, nothing to delete.\n");
        return;
    }
    struct node *ptr = head;
    head = head->next;
    if (head != NULL) {
        head->prev = NULL;
    } else {
        tail = NULL;  // If list becomes empty
    }
    free(ptr);
}

void delete_at_end(){
    if (tail == NULL) {
        printf("List is empty, nothing to delete.\n");
        return;
    }
    struct node *tmp = tail;
    if (tail->prev == NULL) {  // Only one node in the list
        head = tail = NULL;
    } else {
        tail = tail->prev;
        tail->next = NULL;
    }
    free(tmp);
}

void display(){
    struct node *temp = head;
    if (temp == NULL) {
        printf("List is empty.\n");
        return;
    }
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
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
        printf("Enter your choice: ");
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
                printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}
