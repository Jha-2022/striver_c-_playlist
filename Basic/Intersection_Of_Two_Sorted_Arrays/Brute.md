This code gives TLE

Idea:


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
    int n1 = a.size();
    int n2 = b.size();
    int n = min(n1,n2);
    vector<int> ans;
    vector<int> vz(n2);

    for(int i = 0; i < n1; i++){
        for(int j = 0; j < n2; j++){
            if(a[i] == b[j] && vz[j] == 0){
                ans.push_back(a[i]);
                vz[j] = 1;
                break;
            }

            if(b[j]>a[i]){break;} 
        }
    }

    return ans;
}


int main() 
{

    
    vector<int> arr1 = {1,1,2,3,4,5};
    vector<int> arr2 = {2,3,4,4,5,6};

    vector<int>result = Intersection(arr1, arr2);

    for(int val : result){
        cout<< val <<" ";
    }

    return 0;
}


```

T.C : O(n1 x n2) 
S.C : O(n2)

