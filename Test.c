#include<stdio.h>
struct queue
{
  int item;
  int priority;
}q[20],temp;
void enqueue();
void dequeue();
void display();
int front=-1,rear=-1,b,i,c,j,a;
void main()
{
  int n;
  printf("\nEnter the no of elements in queue\n");
  scanf("%d",&a);
  label:
  printf("\nEnter the choice\n1.enqueue\n2.dequeue\n3.display\n.Any no to exit\n");
  scanf("%d",&n);
  switch (n)
  {
    case 1:enqueue();
           goto label;
    case 2:dequeue();
           goto label;
    case 3:display();
           goto label;
      default:printf("\n exit");
              break;
  }
}
void enqueue(int a)
{
  if(rear==a-1)
   printf("\nQUEUE OVERFLOW\n");
  else
    {
     printf("\nEnter the priority to be pushed\n");
     scanf("%d",&b);
     printf("\nEnter the item to be pushed\n");
    scanf("%d",&c);
    if(front==-1)
        {front+=1;}
    rear+=1;
    q[rear].priority=b;
    q[rear].item=c;
     }
}
void dequeue()
{
  for(i=0;i<a;i++)
   {
    for(j=0;j<a-1;j++)
       {
         if(q[j].priority<q[j+1].priority)
         {
           temp = q[j+1];
           q[j+1] = q[j];
           q[j] = temp;
         }
       }
     }
  if(front==-1)
   { printf("\nQUEUE UNDERFLOW\n");}
  else
   {
    printf("\nThe popped element is %d\n",q[front].item);
    if(front==rear)
       {front=-1; rear=-1;}
     else
      {front+=1;} 
    }
    
}

void display()
{
 if(front == -1)
 {
  printf("\nEMPTY QUEUE\n");
 }
 else
 {
 printf("\nprio item");
 for( i = front ; i <= rear ; i++)
 printf("\n\t\t\t%d\t\t\t%d",q[i].priority,q[i].item);
 }
}

