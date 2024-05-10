#include <iostream>
using namespace std;

int main(){
    int a,i;
    i=0;
    cout<<"enter an integer value between 5 and 10: "<<endl;
    cin>>a;
    
    
    while (a < 6 && a <=10) {
         if(i == 0){
        cout<<"Sorry,you have entered an invalid number,please try again."<<endl;
         cin>>a;
        } else {
        cout<<"You entered:"<<a<<", please enter a number between 5 and 10."<<endl;
         cin>>a;}
        i++;
      
    }
    cout<<"your input "<<a<<" has been accepted";
    }
    