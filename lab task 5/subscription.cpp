#include <iostream>
#include <ctime> // for time function
#include <cstdlib> // for rand and srand functions
using namespace std;

int main(){
// 1. Generate a random integers btwn 0 and 11
srand(time(0));
int daysUntilExpiration = rand() % 11;
cout<<"the generated number is:"<<daysUntilExpiration<<endl;
if (daysUntilExpiration == 10){
   cout<<"You have an active subscription"<<endl;
   }
   else {
        if (daysUntilExpiration > 5 && daysUntilExpiration  <= 10 ){
    cout<<"Your subscription will expire soon. Renew !"<<endl;
            } else{
             if (daysUntilExpiration > 2 && daysUntilExpiration <= 5){
                  cout<<"Your subscription will expires in:"<< daysUntilExpiration<<" days"<<endl<<
                          "Renew now and save 10%!";
                           } else{
                            if (daysUntilExpiration <= 2)
                            cout<<"Your subscription will expires within aday"<<endl<<
                            "Renew now and save 20%!";
                                 }

}
}

}