#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={3,2,5,8,10,1};
    // for(int i=1;i<6;i++)
    // {
    //     int k =arr[i];
    //     int j;
    //     for(j=i-1;j>=0;j--)
    //     {
    //         if(k<arr[j])
    //         {
    //             arr[j+1]=arr[j];
    //         }
    //         else
    //         {
    //             break;
    //         }
    //     }
    //     arr[j+1]=k;
    // }
    
    for(int i =1;i<6;i++)
    {
        int k =arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>k)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=k;
    }
    for(int i =0;i<6;i++)
    {
        cout<<arr[i];
    }
    return 0;
}