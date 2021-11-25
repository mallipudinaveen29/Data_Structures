#include <stdio.h>
int insertsort(int arr[],int n)
{   int i,j,temp;
    for(i=1;i<n;i++)
    {
        temp=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j--;

            
        }
        arr[i]=temp;

    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
}
int main()
{
    int arr[50],n,i;
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d\n",&arr[i]);
    }
    insertsort(arr,n);
}

