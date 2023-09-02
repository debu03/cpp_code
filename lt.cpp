#include <iostream>
using namespace std;
class person_details{
    string name_person;
    int date,month,year;
public:
    void read_details(){
        cin>>name_person;
        cin>>date>>month>>year;
    }
    bool operator >(person_details &var){
        person_details var1;
        var1.date = date; var1.month=month; var1.year=year;
        if(var1.year<var.year)
            return 1;
        else if(var1.year>var.year)
            return 0;
        else {
            if(var1.month<var.month)
                return 1;
            else if(var1.month>var.month)
                return 0;
            else{
                if(var1.date<= var.date)
                    return 1;
                else
                    return 0;

            }
        }
    }
    void display_details(){
        cout<<name_person<<endl;
    }
};
int main()
{
    person_details arr[5];
    for(int i =0;i<5;i++)
        arr[i].read_details();
    for(int i =0;i<5;i++){
        for(int j =1;j<5;j++){
            if((arr[j])>(arr[i])){
                person_details t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }
    arr[0].display_details();
    return 0;
}