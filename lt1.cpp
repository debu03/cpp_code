#include <stdio.h>
#include <string.h>
struct participants_event{
    char number[4];
    char name_parti[30];
    int num_of_event;
    int Tot_fee;
    long int phone_num;
    int due;
};
int main(){
    int n;
    char str_arr[4];
    char str[30];
    scanf("%d",&n);
    struct participants_event arr[n];
    for(int i =0;i<n;i++){
        scanf("%s %s %d %d %ld",str_arr,str,&arr[i].num_of_event,&arr[i].Tot_fee,&arr[i].phone_num);
        strcpy(arr[i].number,str_arr);
        strcpy(arr[i].name_parti,str);
    }
    for(int i =0;i<n;i++){
        arr[i].due =(1000 + arr[i].num_of_event * 100) - arr[i].Tot_fee;
        printf("%s %s %d %ld\n",arr[i].number,arr[i].name_parti,arr[i].due,arr[i].phone_num);
    }
    return 0;

}