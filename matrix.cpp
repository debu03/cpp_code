int **matrix;

int m[3][4]={​​​​​​{​​​​​​10,10,10,10}​​​​​​,{​​​​​​20,20,20,20}​​​​​​,{​​​​​​30,30,30,30}​​​​​​}​​​​​​;//row major ordering
//int *p;
p= new int[10];
int *p1,*p2,*p3;
p1= new int[4];
p2= new int[4];
p3= new int[4];
int *int[3];//compile time allocation...
int **ptr;
for ( i = 0; i < 3; i++)
    ptr[i]=new int[4];
// ptr[0]=new int[4];
// prt[1]=new int[4];
// ptr[2]=new int[4];

int a[10];//CT mem alloc
int *p;
p=new int[10];//RT mem alloc

