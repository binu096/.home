#include<stdio.h>
int main()
{
int a[20],i,n,s,l,h,pos,m;
printf("Enter the limt :");
scanf("%d",&n);
printf("\nEnter the elements :");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}	
printf("\nEnter the element to search :");
scanf("%d",&s);
l=0;
h=n-1;
m=(l+h)/2;
while(l<=h)
{
if(a[m]<s)
l=m+1;
else if(a[m]==s)
{
pos=m+1;
printf("\nThe element is found at loaction : %d",pos);
break;
}
else
h=m-1;
m=(l+h)/2;
}
if(l>h)
{
printf("\nThe element is not found !!!!");
return 0;
}
}
