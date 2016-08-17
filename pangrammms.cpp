#include <iostream>
#include <cstring>
using namespace std;

void pangramm(string str){
    int i =0;
    int arr[26];
    memset(arr, 0, sizeof(arr));
    while(str[i] != '\0'){
        if(str[i] >=65 && str[i] <= 90){
            arr[str[i]- 65]+=1;
        }
        else if(str[i] >=97 && str[i] <= 122){
            arr[str[i] - 97] +=1;
        }
        i++;
    }
    int flag = 1;
    for(int i=0; i<=26; i++){
        if(arr[i] == 0){
            flag = 0;
            break;
        }
    }
    if(flag == 0) cout<<"Not pangram"<<endl;
    else cout<<"Pangram"<<endl;
}

int main(){
    string str;
    getline(cin, str);
    pangramm(str);
    return 0;
}
