#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int s, int e)
{

    int mid = (e + s) / 2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int(len1);
    int *second = new int(len2);

    // copyvalues

    int main_index = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[main_index++];
    }

    main_index = mid + 1;
    ;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[main_index++];
    }
    int index1 = 0;
    int index2 = 0;
    main_index = s;
    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[main_index++] = first[index1++];
        }
        else
        {
            arr[main_index++] = second[index2++];
        }

         while (index1 < len1)
        {
            arr[main_index++] = first[index1++];
        }

        while (index2 < len2)
        {
            arr[main_index++] = second[index2++];
        }
    }

    // merge 2 sorted
}

void mergesort(int arr[], int s, int e)
{

    // base case
    if (s >= e)
    {
        return;
    }

    int mid = (e + s) / 2;

    // sort the left side of array
    mergesort(arr, s, mid);

    mergesort(arr, mid + 1, e);

    merge(arr, s, e);
}

int main()
{
    int arr[] = {9, 6, 4, 5, 2};
    int n = 5;

    mergesort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    return 0;
}