#include <iostream>
#include <algorithm>
using namespace std;
struct Job{
    int startTime;
    int endTime;
    int profit;
};
bool acompare(Job lhs, Job rhs) { return lhs.endTime < rhs.endTime; }

int wjob(Job j[], int n){
    sort(j,j+n,acompare);
    int dp[n];

    for(int i=0; i<n; i++){

    }
}

int main(){
    int n;
    cin>>n;
    Job j[n];
    for(int i=0; i<n; i++){
        cin>>j[i].startTime;
        cin>>j[i].endTime;
        cin>>j[i].profit;
    }
    int ans = wjob(j,n);
    return 0;
}
