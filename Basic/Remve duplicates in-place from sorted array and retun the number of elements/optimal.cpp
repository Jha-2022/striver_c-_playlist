#include <iostream>
#include <vector>
#include <climits>
#include <set>
using namespace std;
//Remve duplicates in-place from sorted array and retun the number of elements 
//Optimal way


int remove(vector<int> &a){
    int n = a.size();  
    int i = 0;
    for(int j = 1;j < n; j++){
        if(a[j] != a[i]){
            a[i+1] = a[j];
            i++;
        }
    }  

    return i+1;
}


int main() 
{
    vector<int> arr = {1,1,2,2,2,3,3};
    // vector<int> result = remove(arr);
    // for(int x: result){
    //     cout<<x<<" ";
    // }
    int result = remove(arr);
    cout<<result;
    return 0;
}
