#include <iostream>
using namespace std;

int main () {
    
    int p,r,t;
    cout<<"Enter the Principle amount:- "<<endl;
    cin>>p;
    cout<<"Enter the Rate of interest:- "<<endl;
    cin>>r;
    cout<<"Enter the time duration:- "<<endl;
    cin>>t;
    
    int si;
    
    si=(p*r*t)/100;
    
    cout<<"Simple Interest is - "<<si<<endl;
    
    return 0;
    
    
}