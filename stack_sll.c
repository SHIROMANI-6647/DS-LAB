#include<stdio.h>
#include<stdlib.h>
typedef struct sll{
    int data;
    struct sll *link;
}node;
node *top = NULL;
void push(int);
void pop();
void display();
int main()
{
int ch,ele;
while(1)
{
printf("\n1.push\n2.pop\n3.display\n4.exit\n");
printf("Enter your choice:");
scanf("%d",&ch);
switch(ch)
{
    case 1:
        printf("Enter the data need to be inserted:");
        scanf("%d",&ele);
        push(ele);
        break;
   case 2:
        pop();
        break;
    case 3:
        display();
        break;
    case 4:
        exit(0);
}
}
}
void push(int ele)
{
node *p = malloc(sizeof(node));
p->data = ele;
p->link = top;
top = p;
}
void pop()
{
node *p = top;
if(top == NULL)
printf("stack underflow");
else
{
printf("%d is deleted",top->data);
top = top -> link;
free(p);
}
}

void display()
{
node *t = top;
if(top == NULL)
printf("stack is underflow");
else
{
while(t != NULL)
{
printf("\n%d",t->data);
t = t -> link;
}
}
}


