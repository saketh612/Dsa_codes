#include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int size)
{
    if (size == 0 || size ==1)
    {
        return;
    }

    int index=0;
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < arr[index])
        {
            index = i;
        }
    }
    swap(arr[0], arr[index]);
    selection_sort(arr + 1, size - 1);
}

void bubble_sort(int arr[],int size)
{
    if(size==0 || size==1)
    {
        return;
    }
    for(int i=1;i<size;i++)
    {
        if(arr[i]<arr[i-1])
        {
            swap(arr[i],arr[i-1]);
        }
    }
    bubble_sort(arr,size-1);
}


void insertion_sort(int arr[],int size)
{
    if(size<=1)
    {
        return;
    }

    insertion_sort(arr,size-1);
    int i = arr[size-1] ;
    int j = size-2;
    while(j>=0 && arr[j]>i)
    {
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=i;
}
int main()
{
    int arr[] = {1, 6, 5, 4, 3, 2};

    //selection_sort(arr, 6);
    //bubble_sort(arr,6);
    insertion_sort(arr,6);

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i];
    }

    return 0;
}
