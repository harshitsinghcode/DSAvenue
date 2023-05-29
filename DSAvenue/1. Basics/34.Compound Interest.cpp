#include<iostream>
#include<math.h>
using namespace std;

int main () {

float p,r,t,ci,cp;
cout<<"Enter the principle amount:- "<<endl;
cin>>p;
cout<<"Enter the principle amount:- "<<endl;
cin>>r;
cout<<"Enter the principle amount:- "<<endl;
cin>>t;

ci=p*pow((1+r/100),t)-p;
cp=p*pow((1+r/100),t);
    
    
    cout<<"The required interest is :- "<<ci<<endl;
    cout<<"The Compounded principle amount is :- "<<cp<<endl;
    
    
    
    
    







    return 0;
}