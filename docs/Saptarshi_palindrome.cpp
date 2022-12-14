#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cout<<"Enter a number\n";
    cin>>n;
    int rev=0;
    int copy=n;
    while(copy!=0)
    {
        int d=copy%10;
        rev=rev*10+d;
        copy/=10;
    }
    if(rev==n)
        cout<<"Palindrome\n";
    else
        cout<<"Not a Palindrome\n";
}
signed main()
{
    cout<<"Enter number of testcases\n";
    int t; cin>>t; while(t--)
    solve();
}