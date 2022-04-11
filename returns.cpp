#include<iostream>
using namespace std;
int cube(int n)
{
    int res;
    res=n*n*n;
    return res;
}
int main()
{
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int i=cube(n);
    cout<<"the answer is "<<i<<endl;
    return 0;
}