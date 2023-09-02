#include<iostream>
using namespace std;
#include<string.h>
class student{
    char *s;
    int len;
public:
    void read(){
        char tmp[10];
        cout<<"Enter the string:";
        cin>>s;
        s=new char[strlen(tmp)];
        strcpy(s,tmp);
    }
    void write(){
        cout<<"\ns= "<<s;
    }
    void operator=(str ob){

    }
    void dealloc(){
        delete s;
    }
};

int main(){
    str s1,s2,s3;
    s1.read();
    s1=s2;
    s1.write();
    s2.write();
    s3.write();
    s1.dealloc;
}