#include<bits/stdc++.h>
using namespace std;
int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    n = n*factorial(n-1);
    return n;
}

int main()
{
    int n =5;
    cout<< factorial(n);
    return 0;
}
