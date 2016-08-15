#include <iostream>
#include <vector>
using namespace std;
/*
Given an array of sorted numbers and a value D.We have to rotate the array by D.
e.g =
    arr = [1,2,3,4,5,6,7]
    D = 2
    o/p = [3,4,5,6,7,1,2]

Time Complexity = O(dn)
Space complexity = O(1)
*/
int main(){
    int n,d= 0;
    cout<<"Enter no of elements in the array"<<endl;
    cin>>n;
    vector<int> arr;
    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    cout<<"Enter the 'value' "<<endl;
    cin>>d;
    for(int i=0; i<d; i++){
        for(int j=0; j<n-1; j++){
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}
