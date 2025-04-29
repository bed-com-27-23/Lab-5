#include <iostream>
using namespace std;

int square(){
    int length = 0;
    cout<<"Enter the length"<<endl;
    cin>>length;

    int bridth = 0;
    cout<<"Enter width: "<<endl;
    cin>>bridth;

    int sarea = bridth*length;
    cout<<"The area of square is "<< sarea<<endl;

    return sarea;
}

int rectangle(){
    int length = 0;
    cout<<"Enter the length"<<endl;
    cin>>length;

    int width= 0;
    cout<<"Enter width: "<<endl;
    cin>>width;

    int rarea = length*width;
    cout<<"The area of Reactangle is "<<rarea<<endl;
    return rarea;
}

  int triangle() {
        int base = 0;
        cout<<"Enter the base"<<endl;
        cin>>base;

        int height= 0;
        cout<<"Enter height: "<<endl;
        cin>>height;

        int tarea = 0.5*base*height;
        cout<<"The area of the Triangle is "<<tarea<<endl;
        return tarea;
    }
int main(){
    while(true){
    int choice = 0;
    cout<<"Please select the area of the shape you want to calculate: \n"
    <<"1. Square"<<"\n"
    <<"2. Rectangle \n"
    <<"3. Triangle \n"
    <<"4. Quit Program"<<endl;
    cin>>choice;

    switch(choice){
        case 1: 
        square();
        break;
        case 2: 
        rectangle();
        break;
        case 3: 
        triangle();
        break;
        case 4: 
        cout<<"Quiting the Program....";
        return 0;
        default : 
        cout<<"Invalid choice! try again ";
    }
    
}
}
