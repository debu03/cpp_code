#include<iostream>
using namespace std;
int main()
{
    int num=0,sum,temp;
    cout<<"enter a number"<<num;
    while(num>0)
    {
        temp=num%10;
        sum=sum+temp;
        num=num/10;
    }
    cout<<sum;
    return 0;
}