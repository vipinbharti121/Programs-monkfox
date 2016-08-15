/*
Q. Check if string A is rotation of string B.
    you can use strstr() function
*/
#include <iostream>
#include <string>

using namespace std;

int main(){
    char* A, B;
    cin.getline(A,50);
    //cin.getline(B,5100);
    //char* temp = A + A;
    if(strstr(temp, B) != NULL){
        cout<<"true "<<endl;
    }
    else cout<<"false"<<endl;

    return 0;
}
