#include <iostream>
#include <vector>
using namespace std;
// using sieve to determine no of primes till n

vector<int> sieve(int n){
    vector <int> arr(n+1,1);
    // sbse pehle 2 ke multiple ko 0 krde
    int j=2;
    for(int i=2;i<n;i++){
        if(arr[i]==1){
            j = i*2;
            while(j<=n){
                arr[j]=0;
                j+=i;
            }
        }
        
    }
        return arr;
}

int main(){
    int n=25;
    vector<int> primes = sieve(n);
    for (int i = 2; i < primes.size(); ++i) {
        if(primes[i]==1){
            cout << i<< " ";
        }
        
    }
    cout << endl;

    return 0;
}