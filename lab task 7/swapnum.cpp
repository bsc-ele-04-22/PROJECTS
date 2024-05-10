#include <iostream>

using namespace std;

int swap();
int main (){

    int varA = 25;
    int varB = 100;
    cout<< "varA before swap:"<<varA<<endl;
     cout<< "varA before swap:"<<varB<<endl;
     swap(varA,varB);
      cout<< "varA after swap:"<<varA<<endl;
       cout<< "varA after swap:"<<varB<<endl;
}
int swap(int& a,int& b){

int temp = a;
a = b;
b = temp;
return 0;
}