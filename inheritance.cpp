#include<iostream>
using namespace std;
class Chef
{
    public:
        void makechicken(){
            cout<<"The chef makes chicken"<<endl;
        }
        void makesalad(){
            cout<<"the chef makes salad"<<endl;
        }
        void makespecialdish(){
            cout<<"the chef makes bbq ribs"<<endl;
        }
};
class Italianchef:public Chef
{
    public:
        void makepasta()
        {
            cout<<"The chef makes pasta"<<endl;
        }
        void makespecialdish(){
            cout<<"the chef makes chicken parm"<<endl;
        }
};
int main()
{
    Chef chef;
    chef.makechicken();
    Italianchef italianchef;
    italianchef.makechicken();
    return 0;
}