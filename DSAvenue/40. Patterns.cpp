#include<bits/stdc++.h>
using namespace std;

int main () {
    
    int n;
    cout<<"Enter any no. : "<<endl;
    cin>>n;
    
    int i=1;
    int count = 1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<count;
            j=j+1;
            count = count + 1;
        }
        
        cout<<endl;
        i=i+1;
    }
    
    return 0;
}