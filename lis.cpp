#include <iostream>
using namespace std;

int lis(int arr[], int n){
    int dp[n];
    for(int i=0; i<n; i++){
        dp[i] = 1;
    }
    for(int i=1; i<n; i++){
        for(int j=0; j<i; j++){
            if(arr[j]<arr[i]){
                dp[i] = max(dp[i], dp[j]+1);
            }
        }
    }
    int maxNum = 1;
    for(int i=1; i<n; i++){
        if(dp[i]>maxNum){
            maxNum = dp[i];
        }
    }
    return maxNum;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int ans = lis(arr,n);
    cout<<"LIS is : "<<ans<<endl;
    return 0;
}
