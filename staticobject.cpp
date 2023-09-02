#include<iostream>
using namespace std;
class vit{
    public:
    int a,b;
    void inp(){
    cout<<"Enter a and b:";
    cin>>a>>b;
    }
    void outp(){
    cout<<"a = "<<a<<" b = "<<b<<endl;
    }
    };
static vit abc;
void function1(vit obj){
    //static vit abc;
    abc.a=1000;
    cout<<"abc.";
    abc.outp();
    cout<<"obj.";
    obj.outp();
    obj.inp();
    cout<<"obj.";
    obj.outp();
    obj.a = 100;
}
int main(){
    static vit ob1;
    function1(ob1);  // obj=ob1 => obj.a=ob1.a;obj.b=ob1.b
    cout<<"ob1.";
    ob1.outp();
    vit ob2;
    cout<<"ob2.";
    ob2.outp();
    abc.b=1000;
    cout<<"abc.";
    abc.outp();
    }