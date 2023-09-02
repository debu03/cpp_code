#include<iostream>
using namespace std;
class sample{
    public:
        static int s;
        int a;
        void init()
        {
            a=10;
        }
        void disp(int n)
        {
            s=s+10;
            cout<<"s = "<<s<<endl;
            a=a+n;
            cout<<"a = "<<a<<endl<<endl;
        }
};
int sample::s;
int main(){
    cout<<"sample::s= "<<sample::s<<"\n";
    sample::s=100;
    sample s1,s2,s3;
    s1.init();
    s1.disp(10);
    s1.disp(20);
    s1.disp(100);
    s1.init();
    s1.disp(30);
    s1.init();
    s1.disp(40);
}


//satic data member are common to class and explicitly initialize
//can be refered outside 