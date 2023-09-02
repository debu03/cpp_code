#include<iostream>
using namespace std;
class sample{
    protected:
        int pro;
    public:
        void read(int pro){
            this->pro=pro;
        }
};
class derived:public sample{
public:
    void display()
    {
    pro=100;
    cout<<"\n In derived...pro= "<<pro;

    }
};
int main()
{
    derived obj;
}