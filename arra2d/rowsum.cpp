#include <iostream>
using namespace std;

void rowsum(int arr[][3],int row,int column){
    for(int i=0;i<row;i++){
        int sum = 0;
        for(int j = 0;j<column;j++){
            sum+=arr[i][j];
        }
        cout<<sum<<endl;
    }
}
void colsum(int arr[][3],int row , int column){
    for(int j=0; j<column;j++){
        int sum = 0;
        for(int i=0;i<row;i++){
            sum+=arr[i][j];
        }
        cout<<sum<<endl;
    }
}
int main(){
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    rowsum(arr, 3, 3);
    colsum(arr, 3, 3);
    return 0;
}