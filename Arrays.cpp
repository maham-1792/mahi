#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,j,k;
    cin>>n;
    int arr[n];
    for( j=0 ; j<n ; j++){
        cin>>arr[j];
    }  
    for ( k=n-1 ; k>=0 ; k--){
        cout<<arr[k]<<"";
    }
    return 0;
}

