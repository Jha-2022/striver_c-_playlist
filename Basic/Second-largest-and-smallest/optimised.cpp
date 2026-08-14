
#include <iostream>
#include <vector>
#include <climits>
using namespace std;


int secondLargest(vector<int> &a, int n){
    int largest = a[0];
    int slargest = INT_MIN;
    for(int i=1; i<n; i++){
        if(a[i]>largest){
            slargest = largest;
            largest = a[i];
        }

        else if(a[i] < largest && a[i] > slargest){
            slargest = a[i];
        }
    }

    return slargest; 
}


int secondSmallest(vector<int> &a, int n){
    int smallest = a[0];
    int ssmallest = INT_MAX;
    for(int i =1; i < n; i++){
        if(a[i] < smallest){
            ssmallest = smallest;
            smallest = a[i]; 
        }

        else if(a[i] != smallest && a[i] < ssmallest){
            ssmallest = a[i];
        }
    }

    return ssmallest;
}

vector<int> search(vector<int> a){
    int n = a.size();
    int slargest = secondLargest(a, n);
    int ssmallest =  secondSmallest(a, n);
    return {slargest, ssmallest}; 
}

int main() 
{
    vector<int> arr = {10, 5, 20, 8, 15};
    vector<int> result = search(arr);
    for(int x :result ){
        cout<<x<<" ";
    }
    return 0;
}

