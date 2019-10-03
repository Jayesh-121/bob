#include<stdio.h>
void bubble(int arr[10],int n)
{
  int i,j,temp;
  for(i=0;i<n;i++)
  {for(j=0;j<n-1-i;j++)
   {if(arr[j]>arr[j+1])
     {temp=arr[j+1];
      arr[j+1]=arr[j];
      arr[j]=temp;
     }
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
 bubble(arr,n);
 printf("the sorted array:");
 for(k=0;k<n;k++)
 {printf("%d\t",arr[k]);
 }
}
   
