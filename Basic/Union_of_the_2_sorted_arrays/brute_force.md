Ideaion:

Method:

```cpp

#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;


vector<int> Union(vector<int> & a1, vector<int> & a2)
{
    set<int> st;
    int n1 = a1.size();
    int n2 = a2.size();
    for(int i =0; i < n1; i++){
        st.insert(a1[i]);
    }

    for(int i = 0; i < n2; i++){
        st.insert(a2[i]);
    }

    vector<int> result(st.begin(), st.end());
    return result;
}

int main() 
{

    
    vector<int> arr1 = {1,1,2,3,4,5};
    vector<int> arr2 = {2,3,4,4,5,6};


    vector<int>result = Union(arr1, arr2);

    for(int val : result){
        cout<< val <<" ";
    }

    return 0;
}


```


TC: O(n1logn + n2logn) + O(n1 + n2)

SC: O(n1+n2) + O(n1+n2)-> this second oe is just used to return the answer
