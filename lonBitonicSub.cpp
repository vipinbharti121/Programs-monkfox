/*
Longest Bitonic Subsequence
input 1: 8 [1, 11, 2, 10, 4, 5, 2, 1]
o/p :   6
input 2: 6 [4 5 3 2 1 40]
o/p :      5
sol :
*/
#include <iostream>
using namespace std;

int* lis2(int arr[], int n){
    int dp2[n];
    for(int i=0; i<n; i++){
        dp2[i] = 1;
    }
    for(int i=n-1; i>=0; i--){
        for(int j=n-1; j>i; j--){
            if(arr[j]<arr[i]){
                dp2[i] = max(dp2[i], dp2[j]+1);
            }
        }
    }
    return dp2;
}

int lis1(int arr[], int n){
    int dp1[n];
    for(int i=0; i<n; i++){
        dp1[i] = 1;
    }
    for(int i=1; i<n; i++){
        for(int j=0; j<i; j++){
            if(arr[j]<arr[i]){
                dp1[i] = max(dp1[i], dp1[j]+1);
            }
        }
    }
    int *temp = lis2(arr,n);
    for(int i=0; i<n; i++){
        dp1[i] += temp[i]-1;
    }
    int ans = dp1[0];
    for(int i=0; i<n; i++){
        if(dp1[i]>ans){
            ans = dp1[i];
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int ans = lis1(arr,n);
    cout<<"Longest bitonic subseq is : "<<ans<<endl;
    return 0;
}
