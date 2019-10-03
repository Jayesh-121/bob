#include<stdio.h>
void insertion(int arr[30],int n)
{
int i,element,hole;
 for(i=0;i<n;i++)
 {
  hole=i;
  element=arr[i];
  while(hole>0 & arr[hole-1]>element)
  {
   arr[hole]=arr[hole-1];
   hole=hole-1;
  }
  arr[hole]=element;
 }
}


int main()  
{int arr[5],n,a,k;
 printf("enter the no of elements");
 scanf("%d",&n);
 printf("enter the elements");
 for(k=0;k<n;k++) 
 {scanf("%d",&a);
  arr[k]=a; 
 }
 insertion(arr,n);
 printf("the sorted array:");
 for(k=0;k<n;k++)
 {printf("%d\t",arr[k]);
 }
}
