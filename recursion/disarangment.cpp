#include <iostream>
using namespace std;


int dis(int n){
    // base case
    if(n==1) return 0;
    if(n==2) return 1;

    int ans = (n-1)*(dis(n-1)+dis(n-2));
    return ans;

}

int main(){
    int n =4;
    cout<<dis(n)<<endl;
    return 0;
}