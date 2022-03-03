#include<stdio.h>
int main()
{
int top=-1,max_size=10,stack[max_size];
int item,n;
void push(int item)
{
if(top==max_size-1)
{
printf("Stack is overflow");
}
else
{
top=top+1;
stack[top]=item;
}
}
void pop()
{
int item;
if(top==-1)
{
printf("stack is underflow\n");
}
else
{
item=stack[top];
top=top-1;
printf("\nThe element poped successfully");
}
}
void display()
{
if(top==-1)
{
printf("Stack is empty \n");
}
else
{
printf("Stack elements are :");
for(int i=top;i>=0;--i)
{
printf("%d \",stack[i]);
printf("\t");
}
printf("\n");
}
}
go:
{
printf("\nchoose option \n1.pop\n2.push\n3.Display\n");
scanf("%d",&n);
switch(n)
{
case 1:pop();
       break;
case 2:printf("Enter the item to insert :");
       scanf("%d",&item);
       push(item);
       printf("The element inserted successfully");
       break;
case 3:display();
       break;
}
}
goto go;
}
