#include<iostream>
using namespace std;

int main () {
    
    int n;
    cin>>n;
    int sum=0;
    
    for(int i=1;i<=n;i++){
        
        sum=sum+i;
        
    }
    
    cout<<"Sum of the given numbers:- "<<sum<<endl;
    
    return 0;
}