/*
cut rod problem
*/
#include <iostream>
#include <cstring>

using namespace std;

int cutRod(int arr[], int n, int dp[]){
    if(n==0) return 0;
    for(int i=1; i<=n; i++){
        if(dp[n-i]== -1){
            dp[n-i] = cutRod(arr, n-i, dp);
        }
        int curr = dp[n-i] + arr[i-1];
        dp[n] = max(dp[n], curr);
    }
    return dp[n];
}

int main(){
    int n;
    cout<<"Enter the length of the rod"<<endl;
    cin>>n;
    int arr[n];
    int dp[n+1];
    memset(dp, -1, sizeof dp);
    memset(arr, 0, sizeof arr);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int res = cutRod(arr,n,dp);
    cout<<res<<endl;
    return 0;
}
