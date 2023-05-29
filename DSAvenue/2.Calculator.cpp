#include<iostream>
using namespace std;

int main () {
    
    int a,b;
    cout<<"Input first Number:- "<<endl;
    cin>>a;
    cout<<"Input second Number:- "<<endl;
    cin>>b;
    
    int sum=a+b,sub=a-b,mul=a*b,div=a/b,rem=a%b;
    cout<<"Sum of the given numbers:- "<<sum<<endl;
    cout<<"Subtraction of the given numbers:- "<<sub<<endl;
    cout<<"Multiplication of the given numbers:- "<<mul<<endl;
    cout<<"Division of the given numbers:- "<<div<<endl;
    cout<<"Remainder of the given numbers:- "<<rem<<endl;
    
    return 0;
    
}