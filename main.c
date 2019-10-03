#include<stdio.h>
void sort(int arr[],int num)
{
    int i,temp,j;
    for(i=0;i<num;i++)
    {
        for(j=0;j<num-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }

        }
    }
    int k;
    for(k=0;k<num;k++)
    {
        printf("%d\t",arr[k]);
    }


}
int  binary(int arr[],int item,int num)
{

    int first=0;
    int last=num-1;
    while(first<=last)
    {
        int mid=(first+last)/2;
        if(arr[mid]==item)
           return mid;
        else if(item<arr[mid])
            last=mid-1;
        else
            first=mid+1;
    }
    return -1;
}
int  recursivebinary(int arr[],int first,int last,int item)
{

        if(first>last)
        {
       return -1;
        }
        int mid=(first+last)/2;
        if(arr[mid]==item)
        return mid;
        else if(item<arr[mid])
            recursivebinary(arr,first,mid-1,item);
        else
            recursivebinary(arr,mid+1,last,item);
}
void linear(int arr[],int search,int num)
{
    int i,flag;
    for(i=0;i<num;i++)
    {
        if(arr[i]==search)
     {
        flag=1;
     }
     }
if(flag==0) 
          printf("element not found\n"); 
else
         printf("the element is found at the position %d\n",flag+1);
}
int main()
{
    int i,choice,search;
    int num,item,arr[40];
    printf("The options available are::\n1)using linear search\n2)using binary search\n3)binary recursive\n4)Exit\n");
    printf("enter the number of element in array\n");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        printf("enter the element to be inserted\n");
        scanf("%d",&item);
        arr[i]=item;
    }
    printf("the search element\n");
    scanf("%d",&search);
    do
    {
        printf("enter the option\n");
        scanf("%d",&choice);.3
        switch(choice)
        {
            case 1: linear(arr,search,num);
                    break;
            case 2: sort(arr,num);
                   int pos=binary(arr,search,num);
                   if(pos!=-1)
                   {
                   printf("the element is found at %d\n",pos+1);
                   }
                   else
                   {
                   printf("the element is not found\n");
                   }
                   break;
            case 3:sort(arr,num);
                   int last=num-1;
                   int first=0;
                   int position=recursivebinary(arr,first,last,search);
                   if(position!=-1)
                   {
                   printf("the element is found at %d\n",position+1);
                   }
                   else
                   {
                   printf("the element is not found\n");
                   }
                   break;
            case 4:printf("exit\n");
                   break;
            default: printf("enter a valid option\n");
        }
    }while(choice!=4);
}
