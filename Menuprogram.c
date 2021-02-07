/*MULTIPLE stacks implementation*/
#include<stdio.h>
#include<stdlib.h>
#define N 3
int top1=-1;
int top2=N;
int stack[N];
void push1();
void push2();
void pop1();
void pop2();
void peek1();
void peek2();
void display1();
void display2();

void push1()
{
 int n;
 if(top1+1==top2)
 {
  printf("stack overflow");
 }
 else
 { printf("enter the element for stack1:");
 scanf("%d",&n);
  top1++;
  stack[top1]=n;
 }
}

void push2()
{
 int n2;
 if(top2==top1+1)
 {
  printf("stack overflow");
 }
 else
 { printf("enter the element for stack2:");
 scanf("%d",&n2);
  top2--;
  stack[top2]=n2;
 }
}
void pop1()
{
 if(top1==-1)
 {
  printf("stack1 is Empty");
 }
 else
 {
  printf("poped element is %d ",stack[top1]);
  top1--;
 }
}
void pop2()
{
 if(top2==N)
 {
  printf("stack2 is Empty");
 }
 else
 {
  printf("poped element is %d ",stack[top2]);
  top2--;
 }
}
void peek1()
{
 if(top1==-1)
 {
  printf("stack is empty");
}
else
{
 printf("topmost element is in stack1 %d",stack[top1]);
 
}
}
void peek2()
{
 if(top2==N)
 {
  printf("stack is empty");
}
else
{
 printf("top most element is in stack2 %d ",stack[top2]);
 
}
}
void display1()
{
 int i;
 if(top1==-1)
 {
  printf("stack1 is empty ");
 }
 else
 {
  for(i=0;i<=top1;i++)
  {
   printf("%d ",stack[i]);
  }
 }
 
}
void display2()
{
 
 
 if(top2==N-1)
 {
  printf("stack1 is empty ");
 }
 else
 {
  for(int j=top2;j<=N-1;j++)
  {
   printf("%d ",stack[j]);
  }
 }
 
}
 int main()
 {
  int option;
 while(1)
 {
  printf("\nchoose option");
  printf("\n 1.push1"); 
  printf("\n 2.push2"); 
  printf("\n 3.pop1");
  printf("\n 4.pop2");
  printf("\n 5.peek1");
  printf("\n 6.peek2");
  printf("\n 7.display1");
  printf("\n 8.display2");
  printf("\n 9.Exit");
  printf("\nenter your choice:");
  scanf("%d",&option);
  switch(option)
  {
   case 1 : push1();
           break;
   case 2 : push2();
         break;
   case 3 : pop1();
           break;
           
   case 4 : pop2();
           break;
   case 5 : peek1();
            break;
   case 6 : peek2();
             break;
   case 7 : display1();
             break;
           
   case 8 : display2();
             break;
   case 9 : exit(1);
   
   default: printf("invalid choice\n");
  }
 }
 return 0;
 }
  



