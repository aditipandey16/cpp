#include<iostream>
using namespace std;
int max(int a,int b)
{
    if(a>b)
    return a;
    else
    return b;
}
int main()
{
    int a,b,res;
    cout<<"Enter number 1"<<endl;
    cin>>a;
    cout<<"Enter number 2"<<endl;
    cin>>b;
    res=max(a,b);
    cout<<"The max is "<<res<<endl;
    return 0;
}