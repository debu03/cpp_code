#include<iostream>
using namespace std;
int main()
{
    int num,new_num=0;
    cout<<"enter number: ";
    cin>>num;
    while(num!=0)
    {
        new_num=new_num*10+num%10;
        num=num/10;
        
    }
    cout<<new_num;
}