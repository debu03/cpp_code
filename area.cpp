#include <iostream>
using namespace std;

class Square{
  private:
    double side;
  public:
    Square(double s) {
        side = s;
    }
    double area();
    double perimeter();
};

double Square::area() {
    return (double)side*side;
}

double Square::perimeter(){
    return (double)side*4;
}

int main() {
    Square s(5);
    printf("Area: %lf, Preimeter: %lf", s.area(), s.perimeter());\
    return 0;
}

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
int main()
{
    int i;
    
    number n1,n2;
    n1.add(n2);
}