#include<iostream>
using namespace std;
int main(){
    int arr[5]={0,1,2,3,4};
    int *p=arr;
    cout<<*p<<"\n"<<*(p++)<<"\n"<<*(p+3)<<"\n"<<p;
    return 0;
}