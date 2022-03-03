#include<stdio.h>
	struct poly
	{
	int coeff;
	int expo;
	};
	struct  poly x1[100],x2[100],x3[100];
	int main()
{
int n1,n2,n3,i,j,k;
			printf("Enter largest degree of poly 1 :");
			scanf("%d",&n1);
for(i=0;i<=n1;i++)
{
			printf("Enter the coeff of polynomial x^%d :",i);
			scanf("%d",&x1[i].coeff);
			x1[i].expo=i;
}
printf("First polynomial :");
for(i=0;i<=n1;i++)
printf("%dX^%d+",x1[i].coeff,x1[i].expo);
printf("\n");
			printf("Enter largest degree of poly 2 :");
			scanf("%d",&n2);
for(j=1;j<=n2;j++)
{
			printf("Enter the coeff of polynomial x^%d :",j);
			scanf("%d",&x2[j].coeff);
			x2[j].expo=j;
}
printf("Second polynomial :");
for(j=0;j<=n2;j++)
printf("%dX^%d+",x2[j].coeff,x2[j].expo);
printf("\n");

if(n1>n2)
			{
			n3=n1;
			}
else
			{
			n3=n2;
			}
i=0;
j=0;
k=0;
while(i<=n1&&j<=n2)
{
if(x1[i].expo==x2[j].expo)
				{
				x3[k].coeff=x1[i].coeff+x2[j].coeff;
				x3[k].expo=x1[i].expo;
                                i++;
                                j++;
                                k++;
}
if(x1[i].expo>x2[j].expo)
{
x3[k].coeff=x1[i].coeff;
				x3[k].expo=x1[i].expo;
                                i++;
                                k++;
}
if(x2[j].expo>x1[i].expo)
{
				x3[k].coeff=x2[j].coeff;
				x3[k].expo=x2[j].expo;
                                j++;
                                k++;
}
}
while(i<n1)
{
x3[k].coeff=x1[i].coeff;
x3[k].expo=x1[i].expo;
i++;
k++;
}
while(j<n2)
{
x3[k].coeff=x2[j].coeff;
x3[k].expo=x2[j].expo;
j++;
k++;
}
printf("Result :");
for(k=0;k<=n3;k++)
{
printf("%d^%d+",x3[k].coeff,x3[k].expo);
}
printf("\n");
}
