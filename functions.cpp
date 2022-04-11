#include<iostream>
using namespace std;
void print(string line);
int main()
{
    string line;
    cin>>line;
    cout<<"Top"<<endl;
    print(line);
    cout<<"Bottom"<<endl;
    return 0;
}
void print(string line)
{
    cout<<"Hi all!!!"<<endl;
    cout<<line<<endl;
}