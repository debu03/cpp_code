#include<iostream>
using namespace std;
struct sample
{
    int a;
    float b;
    char c;
};
int main()
{
    struct sample *p;
    p=new struct sample;
    p->a = 10;
    p->b = 10.5;
    p->c = 'a';
    cout<<"p->a = "<<p->a<<"p->b = "<<p->b<<" p->c = "<<p->c<<endl;
    struct sample *q;
    q=new struct sample[5];
    int i;
    cout<<"enter value for 5 sample: ";
    for ( i = 0; i < 5; i++)
    {
        cin>>q[i].a>>q[i].b>>q[i].c;
    }
    for ( i = 0; i < 5; i++)
    {
        cout<<"q[i].a= "<<q[i].a<<"q[i].b = "<<q[i].b<<"q[i].c= "<<q[i].c<<endl;
    }
    delete p;
    delete q;
    
}