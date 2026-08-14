#include <iostream>
#include <vector>
#include <climits>
#include <set>
using namespace std;
//left rotate the array by 1 place


vector<int> left_rotate(vector<int> &a){
    int n = a.size();
    int temp = a[0]; 
    for(int i = 1; i < n; i++){
        a[i-1] = a[i];
    }
    a[n-1] = temp;

    return a; 
}

vector<int> right_rotate(vector<int> &a){
    int n = a.size();
    int temp = a[n-1];
    for(int i = n-2; i>=0; i--){
        a[i+1] = a[i];
    }
    a[0] = temp;

    return a;
}

int main() 
{
    vector<int> arr = {1,2,3,4,5};
    vector<int> result = right_rotate(arr);
    for(int x: result){
        cout<<x<<" ";
    }
    // int result = remove(arr);
    // cout<<result;
    return 0;
}
