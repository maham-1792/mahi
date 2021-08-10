#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int n,a,b;
    cin>>a>>b;
    string num[11]= {"one","two","three","four","five","six","seven","eight","nine","even","odd"};
    for(n=a;n<=b;n++){
        if(n>9 && n%2==0)
        {
            cout<<num[9]<<endl;
        }
        else if (n>9 && n%2!=0)
        {
            cout<<num[10]<<endl;
        }
        else {
            cout<<num[n-1]<<endl;
        }
    }
    return 0;
}

