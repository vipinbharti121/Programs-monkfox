#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    string str;
    cin>>str;
    vector<int> arr(30,0);
    int len = str.length();
    for(int i=0; i<len; i++){
        arr[(str.at(i)) - 97] += 1;
    }
    for(int i=0; i<27; i++){
        if(arr[i]%2 == 0 && arr[i] != 0){
            cout<<(char)(97+i)<<endl;
        }
    }
    return 0;

}
