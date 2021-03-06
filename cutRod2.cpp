#include <iostream>
#include <cstring>

using namespace std;

int cutRod(int arr[], int n){
    int maxvalue = 0;
    if(n==0) return 0;
    for(int i=1; i<=n; i++){
        int curr = arr[i-1] + cutRod(arr,n-i);
        maxvalue = max(maxvalue,curr);
    }
    return maxvalue;
}

int main(){
    int n;
    cout<<"Enter the length of the rod"<<endl;
    cin>>n;
    int arr[n];
    memset(arr, 0, sizeof arr);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int res = cutRod(arr,n);
    cout<<res<<endl;
    return 0;
}

