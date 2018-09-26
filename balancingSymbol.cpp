#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct Node
{
   char data;
   struct Node *next;
}*top = NULL;

void push(char);
char pop();
void display();

int main()
{
    char arr[10];
    int i;
    char c;
    gets(arr);
    for(i=0;i<10;i++){
        if(arr[i]=='(')push(arr[i]);
        else{
            c=pop();
            if(c=='('&&arr[i]==')'){

            }
            else{
                printf("Not balanced\n");
                return 0;
            }

        }
    }
    c=pop();
    if(c=='z'){
        printf("Balanced");
    }
    else{
        printf("Not Balanced");
    }
}
void push(char value)
{
   struct Node *newNode;
   newNode = (struct Node*)malloc(sizeof(struct Node));
   newNode->data = value;
   if(top == NULL)
      newNode->next = NULL;
   else
      newNode->next = top;
   top = newNode;
   printf("\nInsertion is Success!!!\n");
}
char pop()
{
    char c;
   if(top == NULL){
      printf("\nStack is Empty!!!\n");
      return 'z';
   }
   else{
      struct Node *temp = top;
      printf("\nDeleted element: %c", temp->data);
      c=temp->data;
      top = temp->next;
      free(temp);
      return c;
   }
}
void display()
{
   if(top == NULL)
      printf("\nStack is Empty!!!\n");
   else{
      struct Node *temp = top;
      while(temp->next != NULL){
	 printf("%c--->",temp->data);
	 temp = temp -> next;
      }
      printf("%c--->NULL",temp->data);
   }
}

