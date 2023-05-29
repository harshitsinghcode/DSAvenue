#include <iostream>
using namespace std;

int main() {
    
    int marks;
    cin>>marks;
    
    if (marks>=90){
        
       if (marks>=95){
           
           if(marks>=100){
               
              if (marks>100){
                  
                  cout<<"Error!"<<endl;
              }
              
              else {
                  
                  cout<<"Cent Percentage!"<<endl;
              }
           }
           
           else {
               cout<<"Grade S";
           }
       }
       
       else {
           
           cout<<"Grade A";
       } 
        
    }
    
    
    else if (marks>=80){
        
        cout<<"Grade B"<<endl;
    }
      else if (marks>=70){
        
        cout<<"Grade C"<<endl;
    }  else if (marks>=60){
        
        cout<<"Grade D"<<endl;
    }  else if (marks>=50){
        
        cout<<"Grade E"<<endl;
    }  else if (marks>=45){
        
        cout<<"Grade B"<<endl;
    }
    
      else {
        
        cout<<"Backlog!"<<endl;
    }
     
     return 0;
}