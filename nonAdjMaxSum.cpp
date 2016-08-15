#include <iostream>
using namespace std;

int nonAdjMaxSum(int arr[], int n){
    int dp[n+1];
    dp[0] = 0;
    dp[1] = arr[1];
    for(int i=2; i<=n; i++){
        dp[i] = max(dp[i-2]+arr[i], dp[i-1]);
    }
    return dp[n];
}

int main(){
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=1; i<=n; i++){
        cin>>arr[i];
    }
    cout<<nonAdjMaxSum(arr,n);
    return 0;
}
