#include<iostream>
using namespace std;

int main () {
    
    
    int n1,n2;
    cout<<"Input two integer:-"<<endl;

    cin>>n1>>n2;

    
    int fact1=1;
    for(int i=2;i<=n1;i++){
        
        fact1=fact1*i;
    }
    
       int fact2=1;
    for(int i=2;i<=n2;i++){
        
        fact2=fact2*i;
    }
    

    
    int permutation=fact1/fact2;
    
    cout<<"Your Answer is:- "<<permutation<<endl;
 
    
    return 0;
}