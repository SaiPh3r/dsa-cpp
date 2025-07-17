#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n=10;
    vector<int> prime(n, 1); 

    int ans=0;
    for(int i=2;i<n;i++){
        if(prime[i]==1){
            ans++;
            int j= 2*i;
            while(j<n){
                prime[j] = 0;
                j+=i;
            }
        }
    }

    cout<<"prime no: "<<ans;

    return 0;
}