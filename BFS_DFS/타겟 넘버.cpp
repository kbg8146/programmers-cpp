#include <string>
#include <vector>

using namespace std;

int cnt=0;
void dfs(vector<int> &numbers,int target,int idx,int ans){
    if(idx == numbers.size()){    
        if(ans == target){
            cnt++;
        }
        return;
    }
    
    dfs(numbers,target,idx+1,ans+numbers[idx]);
    dfs(numbers,target,idx+1,ans-numbers[idx]);
    
}

int solution(vector<int> numbers, int target) {
    int answer = 0;
    
    dfs(numbers,target,0,0);
    answer = cnt;
    return answer;
}