
#include <iostream>
#include <vector>
using namespace std;
/*
Search a Key in a sorted array which has been rotated.
e.g =
    arr = [3,4,5,6,7,1,2]
    o/p = key = 1, pos = 6
*/
int main(){
    int n = 0;
    cout<<"Enter no of elements in the array"<<endl;
    cin>>n;
    vector<int> arr;
    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    /*
        t.c = logn
    */
    int high = arr.size();
    int low = 0;
    int mid = 0;
    while(low<=high){
        mid = (low+high)/2;
        if(arr[mid] > arr[mid-1] && arr[mid]>arr[mid+1]){
            cout<<"Key is : "<<arr[mid+1]<<" and position is : "<<mid+1<<endl;
            break;
        }
        else{
            if(arr[mid]>arr[mid-1]){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
    }


    /* Following algo is in t.c = O(n), space = O(1)

    int temp = 0;
    for(int i=1; i<n; i++){
        if(arr[i-1]>arr[i] && arr[i+1]>arr[i]){
            cout<<"Key is : "<<arr[i]<<" and index is : "<<i+1<<endl;
            temp = 1;
        }
    }
    if(temp != 1) cout<<"Key is not found "<<endl;

    */
    return 0;
}
