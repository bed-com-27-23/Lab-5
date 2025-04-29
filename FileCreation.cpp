#include <iostream>
#include <fstream>
using namespace std;

int main(){
    //create and open file
    ofstream Myfile("Hello.txt");
    //close the file
    Myfile.close();

    return 0;
}