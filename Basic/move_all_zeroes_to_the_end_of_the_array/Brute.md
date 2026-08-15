```cpp

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//move all 0's to the end of the array
vector<int> moveZeroes(vector<int> &a)
{
    int n = a.size();
    vector<int> temp;
    
    //filling temporary array with non zero numbers 
    for(int i=0; i<n; i++){
        if(a[i] != 0)
        temp.push_back(a[i]);
    }

    //rewritting our original array with non zero values
    for(int i = 0; i<temp.size(); i++){
        a[i] = temp[i];
    }

    //fill the remaing array with 0's
    for(int i = temp.size(); i < n; i++){
        a[i] = 0;
    }

    return a;
}

int main() 
{
    vector<int> arr = {1, 2,0, 3,0, 4, 5,0, 6,7};
    int d = 3;
    vector<int> result = moveZeroes(arr);
    for(int x : result){
        cout<<x<<" ";
    }
    return 0;
}
```
