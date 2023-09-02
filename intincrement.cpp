#include<iostream>
using namespace std;
void inscr1(int n) //pass by value
{
    n++;
}
void inscr2(int *p) //pass by referance
{
    (*p)++;
}
void inscr3(int &x) //pass by address
{
    x++;
}
int sqr(int num)
{
    return(num*num);
}
int main()
{
    int a,b,c;
    cout<<"enter integer"<<endl;
    cin>>a;
    inscr1(a); //pass by value
    cout<<"the new value is "<<a<<endl;
    cout<<"enter inetger:  "<<endl;
    cin>>b;
    inscr2(&b);
    cout<<"the new value is "<<b<<endl;
    cout<<"enter inetger"<<endl;
    cin>>c;
    inscr3(c);
    cout<<"the new value is  "<<c<<endl;
}
