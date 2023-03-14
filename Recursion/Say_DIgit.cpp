#include<bits/stdc++.h>
using namespace std;

void say_my_name(int digit,string arr[])
{
    if(digit==0)
    {
        return;
    }

    say_my_name(digit/10,arr);
    int index = digit%10;
    cout<<arr[index];
}




int main()
{
    int n;
    cin>>n;
    string arr[]={"zero","one","two","three","four","five","six","seven","eight","nine","ten"};
    say_my_name(n,arr);
    return 0;
}