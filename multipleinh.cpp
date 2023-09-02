#include<iostream>
using namespace std;
class person
{
    protected:
        char name[50];
    public:
        void getdata(){
            cout<<"Enter name: ";
            cin>>name;
        }

    void display(){
        cout<<"name: "<<name<<'\n';
        }

};
class employee:public person
{
    protected:
        int eid;
        char  designation[30];
    public:
        void getinfo();
        void dis(); 
};
int main()
{

}

