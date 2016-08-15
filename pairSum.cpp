#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n,given_num = 0;
    cin>>n>>given_num;
    int *arr = new int[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int i = 0;
    sort(arr,arr+n);
    int j = n-1,temp = 0;
    while(i<=j){
        int sum = arr[i] + arr[j];
        if(sum == given_num){
            temp = 1;
            break;
        }
        else{
            if(sum >given_num){
                j--;
            }
            else i++;
        }
    }
    if(temp == 1){
        cout<<"pair found"<<endl;
    }
    else cout<<"Not found"<<endl;
    return 0;
}
