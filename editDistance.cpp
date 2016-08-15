#include <iostream>
using namespace std;

int editDistance(string str1, string str2, int n, int m){
    int d[n+1][m+1];
    for(int i=0; i<=n; i++){
        d[i][0] = i;
    }
    for(int i=0; i<=m; i++){
        d[0][i] = i;
    }

    if(n == 0) return m;
    else if(m == 0) return n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(str1[i] == str2[j]){
                d[i][j] = d[i-1][j-1];
            }
            else{
                int t = min(d[i-1][j],d[i][j-1]);
                d[i][j] = 1+ min(t, d[i-1][j-1]);
            }
        }
    }
    return d[n][m];
}

int main(){
    string str1,str2;
    cin>>str1>>str2;
    int n = str1.length();
    int m = str2.length();
    int ans = editDistance(str1, str2, n, m);
    cout<<ans<<endl;
    return 0;
}
