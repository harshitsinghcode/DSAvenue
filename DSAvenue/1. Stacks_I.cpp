#include<bits/stdc++.h>
using namespace std;

class Stack{
  
  public:
  int *arr;
  int top;
  int size;
  
  Stack(int size){
      this -> size=size;
      arr = new int[size];
      top=-1;
  }
  void push(int element){
      if(size-top>1){
          top++;
          arr[top]=element;
      }
      else{
          cout<<"Stack overflow"<<endl;
      }
          
  }
  void pop(){
      if(top>=0){
          top--;
      }
      else
      cout<<"Stack Underflow"<<endl;
  }
  int peek(){
      if(top>=0 )
      return arr[top];
      else {
          cout<<"Stack is empty"<<endl;
          return -1;
      }
  }
  bool isEmpty(){
      if(top==-1){
          return true;
      }
      else{
          return false;
      }
  }
  
    
};
int main(){
    // stack<int> s;
    
    // s.push(2);
    // s.push(3);
    
    // s.pop();
    
    // cout<<"Printing top element - "<<s.top()<<endl;
    // cout<<"Printing size of the stack - "<<s.size()<<endl;
    
    Stack ss(5);
    ss.push(22);
    ss.push(43);
    ss.push(44);
    cout<<ss.peek()<<endl;
    ss.pop();
    cout<<ss.peek()<<endl;
    ss.pop();
    cout<<ss.peek()<<endl;
    ss.pop();
    if(ss.isEmpty())
    cout<<"Stack is empty"<<endl;
    else
    cout<<"Stack is'nt empty"<<endl;
    return 0;
    
}