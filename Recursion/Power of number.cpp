#include<bits/stdc++.h>
using namespace std;

int power(int x, int exponent)
{
    if(exponent==0)
    {
        return 1;
    }
    if(exponent==1)
    {
        return x;
    }
    int ans = power(x,exponent/2);
    if(exponent%2==0)
    {
        return ans*ans;
    }
    else
    {
        return x*ans*ans;
    }
}


int main()
{
    int x =2;
    int exponent = 10;
    int result = power(x,exponent);
    cout<<result;
    return 0;
}