#include <iostream>
using namespace std;

int main() {
    
   int lg;
   int br;
   int pm;
   int ar;
   
   cout<<"Calculation of Area and Perimeter of rectangle"<<endl;
   cout<<"----------------------------------------------------"<<endl;
   
   cout<<"Input the length:- ";
   cin>>lg;
   
    cout<<"Input the breadth:- ";
   cin>>br;
   
      cout<<"The required perimeter is:- ";

   pm=2*(lg+br);
   cout<<pm<<endl;
   
   
      cout<<"The required area is:- ";

   ar=(lg*br);
   cout<<ar<<endl;
   
   
   
    
    return 0;
}