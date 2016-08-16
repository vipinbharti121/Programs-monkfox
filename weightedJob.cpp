/*                                      Dynamic Programming
Find the max profit subset of jobs such that no two jobs in the subset overlap
and profit should be maximum.
test case :
input
    job no  : {start time, end time, profit}
    job1    : {1,2,50}
    job2    : {3,5,20}
    job3    : {6,19,100}
    job4    : {2,100,200}
output
    200
*/
#include <iostream>
#include <algorithm>
using namespace std;
struct Job{
    int startTime;
    int endTime;
    int profit;
};
bool acompare(Job lhs, Job rhs) { return lhs.endTime < rhs.endTime; }

int wjob(Job jb[], int n){
    sort(jb,jb+n,acompare); // sort the job using their end time.
    int dp[n];
    for(int i=0; i<n; i++){
        dp[i] = jb[i].profit;
    }
    for(int i=1; i<n; i++){
        for(int j=0; j<i; j++){
            if(jb[i].startTime > jb[j].endTime){
                dp[i] = max(dp[i], dp[j]+jb[i].profit);
            }
        }
    }
    int maxValue = -9999;
    for(int i=0; i<n; i++){
        if(maxValue < dp[i]){
            maxValue = dp[i];
        }
    }
    return maxValue;
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
    cout<<"Max profit is : "<<ans<<endl;
    return 0;
}
