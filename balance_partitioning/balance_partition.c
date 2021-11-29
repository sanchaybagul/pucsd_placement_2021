#include<stdio.h>
#define SIZE 100

int Array(int arr[],int size)
{   
    int K=0;
    for (int i = 0; i < size; i++)
    {
        K = ((2*i)+4);
        arr[i]=K;
        printf("%d\t",arr[i]);
        K += 2;
    }

   int ind = partition(arr,size);
   printf("Index : %d",ind);
}

int partition(int arr[],int size)
{
    int sum = 0,sum1=0,sum2=0;

    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }

    if (sum%2 != 0)
    {
        printf("There can't be two subsets");
    }

    for (int i=0;i<size;i++)
    {

    }
    
    

}

int main()
{
    int N=10,arr[SIZE];
    Array(arr,N);

return 0;
}