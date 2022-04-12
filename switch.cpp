#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the digit: ";
    cin>>n;
    switch(n)
    {
        case 1: cout<<"Monday"<<endl;
        break;
        case 2:cout<<"Tuesday"<<endl;
        break;
        default:cout<<"Invalid"<<endl;
    }
    return 0;
}