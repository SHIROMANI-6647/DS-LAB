#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int top=-1,i,stack[SIZE];
void push(int ele)
{
 stack[++top]=ele;
}
int pop()
{
 return(stack[top--]);
}
int peek()
{
 return(stack[top]);
}
void display()
{
 for(i=top;i>=0;i--)
 printf("%d\n",stack[i]);
}
int main()
{
 int ch,ele;
 while(1){
 printf("1-push\n2-pop\n3-peek\n4-display\n5-exit\n");
 printf("enter your choice");
 scanf("%d",&ch);
 switch(ch)
 {
  case 1:if(top==SIZE-1)
            printf("stack over flow");
         else
         {
          printf("element to be inserted");
          scanf("%d",&ele);
          push(ele);
         }
         break;
  case 2:if(top==-1)
            printf("stack under flow");
         else
            printf("deleted element is %d",pop());
         break;
  case 3:if(top==-1)
          printf("stack under flow");
         else
          printf("top element is %d",peek());
         break;
  case 4:if(top==-1)
            printf("stack under flow");
         else
            display();
         break;
  case 5:exit(0);
  }
 }
}


