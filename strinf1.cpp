#include<iostream>
using namespace std;
#include<string.h>
class demo1{​​​​​​
    char *p;
    int n;
public:
    demo1(){​​​​​​
        cout<<"Enter the size of the string:";
        cin>>n;//scanf("%d",&n);
        p = new char(n);//p=(char *)malloc(n*sizeof(char));
        cout<<"Enter the string";
        cin>>p;//scanf("%s",p);
    }​​​​​​
    demo1(demo1& ob){​​​​​​
        int i;
        n=ob.n;
        p = new char(n);
        //for(i=0;i<=n;i++)p[i] = ob.p[i];
        strcpy(p,ob.p);
    }​​​​​​
    void display(){​​​​​​cout<<"\nThe string is "<<p;}​​​​​​
    void modify(){​​​​​​
        strcpy(p,"VIT");
    }​​​​​​
    void del(){​​​​​​ delete p;}​​​​​​
}​​​​​​;
main(){​​​​​​
    demo1 d1;
    demo1 d2=d1;  // d2.p = d1.p; d2.n = d1.n;
    cout<<"Initially...\n";
    d1.display();
    d2.display();
    d1.modify();
    cout<<"\nAfter d1.modify()...";
    d1.display();
    d2.display();
    d1.del();
    d2.del();
    /*cout<<"\nAfter d1.del()....";
    d1.display();
    d2.display();*/
}​​​​​​