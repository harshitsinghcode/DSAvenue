#include <iostream>
using namespace std;

int main() {
    
    int rad;
    float volsp;
    
    cout<<"Calculation of volume of sphere:- "<<endl;
    cout<<"----------------------------------------"<<endl;
    
    cout<<"input an radius"<<endl;
    
    cin>>rad;
    
    volsp=4*(3.14*rad*rad*rad)/3;
    cout<<"Volume of the sphere is- "<<endl;
    cout<<volsp;
    
    return 0;
}