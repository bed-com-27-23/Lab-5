#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;

int vowelsCount(const string vow);
int wordsCount(const string& wed);
string reverse(const string rev);

int main()
{
   
    ifstream file("exerciseFile.txt");
    string fileData;

    if (file.is_open()){    

    getline(file, fileData);
    file.close();

    
    cout << "Number of vowels: " << vowelsCount(fileData) << endl;

    
    cout << "Number of words: " << wordsCount(fileData) << endl;

    
    cout << "Reversed statement: " << reverse(fileData) << endl;

    }
    else{
        cout << "File not found" << endl;
        return 1;
    }
    return 0;
}


int vowelsCount(const string vow)
{
    int count = 0;
    for (int i = 0; i < vow.size(); i++)
    {
        char let = vow[i];
        if (let == 'a' || let == 'e' || let == 'i' || let == 'o' || let == 'u')
            count++;
    }
    return count;
}


int wordsCount(const string& wed){
     int count = 0;
     for (int i = 0; i < wed.size(); i++){        
         if ((wed[i] = ' ')){
               count++;
         }
     }
     return count + 1;
}


string reverse(const string rev)
{
    string result;
    for (int i = rev.size() - 1; i >= 0; i--)
        result += rev[i];
    return result;
}


