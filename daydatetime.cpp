#include<iostream>
using namespace std;
class time{
    int hr,min,sec;
public:
    time(){hr=min=sec=0;}
    time(int h,int m,int s){
        hr=h;min=m;
        sec=s;
        }
    void display(){
        cout<<hr<<":"<<min<<":"<<sec;
        }
    time add(time t){
        time tmp;
        tmp.hr=hr+t.hr;
        tmp.min=min+t.min;
        tmp.sec=sec+t.sec;
        return tmp;
        }
};
int main(){
    time t1,t2(5,10,30),t3(2,5,10);
    t1=t2.add(t3);
    t1.display();
}