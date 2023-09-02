#include <iostream>
using namespace std;
class Box {
      /* Constructor definition
      Box(double l = 2.0, double b = 2.0, double h = 2.0) {
         cout <<"Constructor called." << endl;
         length = l;
         breadth = b;
         height = h;
         // Increase every time object is created
         objectCount++;
      }*/
      public:
      void create_object(){objectCount++;}
      static int ret_count(){return objectCount;}
      void input(){
          cout<<"Enter dimensions of the box:";
          cin>>length >>breadth>>height;
          }
      void Volume() {cout<<endl<<"The volume is "<<(length * breadth * height);}
      private:
         static int objectCount;
      double length;     // Length of a box
      double breadth;    // Breadth of a box
      double height;     // Height of a box
};
// Initialize static member of class Box
int Box::objectCount;
int main() {
   cout << "Total objects: " << Box::ret_count() << endl;
   Box Box1;
   Box1.create_object();
   Box Box2;
   Box2.create_object();
   Box Box3;
   Box3.create_object();
   Box Box4;
   Box4.create_object();
   Box1.input();
   Box2.input();
   Box3.input();
Box4.input();
   Box1.Volume();
   Box2.Volume();
   Box3.Volume();
    Box4.Volume();

 

   cout << "\nTotal objects: " << Box::ret_count() << endl;
}