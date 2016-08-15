#include <iostream>
using namespace std;

int dp[100] = {-1};

int coinChange(int arr[], int n, int dp[]){
    if(n==0) return 0;
    for(int i=1; i<n; i++){

    }
    return 0;
}

int main(){
    int n;
    cout<<"Enter the total no of coins"<<endl;
    cin>>n;
    int arr[n];
    int dp[n+1];
    memset(dp, -1, sizeof dp);
    memset(arr, 0, sizeof arr);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int res = coinChange(arr, n, dp);
    cout<<res<<endl;
    return 0;
}
