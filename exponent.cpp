#include<iostream>
using namespace std;
int power(int a,int b)
{
    int result=1;
    for(int i=0;i<b;i++)
    {
        result=result*a;
        
    }
    return result;
}
int main()
{
    int a,b,result;
    cout<<"enter a: "<<endl;
    cin>>a;
    cout<<"enter b: "<<endl;
    cin>>b;
    result=power(a,b);
    cout<<result;
    return 0;
}