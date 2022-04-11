#include<iostream>
using namespace std;
int main()
{
    bool ismale=true;
    bool istall=false;
    if(ismale && istall)
    {
        cout<<"yes"<<endl;
    }
    else if(ismale && !istall)
    {
        cout<<"not tall"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
    return 0;
}