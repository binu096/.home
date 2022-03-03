#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *link;
}*head;
int main()
{
int item,pos;
void infront()
{
struct node *new;
new=(struct node*) malloc(sizeof(struct node));
printf("Enter the value");
scanf("%d",&item);
new->data=item;
new->link=head;
head=new;
}
void inend()
{
struct node *new;
new=(struct node*) malloc(sizeof(struct node));
printf("\nEnter the value");
scanf("%d",&item);
struct node*ptr;
ptr=head;
while(ptr->link!=NULL)
ptr=ptr->link;
ptr->link=new;
new->data=item;
}
void inany()
{
struct node *new;
new=(struct node*) malloc(sizeof(struct node));
printf("\nEnter the value");
scanf("%d",&item);
printf("\nEnter the position");
scanf("%d",&pos);
struct node*ptr;
ptr=head;
int i=1;
new->data=item;
while(i<pos)
{
ptr=ptr->link;
i++;
}
new->link=ptr->link;
ptr->link=new;
}
void defront()
{
struct node*ptr;
if(head==NULL)
{
exit;
}
else
{
ptr=head;
head=ptr->link;
free(ptr);
}
}
void deend()
{
struct node*ptr;
struct node*ptr1;
ptr=head;
if(head->link==NULL)
{
head=NULL;
free(ptr);
}
else
{
while(ptr->link!=NULL)
{
ptr1=ptr;
ptr=ptr->link;
}
ptr1->link=NULL;
free(ptr);
}
}
void deany()
{
struct node *ptr;
struct node *ptr1;
int i=1;
ptr=head;
printf("\nEnter the position");
scanf("%d",&pos);
while(i<pos-1)
{
ptr1=ptr;
ptr=ptr->link;
i++;
}
ptr1->link=ptr->link;
//ptr=ptr1->link;
free(ptr);
}
void display()
{
struct node*ptr;
ptr=head;
while(ptr!=NULL)
{
printf("%d",ptr->data);
ptr=ptr->link;
}
}
void search()
{
struct node*ptr;
ptr=head;
int flag=0;
printf("\nEnter the element to search :");
scanf("%d",&item);
while(ptr!=NULL)
{
if(ptr->data==item)
{
printf("Found at position\n");
flag=1;
}
ptr=ptr->link;
}
if(flag==0)
{
printf("Not found\n");
}

}
int s;
while(1)
{
printf("\n1.infront\n2.inend\n3.inany\n4.display,\n5.defront\n6.deend\n7.deany\n8.search\nEnter your choice :");

scanf("%d",&s);
switch(s)
{
case 1:infront();
       break;
case 2:inend();
       break;
case 3:inany();
       break;       
case 4:display();
       break;       
case 5:defront();
       break;
case 6:deend();
       break;
case 7:deany();
       break;
case 8:search();
       break;
        
                            
}
}
}
