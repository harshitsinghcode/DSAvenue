#include <iostream>
using namespace std;

int main() {
    
    int rad;
    int hgt;
    float volcyl;
    
    cout<<"Calculation of volume of cylinder:- "<<endl;
    cout<<"----------------------------------------"<<endl;
    
    cout<<"input an rad value:- "<<endl;
        cin>>rad;


    cout<<"input an hgt value:- "<<endl;
    
   
    cin>>hgt;
    
    volcyl=3.14*rad*rad*hgt;
    cout<<"Volume of the cylinder is- "<<endl;
    cout<<volcyl;
    
    return 0;
}