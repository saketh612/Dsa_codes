#include<bits/stdc++.h>
using namespace std;


int partition(int array[],int start,int end)
{
    int count =0;
    int pivot = array[start];
    for(int i = start+1;i<=end;i++)
    {
        if(array[i]<=pivot)
        {
            count++;
        }
    }

    int pivotindex = start+count;
    swap(array[start],array[pivotindex]);
    int i =start,j=end;
    while(i<pivotindex && j>pivotindex)
    {
        while(array[i]<=pivot)
        {
            i++;
        }

        while(array[j]>pivot)
        {
            j--;
        }

        if(i < pivotindex && j > pivotindex)
        {
            swap(array[i++],array[j--]);
        }
    }

    return pivotindex;

}




void quicksort(int array[],int start, int end)
{

    if(start>=end)
    {
        return;
    }

    int k = partition(array,start,end);

    quicksort(array,start,k-1);

    quicksort(array,k+1,end);

}




int main()
{
    int array[] = {3,5,2,6,1,10,9};
    int size = 7;
    int start =0,end =6;
    quicksort(array,start,end);
    for(int i=0;i<size;i++)
    {
        cout<<array[i]<<" ";
    }
    return 0;
}










