```cpp

#include <iostream>
#include <vector>
#include <climits>
#include <set>
#include <algorithm>
using namespace std;




vector<int> Union(vector<int> & a, vector<int> & b)
{
    int n1 = a.size();
    int n2 = a.size();
    int i = 0;
    int j = 0;

    vector<int> unionArr;
    while(i<n1 && j<n2){
        if(a[i] <= b[j]){
            if(unionArr.size() == 0 || unionArr.back()!=a[i])
            {
                unionArr.push_back(a[i]);
            }

            i++;
        }

        else{
            if(unionArr.size() == 0 || unionArr.back() != b[j])
            {
                unionArr.push_back(b[j]);
            }

            j++;
        }
    }

    while(j<n2){
        if(unionArr.size() == 0 || unionArr.back() != b[j])
            {
                unionArr.push_back(b[j]);
            }

            j++;
    }

    while(i<n1){
        if(unionArr.size() == 0 || unionArr.back() != a[i])
            {
                unionArr.push_back(a[i]);
            }

            i++;
    }
    
    return unionArr;
}



int main() 
{
    vector<int> arr = {1, 2, 0, 3, 0, 4, 5, 0, 6, 7};
    int target = 5;
    
    vector<int> arr1 = {1,1,2,3,4,5};
    vector<int> arr2 = {2,3,4,4,5,6};


    vector<int>result = Union(arr1, arr2);

    for(int val : result){
        cout<< val <<" ";
    }

    return 0;
}



```
