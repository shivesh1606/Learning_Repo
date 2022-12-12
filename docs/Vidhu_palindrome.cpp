//This program checks whether an integer is palindrome or not
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cout << "Enter a number : " << endl;
    cin >> n;
    int rev_n=0;
    int m=n;
    while(m)
    {
        rev_n = rev_n*10 + m%10;
        m=m/10;
    }
    if(n==rev_n)
        cout << "Palindrome" << endl;
    else
        cout << "Not Palindrome" << endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    
    int t;
    cout << "Enter the number of test cases : " << endl;
    cin >> t;
    while(t--)
        solve();
}


