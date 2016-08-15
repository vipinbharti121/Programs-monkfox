#include <iostream>
using namespace std;
int nm = 20;
int msizeSqr(int arr[][nm], int n, int m){

}

int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][nm];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    int ans = msizeSqr(arr, n, m);
    cout<<ans<<endl;
    return 0;
}
