#include<iostream>
using namespace std;
int main()
{
    int arr[20]={11,22,45,7,23,42};
    cout<<arr[0]<<endl;
    arr[0]=44;
    cout<<arr[0]<<endl;
    arr[10]=3;
    cout<<arr[10]<<endl;
    return 0;
}