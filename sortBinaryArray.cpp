
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    int n,zeroCount,oneCount = 0;
    vector<int> arr;
    cin>>n;
    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        if(temp == 0) zeroCount++;
        else oneCount++;
        arr.push_back(temp);
    }
    for(int i=0; i<n; i++){
        if(zeroCount>0){
            arr[i] = 0;
            zeroCount--;
        }
        else{
            arr[i] = 1;
            oneCount--;
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }

    return 0;

}
