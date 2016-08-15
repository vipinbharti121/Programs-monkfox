#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n=0,temp=-1;
    cin>>n;
    vector<int> arr1;
    vector<int> arr2(n,0);
    for(int i=0; i<n; i++){
        int nu;
        cin>>nu;
        arr1.push_back(nu);
    }
    arr2[n-1] = -1;
    for(int i=n-2; i>=0; i--){
        if(arr1[i+1]>temp){
            temp = arr1[i+1];
        }
        if(arr1[i]>temp){
            arr2[i] = -1;
        }
        else{
            arr2[i] = temp;
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr2[i]<<" ";
    }
    return 0;
}
