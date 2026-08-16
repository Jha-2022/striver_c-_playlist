```cpp
#include <iostream>
#include <vector>
using namespace std;

int linearSearch(vector<int> a, int target)
{   
    int n = a.size();
    for(int i = 0;i<n;i++){
        if(a[i] == target){
            return i;
        }
    }

    return -1;   
}

int main() 
{
    vector<int> arr = {1, 2, 0, 3, 0, 4, 5, 0, 6, 7};
    int target = 5;
    cout<<linearSearch(arr, target);
    return 0;
}
```
