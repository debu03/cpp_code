#include<iostream>
using namespace std;
class number{
    double num;
    public:
    void set_data(double);
    void incr(){num++;}
    void disp(){cout<<num;}
    void add(number ob){
        cout<<num+ob.num;
    }
    void subtract(number);
    void multiply(number);
    void divide(number);

};
int