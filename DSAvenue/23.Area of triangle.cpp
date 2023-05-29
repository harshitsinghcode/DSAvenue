#include<iostream>
#include<math.h>
using namespace std;

int main () {
    
    float a,b,c,s;



    cout<<"Enter a ";
    cin>>a;
    cout<<"Enter b ";
        cin>>b;

    cout<<"Enter c ";
        cin>>c;

    

   s=(a+b+c)/2;
    
    float ar;
    
    ar=sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"The required area is - "<<ar<<endl;
    return 0;
}