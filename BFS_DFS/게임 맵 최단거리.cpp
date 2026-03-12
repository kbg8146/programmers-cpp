#include<vector>
#include<queue>
using namespace std;

int visited[101][101];

int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
int n,m;
int r_size,c_size;
bool find;
queue<pair<int,int>> q;

bool InRange(int x, int y){
    return 0<=x && x<r_size && 0<=y && y<c_size;
}

void bfs(vector<vector<int>> maps){
    int cnt=0;
    q.push({0,0});
    visited[0][0]=1;
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for(int i=0;i<4;i++){
            int nx = x+dx[i];
            int ny = y+dy[i];
            if(InRange(nx,ny) && !visited[nx][ny]&&maps[nx][ny]==1){
                
                q.push({nx,ny});
                visited[nx][ny]=visited[x][y]+1;
                if(nx==r_size-1 && ny==c_size-1){
                    find=true;
                    return;
                }
            }
        }
    }
}

int solution(vector<vector<int> > maps)
{
    int answer = 0;
    r_size = maps.size();
    c_size = maps[0].size();
    bfs(maps);
    
    if(find) answer = visited[r_size-1][c_size-1];
    else answer = -1;
    return answer;
}