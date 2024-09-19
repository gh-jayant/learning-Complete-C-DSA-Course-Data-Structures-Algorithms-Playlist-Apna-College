#include<iostream>
using namespace std;

int main(){
    int n, i = 2;
    
   
    cout<<"Enter a number:";
    cin>>n;

    while(i<=(n-1)){
        if(n%i==0){
            cout<<"the number is non-prime";
            i++;
        }else{
            cout<<"the number is prime";
        }
        break;
    }
    return 0;
}