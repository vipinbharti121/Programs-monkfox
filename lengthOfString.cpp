#include <iostream>
#include <string>
#include <vector>
using namespace std;
/*
Length of a string
*/
void reverseString(string str){
    int len = str.length();
    int i = 0, j = len-1;
    for(i=0; i<len/2; i++){
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        j--;
    }
    cout<<str<<endl;
}

int main(){
    string str;
    int count, i = 0;
    cin>>str;
    while(str[i] != '\0'){
        count++;
        i++;
    }
    //cout<<count<<endl;
    reverseString(str);
    return 0;
}
