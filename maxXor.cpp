#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
/*
 * Complete the function below.
 */
int maxXor(int l, int r, int res) {
    int temp = res;
    for(int i=l; i<r+1; i++){
        for(int j=i; j<r+1; j++){
            if(temp< (i^j)){
                temp = i^j;
                //cout<<temp<<endl;
            }
        }
    }
    return temp;
}

int main() {
    int res = -9999;
    int _l;
    cin >> _l;

    int _r;
    cin >> _r;

    res = maxXor(_l, _r,res);
    cout << res;
    return 0;
}
