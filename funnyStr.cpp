#include <iostream>
#include <cmath>
using namespace std;

int main(){
    string str;
    string rstr = " ";
    cin>>str;
    int len = str.length();
    int j = 0;
    for(int i=len-1; i>=0; i--){
        rstr[j] = str[i];
        j++;
    }
    int flag = 1;
    j = len-1;
    for(int i=1; i<len; i++){
        if(abs(str[i] - str[i-1]) != abs(rstr[i] - rstr[i-1])){
            flag = 0;
            break;
        }
    }
    if(flag == 0) cout<<"Not Funny"<<endl;
    else cout<<"Funny"<<endl;
    return 0;
}
