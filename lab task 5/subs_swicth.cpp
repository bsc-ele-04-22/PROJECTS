#include <iostream>
using namespace std;

int main(){
    
    int daysUntilExpiration = rand() % 11;
    
cout<<"the generated number is:"<<daysUntilExpiration<<endl;
switch (daysUntilExpiration){
    case 1:
    cout<<"Your subscription will expire within a day."<<endl<<
          "Renew now and save 20%!";
    break;
    case 2:
    cout<<"your subscription will expire within a day."<<endl<<
          "Renew now and save 20%!";
    break;
    case 3:
    cout<<"Your subscription will expires in:"<< daysUntilExpiration<<" days"<<endl<<
          "Renew now and save 10%!";;
    break;
    case 4:
    cout<<"Your subscription will expires in:"<< daysUntilExpiration<<" days"<<endl<<
          "Renew now and save 10%!";;
    break;
     case 5:
    
    cout<<"Your subscription will expires in:"<< daysUntilExpiration<<" days"<<endl<<
          "Renew now and save 10%!";
    break;
    case 6:
    cout<<"Your subscription will expires in:"<< daysUntilExpiration<<" days"<<endl<<
          "Renew now and save 10%!";
    break;
    case 7:
    cout<<"Your subscription will expires in:"<< daysUntilExpiration<<" days"<<endl<<
         "Renew now and save 10%!";
    break;
    case 8:
    cout<<"Your subscription will expires in:"<< daysUntilExpiration<<" days"<<endl<<
            "Renew now and save 10%!";
    break;
    case 9:
    cout<<"Your subscription will expires in:"<< daysUntilExpiration<<" days"<<endl<<
          "Renew now and save 10%!";
    break;
    case 10:
    cout<<"You have an active subscription";
    break;
    default:;
        }
    
    }
