#include <iostream>
#include<math.h>
using namespace std;

int main () {
    
    float n,s;
    
    cout<<"Enter the no. of sides:- ";
    cin>>n;
    cout<<"Enter the length of the sides:- ";
    cin>>s;
    
    float ar;
    int Pi=3.14;
    ar=((n*(s*s))/(4.0*tan(Pi/n)));
    cout<<"THE REQUIRED AREA IS - "<<ar<<endl;
    
    return 0;
}