#include<bits/stdc++.h>
using namespace std;
bool ifsorted(int *arr,int size)
{
    if(size==0||size==1)
    {
        return true;
    }
   if(arr[0]>arr[1])
   {
    return false;
   }
   else
   {
   bool final = ifsorted(arr+1,size-1);
   return final;
   }
}

int arraysum(int *arr,int size)
{
    if(size==0)
    {
        return 0;
    }
    if(size ==1)
    {
        return arr[0];
    }
    int remaining = arraysum(arr+1,size-1);
    int sum = remaining+arr[0];
    return sum;
}

int arraysum1(int *arr,int size)
{
    if(size==0)
    {
        return 0;
    }
    int sum = arr[size-1]+arraysum1(arr,size-1);
    return sum;
}

int main()
{
    int arr[]={2,4,9,9,9};
    int n=5;
    ifsorted(arr,5);
    if(ifsorted)
    {
        cout<<"its sorted";
    }
    else
    {
        cout<<"nope";
    }
    cout << arraysum(arr,5);
    cout << arraysum1(arr,5);
    return 0;
}

