#include<iostream>
using namespace std;

int main(){
    int age;

    cout<<"Enter your age:";
    cin>>age;

    if(age>=18){
        cout<<"you can drive";
    }else{
        cout<<"you can't drive";
    }
    return 0;
}