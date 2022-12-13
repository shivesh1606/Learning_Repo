/*
    "The greater the difficulty, the more the glory in surmounting it."
*/

#include<bits/stdc++.h>
using namespace std;

#define int long long
#define double long double

void solve(){
    string str;
    cin>>str;
    int n = (int)str.length();
    int flag=0;
    for(int i=0; i<n/2; i++){
        if(str[i]!=str[n-i-1]){
            flag=1;
            break;
        }
    }
    if(!flag)
        cout<<str<<" is a Palindrome\n";
    else
        cout<<str<<" is not a Palindrome\n";
}

signed main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}