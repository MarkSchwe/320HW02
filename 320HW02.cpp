#include <iostream>
#include <string>
using namespace std;


bool isPal(string str, int a, int b){
if(a == b || a+1 == b){
if(a+1 == b && str[a] == str[b]){
    cout << "It is a palindrome" << endl;
return true;
} 
if(a==b && str[a] == str[b]){
    cout << "It is a palindrome" << endl;
    return true;
}    
}
if(str[a] == str[b]){
    return isPal(str,a+1,b-1);
}
cout << "It is not a palindrome" << endl;
return false;
}

int main(){
string str;
cout << "Input string: ";
cin >> str;
isPal(str,0,str.size()-1);
    return 0;
}
