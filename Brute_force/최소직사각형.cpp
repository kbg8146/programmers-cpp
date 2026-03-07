#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0; int ans=0;
    int w_max_size=0; int h_max_size=0;
    for(int i=0;i<sizes.size();i++){
        sort(sizes[i].begin(),sizes[i].end());
        w_max_size=max(sizes[i][0],w_max_size);
        h_max_size=max(sizes[i][1],h_max_size);
    }
    answer=w_max_size*h_max_size;
    return answer;
}