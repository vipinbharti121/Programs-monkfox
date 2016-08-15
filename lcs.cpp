#include <iostream>
using namespace std;

int lcs(string str1, string str2, int n, int m){
    int dp[n+1][m+1];
    for(int i=0; i<=n; i++){
        dp[i][0] = 0;
    }
    for(int i=0; i<=m; i++){
        dp[0][i] = 0;
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(str1[i] == str2[j]){
                dp[i][j] = 1+ dp[i-1][j-1];
            }
            else{
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }
    return dp[n][m];
}

int main(){
    string str1,str2;
    cin>>str1>>str2;
    int n = str1.length();
    int m = str2.length();
    int ans = lcs(str1, str2, n, m);
    cout<<ans<<endl;
    return 0;
}

