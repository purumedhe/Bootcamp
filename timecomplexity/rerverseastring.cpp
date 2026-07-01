#include <iostream>
using namespace std;
int main(){
    string str;
    char temp;
    str="kalyan";
    int n=str.length();
    for(int i=(n-1)/2;i>=0;i--){
        temp=str[i];
        str[i]=str[n-1-i];
        str[n-1-i]=temp;
    }
    cout<<"Reversed string is: "<<str<<endl;
    return 0;
}