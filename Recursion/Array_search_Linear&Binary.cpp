#include <bits/stdc++.h>
using namespace std;

bool linearsearch(int arr[], int size, int key)
{
    if (size == 0)
    {
        return false;
    }
    if (arr[0] == key)
    {
        return true;
    }
    else
    {
        bool rest = linearsearch(arr + 1, size - 1, key);

        return rest;
    }
}

bool binarysearch(int arr[],int left,int right,int key)
{
    if(left>right)
    {
        return false;
    }
     int  mid = left + (right-left)/2;
    if(arr[mid]==key)
    {
        return true;
    }

    if(arr[mid]<key)
    {
     binarysearch(arr,mid+1,right,key);
    }
    else
    {
     binarysearch(arr,left,mid-1,key);
    }
}

int main()
{
    int arr[] = {2, 4, 6, 7, 8, 9};
    int n = 6;
    int key = 7;
    bool check = linearsearch(arr, n, key);
    int left = 0;
    int right = 5;
    bool check1 = binarysearch(arr,0,5,key);
    if (check)
    {
        cout << "found";
    }
    return 0;
}