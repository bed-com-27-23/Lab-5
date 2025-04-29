#include <iostream>

using namespace std;

int main(){
    int num1;
    
    cout<<"Enter an integer value between 5 and 10:"<<endl;
    cin>>num1;

    if(!cin>>num1){
        cout<<"Sorry, you entered an invalid number, please try again"<<endl;
    }else if(num1<5){
        cout<<"You have entered: "<<num1<<". Please enter a number between 5 and 10"<<endl;
    }else{
        cout<<"Your input value ("<<num1<<") has been accepted"<<endl;
    }
    while (num1<5);


    return 0;

    

}