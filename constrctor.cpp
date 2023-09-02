#include<iostream>
using namespace std;
class sample{
int val;
public:
    sample()
    {
        cout<<"This is default const"<<endl;
        val=0;
    }
    sample(int v)
    {
    cout<<"this is parametrized const"<<endl;
    val=v;
    }
    sample(sample &ob)
    {
        cout<<"\nthis si copy const"<<endl;
        this->val=ob.val+1;
    }
    void display()
    {
        cout<<"val= "<<val;

    }
};
int main()
{
    cout<<"this is the first line"<<endl;
    sample s1,s2(10);
    cout<<"this is the second line"<<endl;
    s1.display();
    s2.display();
    sample s3=s2;
    s3.display();
}
