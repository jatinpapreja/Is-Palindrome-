#include<iostream>
using namespace std;
bool is_palindrome(int a[],int n)
{
    int i=0,j=n-1;
    for(i,j;i<j;i++,j--)
    {
        if(a[i]!=a[j])return false;
    }
    return true;
}
int main()
{
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    if(is_palindrome(a,n))cout<<"true";
    else cout<<"false";
}
