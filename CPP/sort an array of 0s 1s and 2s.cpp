#include<bits/stdc++.h>

using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a=*b;
    *b=temp;
}

void sort012(int a[], int arr_size)
{
    int l=0;
    int m=0;
    int h=arr_size-1;

    while(m<=h)
    {
        switch(a[m])
        {
            case 0: swap(&a[m++], &a[l++]);
                    break;
            case 1: m++;
                    break;
            case 2: swap(&a[h--], &a[m]);
                    break;
        
        }
    }
}

void printArray(int arr[], int arr_size) 
{ 
    int i; 
    for (i = 0; i < arr_size; i++) 
        printf("%d ", arr[i]); 
    printf("n"); 
}

int main()
{
    int arr[] = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1}; 
    int arr_size = sizeof(arr)/sizeof(arr[0]); 
    int i; 
  
    sort012(arr, arr_size); 
  
    printf("array after segregation "); 
    printArray(arr, arr_size); 
  
    return 0; 
}