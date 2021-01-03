#include<stdio.h>
#include<conio.h>

void quik_sort(int ,int);

void swap (int ,int);

int arr[]={2,5,6,3,6,8,7};

int main()
{
    int i;
  quick_sort(0,6);

  printf("sorted array:");
    for (i=0;i<7;i++)
    {
        printf("\n%d",arr[i]);
    }
}

quick_sort(int pivot,int last)
{
    int i=pivot+1,j=last;
    while(i<=j)
    {
         printf("debug:\n i:%d\tj:%d",i,j);
        if(arr[i]>arr[pivot] && i<=last)
            i++;
        if(arr[j]>arr[pivot] && j>=0)
            j--;
    }
    if(i>j)
        {
            swap(pivot,i);
            quick_sort(pivot,last=j);
            quick_sort(pivot=i,last);
        }
}
swap(int i,int j)
{
    arr[i]=arr[i]+arr[j];
    arr[j]=arr[i]-arr[j];
    arr[i]=arr[i]-arr[j];
}
