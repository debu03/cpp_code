#include<iostream>
using namespace std;
int main()
{
    int *p;
    int i=10;
    p=&i;
    p=new int;
    cout<<"enter an integer "<<endl;
    cin>>*p;
    cout<<"*p"<<*p<<endl;
    delete p;
}