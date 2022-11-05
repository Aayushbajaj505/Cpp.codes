#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <climits>
#include <vector>
#include <stack>
#include <queue>
#include <unordered_map>
#define col 5;
#define row 5;
using namespace std;
void DFS(int n[][],int r,int c,bool visited[][])
{
    visited[r][c]=true;
    for(int k=0;k<8;k++){
        if(isSafe(n,rows,cols,visited)){
            
        }
    }
}
int count(int m[row][col]){
    bool visited[row][col];
    int count=0;
    for(int i =0;i<row;i++){
        for(int j=0;j<col;j++){
            if(m[i][j] && !visited[i][j]){
                DFS(m,i,j,visited);
                count++;
            }
        }
    }
    return count;
}
int main()
{
}