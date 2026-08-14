#include <iostream>
#include <vector>
#include <climits>
#include <set>
using namespace std;
//Remve duplicates in-place from sorted array and retun the number of elements 
//BruteForce One


vector<int> remove(vector<int> &a){
    int n = a.size();
    set<int> st;
    for(int i=0;i<n;i++){
        st.insert(a[i]);
    }

    int index = 0;
    for(auto it:st){
        a[index] = it;
        index++;
    }

    pair <<vector<int>>,<int>> 
    return a;
}


int main() 
{
    vector<int> arr = {1,1,2,2,2,3,3};
    vector<int> result = remove(arr);
    for(int x: result){
        cout<<x<<" ";
    }
    return 0;
}
