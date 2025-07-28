// very very difficult question
// lets solve using recusrion(TLE)

#include<iostream>
using namespace std;

int paintFence(int n , int k){
    // base case
    if(n==1) return k;
    if(n==2) return k + (k-1)*k;

    int ans = (k-1)*(paintFence(n-1 , k)+paintFence(n-2 , k));
    return ans;
}

int main(){
    int n = 3;
    int k = 3;
    cout<<paintFence(n , k)<<endl;
    return 0;
}