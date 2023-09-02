#include<iostream>
using namespace std;
class des{
    public:
        des()
        {
            cout<<"this is constrctor"<<endl;
        }
        des(char s[])
        {
            cout<<"this is the parametror"<<endl;
        }
        ~des()
        {
            cout<<"this is destructor"<<endl;
        }

};
int main()
{
    cout<<"this is the first line"<<endl;
    des d1;
    des d2("vit");
    cout<<"thsi is the last line"<<endl;
}
