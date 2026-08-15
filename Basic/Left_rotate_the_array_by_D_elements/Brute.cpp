#include <iostream>
#include <vector>
#include <climits>
#include <set>
using namespace std;
//left rotate the array by D place

vector<int> left_drotate(vector<int> &a, int d){
    int n = a.size(); 
    d = d % n;
    int temp[d];
    //temporary array building
    for(int i =0 ; i < d; i++)
    {
        temp[i] = a[i];
    }

    //shifting
    for(int i = d;i<n;i++)
    {
        a[i - d] = a[i];
    }    
    //placing back temporary array into the original array
    for(int i = n - d; i <n; i++)
    {
        a[i] = temp[i - (n - d)];
    }

    return a;

}



int main() 
{
    vector<int> arr = {1, 2, 3, 4, 5, 6,7};
    int d = 3;
    vector<int> result = left_drotate(arr, d);
    for(int x : result){
        cout<<x<<" ";
    }
    return 0;
}
