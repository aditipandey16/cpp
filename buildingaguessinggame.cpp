#include<iostream>
using namespace std;
int main()
{
    int secretnum=7;
    int guess;
    int guesscount=0;
    int guesslimit=3;
    bool outoflimit=false;
    while(secretnum!=guess && !outoflimit)
    {
        if(guesscount<guesslimit)
        {
        cout<<"Enter guess: "<<endl;
        cin>>guess;
        guesscount++;
        }
        else{
            outoflimit=true;
        }

    }
    if(outoflimit)
    {
        cout<<"You lose "<<endl;
    }
    else{
    cout<<"You win"<<endl;
    cout<<"you guessed in "<<guesscount<<" attempts"<<endl;
    }
    return 0;
}