#include<iostream>
using namespace std;
bool ispalindrome(int n){
    int i=n;
    int rev=0;
    int a;
    while(i){
        a=i%10;
        rev=(rev*10)+a;
        i=i/10;
    }
    if(rev==n)
    return 1;
    else
    return 0;
}
int main(){
    int n;
    cin>>n;
    if(ispalindrome(n))
    cout<<"yes";
    else
    cout<<"no";
    return 0;
}
