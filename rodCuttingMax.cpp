#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        int t;
        cin>>t;
        arr.push_back(t);
    }

    return 0;
}
