#include<bits/stdc++.h>
using namespace std;

int main () {
    
    int a;
    cout<<"Enter the first no. : ";
    cin>>a;
    
    int b;
    cout<<"Enter the second no. : ";
    cin>>b;
    
    char op;
    cout<<"Enter the required operator : ";
    cin>>op;
    
    switch (op){
        
        case '+' : cout<<(a + b)<<endl;
        break;
        case '-' : cout<<(a - b)<<endl;
        break;
        case '*' : cout<<(a * b)<<endl;
        break;
        case '/' : cout<<(a / b)<<endl;
        break;
        case '%' : cout<<(a % b)<<endl;
        break;
        
        default : cout<<"Please Enter the valid Operation"<<endl;
        break;
    }
    
    return 0;
    
}

