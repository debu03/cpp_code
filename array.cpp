#include<iostream>
using namespace std;
int main(){
    int *p,n,i;
    cout<<"Enter the number of integers: ";
    cin>>n;
    p=new int[n];
    cout<<"enter "<<n<<"integers: ";
    for(i=0;i<n;i++)
        cin>>p[i];
    for(i=0;i<n;i++)
        cout<<p[i]<<" ";
    delete p;
}