#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

void insert(Node** head, int value)
{

      Node* newNode = (Node*)malloc(sizeof(Node));
      newNode ->data = value;
      newNode->next = nullptr;

      if((*head) ==nullptr){
        *head =newNode;
        return;
      }
      Node* temp = *head;
      while (temp -> next){

        temp = temp->next;
      }
      temp->next = newNode;

}

void remove(Node** head, int value)
{

       if (*head == nullptr) return;

       if((*head)->data==value)
        {
            Node* temp = *head;
            *head = (*head)->next;
            free(temp);
            return;
        }

        Node* temp = *head;
        while (temp -> next && temp -> next -> data != value)
        {
            temp = temp -> next;
        }

        if (temp -> next){
            Node* toDelete = temp ->next;
            temp ->next = temp -> next;
            free(toDelete);
        }
}

void display(){

        Node* temp = head;
        while (temp){
            cout<< temp -> data << "->";
            temp = temp->next;
        }
        cout<<"NULL\n";
}

void freelist(Node** head){

        Node* temp;
        while (*head){
            temp = *head;
            *head =(*head) -> next;
            free(temp);
        }
}

int main()
{
    Node* head = nullptr;
    insert(&head, 10);
    insert(&head, 20);
    insert(&head, 30);

    cout << "Linked List: ";
    display(head);

    remove(&head, 20);
    cout<<" after Deletion: "
    display(head);

    freeList(&head);
    return 0;


}
