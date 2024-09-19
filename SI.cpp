#include<iostream>
using namespace std;

int main(){
    int p , r , t ,total, si , capital;

    cout<<"Enter principal amount:";
    cin>>p;

    cout<<"Enter rate of interset:";
    cin>>r;

    cout<<"Enter time in month:";
    cin>>t;

    total = p*r*t;

    si = total/100;
    cout<<"SI:"<<si<<endl;

    capital = si + p;
    cout<<"capital:"<<capital;

    return 0;
}