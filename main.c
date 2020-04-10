//rahul-moorkoth
#include <stdio.h>
#include <stdlib.h>

int insertNode();
int printNode();

struct node
{
 int data;
 struct node *next;
};

struct node *head = NULL;

int insertNode()
{

 struct node *temp = NULL;
 int inputData;
 printf("\n###--------------###############################\n");
 printf("head = %p,  temp = %p \n",head,temp);

 //step1
 temp = (struct node *) malloc(sizeof(struct node));
 temp = (struct node *) malloc(sizeof(struct node));
 temp = (struct node *) malloc(sizeof(struct node));
 temp = (struct node *) malloc(sizeof(struct node));
 temp = (struct node *) malloc(sizeof(struct node));
 temp = (struct node *) malloc(sizeof(struct node));
 if(temp == NULL)
 {
	 return 1;
 }
 printf("temp = %p \n",temp);

 //step2
 printf("tempNext = %p \n",temp->next);
 temp->next = head;
 printf("tempNext = %p \n",temp->next);

 
//step3
  printf("input"); 
  scanf("%d",&inputData);
  printf("Input Data is %d\n",inputData);
  temp->data = inputData;  
 
//step4  
 printf("head = %p,  temp = %p \n",head,temp);
  head = temp;
 printf("head = %p,  temp = %p \n",head,temp);
 printf("##################################\n\n");
 return 0;
}

int printNode()
{
struct node *head_temp = NULL;
printf("##################################\n\n");
printf("head = %p\n ",head);
head_temp = head;
while(head_temp->next != NULL)
{
printf("head->next = %p\n",head_temp->next);
printf("data = %d\n ",head_temp->data);
head_temp = head_temp->next;
printf("head = %p\n ",head_temp);
printf("head->next = %p\n",head_temp->next);
}
printf("data = %d\n ",head_temp->data);
printf("##################################\n\n");
return 0;
}

int main()
{
int n,i;
printf(" How many numbers you want to save? \n");
scanf("%d",&n);
for(i=0; i<n; i++)
{
 insertNode();
  
 printNode();
}
// printNode();
}
