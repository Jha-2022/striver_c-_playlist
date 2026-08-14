#include <iostream>
#include <vector>
#include <climits>
using namespace std;
//check if the array is sorted

bool check(vector<int> a){
    int n = a.size();
    for(int i = 1;i<n;i++){
        if(a[i] >= a[i - 1])
        {

        }

        else return false;
    }

    return true;
}


int main() 
{
    vector<int> arr1 = {1,2,3,3,3,4};
    vector<int> arr2 = {1,2,1,3,4};

    cout<<check(arr2);
    return 0;
}
