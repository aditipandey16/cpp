#include<iostream>
using namespace std;
int main()
{
    string phrase="Dayananda Sagar";
    cout<<"Giraffe Academy\n";
    cout<<"Hello"<<endl;
    cout<<phrase<<endl;
    cout<<phrase.length()<<endl;
    cout<<phrase[0]<<endl;
    phrase[0]='A';
    cout<<phrase<<endl;
    cout<<phrase.find("Sagar",0)<<endl;
    cout<<phrase.substr(8,3)<<endl;
    string phrasesub;
    phrasesub=phrase.substr(9,4);
    cout<<phrasesub<<endl;

    return 0;
}