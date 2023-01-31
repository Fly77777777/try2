#include<bits/stdc++.h>
using namespace std;
int lunar(int year)
{
    bool flag;
    if(year%400==0) flag=1;
    else{
        if(year%4==0&&year%100!=0) flag=1;
        else flag=0; 
        }
    return flag;
}
int main()
{
    int year,month,day;
    cin>>year>>month;
        if(month<1||month>12){
        cout<<"wrong";
        return 0;
    }
    if(month!=2){
        if(month==1||month==3||month==5||month==7||month==8||month==10||month==12) day=31;
        else day=30;
    }
    else{
        if(lunar(year)==1) day=29;
        else day=28;
    }
    cout<<day;
    return 0;
}