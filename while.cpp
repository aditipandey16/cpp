#include<iostream>
using namespace std;
int main()
{
    int index=1;
    int b=6;
    while(index<=5)
    {
        cout<<index<<endl;
        index++;
    }
    
    do{
        cout<<b<<endl;
        b--;
    }
    while(b>=0);
    return 0;
}