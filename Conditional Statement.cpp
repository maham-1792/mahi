#include <bits/stdc++.h>

using namespace std;

int main()
{
    string num[10] = {"one","two","three","four","five","six","seven","eight","nine","Greater than 9"};

    int a;
    cin>>a;
    if(a>9){
        cout<< num[9]<<endl;
    }else{
        cout<<num[a-1]<<endl;
    }


    return 0;
}
