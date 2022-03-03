#include <stdio.h>
  int main()
  {
  int a[10], n,  i, j, c, heap_root, temp;
  printf("Input number of elements: ");
  scanf("%d", &n);
  printf("\nInput array values one by one : ");
  for (i = 0; i <  n; i++)
  scanf("%d", &a[i]);
  for (i = 1; i <  n; i++)
  {
  c = i;
  do
  {
  heap_root  = (c - 1) / 2;
  if  (a[heap_root] < arr[c])
  {
  temp =  a[heap_root];
  a[heap_root] = arr[c];
  a[c]  = temp;
  }
  c =  heap_root;
  } while (c !=  0);
  }
  
  printf("Heap  array : ");
  for (i = 0; i <  no; i++)
  printf("%d\t ", a[i]);
  for (j = no - 1; j  >= 0; j--)
  {
  temp = a[0];
  a[0] = a[j];
  a[j] = temp;
  heap_root = 0;
  do
  {
  c = 2 *  heap_root + 1;
  if  ((a[c] < a[c + 1]) && c < j-1)
  c++;
  if  (a[heap_root]<a[c] && c<j)
  {
  temp =  a[heap_root];
  a[heap_root] = a[c];
  a[c]  = temp;
  }
  heap_root  = c;
  } while (c  < j);
  } 
  printf("\nSorted  array : ");
  for (i = 0; i <  n; i++)
  printf("\t%d", a[i]);
  printf("\n");
  }

