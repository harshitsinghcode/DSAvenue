#include <iostream>
using namespace std;

int main () {
    
    int n1,n2;
    cin>>n1>>n2;
    int n3=n1-n2;
    
    int fact1=1;
    for(int i=2;i<=n1;i++){
        
        fact1=fact1*i;
    }
    
    int fact2=1;
    for(int i=2;i<=n2;i++){
        
        fact2=fact2*i;
    }
    
    int fact3=1;
    for(int i=2;i<=n3;i++){
        
        fact3=fact3*i;
    }
    
    int combination=fact1/(fact2*fact3);
    
    cout<<combination;
    
    return 0;
}


permutation - 

n!/(n-r)!