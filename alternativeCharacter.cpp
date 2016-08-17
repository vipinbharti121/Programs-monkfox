#include <iostream>
using namespace std;

void alternate(string str){
    int n = str.length();
    int c = 0;
    for(int i=0; i<n; i++){
        if(str[i] == str[i+1]){
            c++;
        }
    }
    cout<<c<<endl;
}

int main(){
    int testCases;
    cin>>testCases;
    for(int i=0; i<testCases; i++){
        string str;
        cin>>str;
        alternate(str);
    }
    return 0;
}
