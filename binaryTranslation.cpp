
#include <iostream>
using namespace std;

int main(){
    cout<<"Enter a integer number"<<endl;
    int n;
    cin>>n;
    cout<<n^((1<<32)-1)<<endl;
    return 0;
}
