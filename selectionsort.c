#include <stdio.h>
int selectionsort(int arr[],int n)
{   int i,j,temp,min;
    for(i=0;i<n;i++)
    {   min=i;
        for(j=i+1;j<n;j++)
        {
            if (arr[j]<arr[min])
            min=j;
        }
       temp=arr[min];
       arr[min]=arr[i];
       arr[i]=temp;

    }
    printf("sorted arry");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}
int main()
{
    int arr[50],n,i;
    scanf("%d\n",&n);
    for(i=0;i<n-1;i++)
    {
        scanf("%d\n",&arr[i]);
    }
    selectionsort(arr,n);
}

