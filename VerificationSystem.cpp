#include <iostream>
using namespace std;



class MyClass{
    public:
    string login;
    string password;

};
    
int main(){

    MyClass obj[]={{login:"admin",password:"123"},{login:"strator", password:"456"}};
        string user1;
        cin>>user1;
        string user2;
        cin>>user2;
        bool truth=false;
        for(int i=0;i<2;i++){
            if(user1==obj[i].login && user2==obj[i].password){
                        truth=true;
                        break;
                    }
                    
        
        }
        if(truth){
            cout<<"succesful";
        }
        else{
            cout<<"error";
        }
        
        
   return 0; 
    }
   
