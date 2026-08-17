Idia:

Method:

```cpp
#include <iostream>
#include <vector>
#include <climits>
#include <set>
#include <algorithm>
using namespace std;


vector<int> Intersection(vector<int> &a, vector<int> &b)
{
    int n = a.size();
    int m = b.size();
    int i = 0;
    int j = 0;
    vector<int> ans;

    while(i<n && j<m)
    {
        if(a[i]<b[j])
        {
            i++;
        }

        else if(a[i]>b[j])
        {
            j++;
        }

        else
        {
            ans.push_back(b[j]);
            i++;
            j++;
        }
    }

    return ans;
}
int main() 
{    
    vector<int> arr1 = {1,2,2,3,3,4,5,6};
    vector<int> arr2 = {2,3,3,5,6,6,7};

    vector<int>result = Intersection(arr1, arr2);

    for(int val : result){
        cout<< val <<" ";
    }

    return 0;
}

```



T.C: O(n1+n2)

S.C:O(1)
Note:S.C is O(n1+n2) in the worst case to store ans and return
