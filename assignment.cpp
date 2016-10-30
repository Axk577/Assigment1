
/*
Q8a
*/

#include <iostream>
#include <string>
using namespace std;

string reverseString(const string &word){
    if (word.length() == 1) {
        return word;
    }else{
        return reverseString(word.substr(1,word.length()-1)) + word.at(0);
    }
}

int main()
{
    string str;
    cout<<"Enter the string: ";
    cin>>str;

    cout<<"The reverse of the string is : "<<reverseString(str);
    return 0;
}
