#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    vector<int> arr;
    int n;
    cin>>n;
    for(int i=0 ;i<n; i++){
        int temp ;
        cin>>temp;
        arr.push_back(temp);
    }
    int j = n-1;
    int i = 0;
    while(i<=j){
        if(arr[i] == 1){
            if(arr[j] == 0){
                arr[j] = 1;
                arr[i] = 0;
                i++;
                j--;
            }
            else j--;
        }
        else i++;
    }
    for(int i =0; i<n; i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}
