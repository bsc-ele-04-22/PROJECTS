#include <iostream>
using namespace std;

int main (){

     cout<<"Please select an area to calculate."<<endl<<"1.Square"<<endl<<"2.rectangle"<<endl<<
    "3.Triangle"<<endl<<"4.Quit program"<<endl;
    int v;
    cin>>v;
    while (v>=5){
         cout<<"you have entered an invalid input "<<v<<", please enter a number betwen 1 and 4 to calculate."<<endl<<"1.Square"<<endl<<"2.rectangle"<<endl<<
    "3.Triangle"<<endl<<"4.Quit program"<<endl;   
    cin>>v;

    }
   
    switch(v){
        case 1:
        double a;
        double w;
        cout<<"enter length of the square"<<endl;
        cin>>a;
         w = a*a;
        cout<<"the area of the square is:"<<w<<" m"<<endl;
        break;

        case 2:
        double b,c;
        double g;
        cout<<"enter width of the rectangle"<<endl;
        cin>>b;
        cout<<"enter length of the rectangle"<<endl;
        cin>>c;
        g = b*c;
        cout<<"the area of the rectangle is:"<<g<<" m"<<endl;
        break;

        case 3:
        double h,d,e;
        cout<<"enter base of the triangle"<<endl;
        cin>>d;
        cout<<"enter height of the triangle"<<endl;
        cin>>e;
        h = 0.5*d*e;
        cout<<"the area of the triangle is:"<<h<<" m"<<endl;
        break;

        default:
        cout<<"thank you for using our program, You are exiting the program";
          
    }
    
 
}