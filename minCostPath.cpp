/*                                      Dynamic Programming
Given a n*m matrix with non negative numbers. find a path from top left to bottom right which minimize the sum of all
Numbers. You can only traverse down, right and diagonally.

*/
#include <iostream>
#include <cstring>
using namespace std;
int n,m;
int minCostPath(int arr[][], int n, int m){
    int dp[n][m];
    memset(dp, 1, sizeof(int)*n*m);
}

int main(){
    cout<<"Enter no of rows and cols"<<endl;
    cin>>n>>m;
    int arr[][];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    int ans = minCostPath(arr,n,m);
    cout<<ans<<endl;
    return 0;
}
