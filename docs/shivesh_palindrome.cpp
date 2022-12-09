#include<bits/stdc++.h>
using namespace std;
// Hi
int main()
{
    int a;
    cin>>a;
    int b=0;
    while(a)
    {
        b=b*10+a%10;
        a=a/10;
    }
    cout<<b<<"\n";
}