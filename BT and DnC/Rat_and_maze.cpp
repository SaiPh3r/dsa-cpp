#include<iostream>
using namespace std;

bool issafe(int x, int y , char maze[3][3], bool visited[3][3]){
    return (x >= 0 && x < 3 && y >= 0 && y < 3 && maze[x][y] != '-' && !visited[x][y]);
}


void solve(char maze[3][3] , string s , int x  , int y , int dx  , int dy , bool visited[3][3]){
    // base case
    if(x==dx && y==dy){
        cout << s << endl;
        return ;
    }
    //up 
    if(issafe( x-1 , y ,maze ,  visited )){
        visited[x-1][y] = true;
        solve(maze , s+'u' , x-1 , y , dx , dy, visited);
        visited[x][y] = false;

    }
    //down
    if(issafe( x+1 , y ,maze , visited)){
        visited[x+1][y] = true;
        solve(maze , s+'d' , x+1 , y , dx , dy, visited);
        visited[x][y] = false;

    }
    //right
    if(issafe( x , y+1 ,maze ,  visited)){
        visited[x][y+1] = true;
        solve(maze , s+'r' , x , y+1 , dx , dy, visited);
        visited[x][y] = false;

    }
    //left
    if(issafe( x , y-1 ,maze , visited)){
        visited[x][y-1] = true;
        solve(maze , s+'l' , x , y-1 , dx , dy, visited);
        visited[x][y] = false;

    }
    
}

int main(){
    char maze[3][3] = {
    {'.', '-', '.'},
    {'.', '.', '.'},
    {'.', '-', '.'}};

    int x=0;
    int y=0;
    int dx = 2;
    int dy = 2;
    
    string s ="";

    bool visited[3][3] = {{true , false,false} , {false,false,false} , {false,false,false}};
    solve(maze , s , x , y , dx  , dy , visited);
    cout<<s<<endl;

    return 0;
}