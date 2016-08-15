#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct Burger{
    int orderNo;
    int timeTaken;
}bur[1000],temp;

int main() {
    /* Jim And Order burger problem */
    int n=0;
    cin>>n;
    for(int i=0; i<n; i++){
        int p,q;
        cin>>p>>q;
        bur[i].orderNo = i+1;
        bur[i].timeTaken = p+q;
    }
    for(int i=0; i<n-1; i++){
        for(int j=1; j<n-i-1; j++){
            if(bur[j].timeTaken > bur[j+1].timeTaken){
                temp = bur[j];
                bur[j] = bur[j+1];
                bur[j+1] = temp;
            }
        }
    }
    for(int i=0; i<n; i++){
        cout<<bur[i].orderNo<<endl;
    }

    return 0;
}
