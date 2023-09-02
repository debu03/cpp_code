#include<iostream>
using namespace std;
class employee
{
    int empid;
    friend void friendOfemployee(employee &e);

};
void friendOfemployee(employee &e)
{
    e.empid=1000;
    cout<<e.empid;
}
int main()
{
    employee e1;
    friendOfemployee(e1);
    return 0;
}