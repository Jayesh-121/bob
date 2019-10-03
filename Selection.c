#include<stdio.h>
void selection(int arr[20],int n)
{int i,j,temp,min;
 for(i=0;i<n;i++)
 {min=i;
 for(j=i+1;j<n;j++)
 {if(arr[j]<arr[min])
   {min=j;
   } 
  temp=arr[i];
  arr[i]=arr[min];
  arr[min]=temp;
  }
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
 selection(arr,n);
 printf("the sorted array:\n");
 for(k=0;k<n;k++)
 {printf("%d\n",arr[k]);
 }
}
 
