```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> moveZeroes(vector<int> &a){
    int n = a.size();
    int j = -1;
    
    for(int i =0; i< n;i++){
        if(a[i] == 0){
            j = i;
            break;
        }
    }

    if(j ==- 1) return a;
    for(int i = j+1; i<n; i++){
        if(a[i] != 0){
            swap(a[i], a[j]);
            j++;
        }
    }

    return a;
}

int main() 
{
    vector<int> arr = {1, 2, 0, 3, 0, 4, 5, 0, 6, 7};

    vector<int> result = moveZeroes(arr);
    for(int x : result){
        cout<<x<<" ";
    }
    return 0;
}

```
