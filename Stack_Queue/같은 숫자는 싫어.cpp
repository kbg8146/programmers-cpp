#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    int last=arr[0];
    answer.push_back(last);
    int cnt=0;
    for(int i=1;i<arr.size();i++){
        if(last==arr[i]){
            continue;
        }
        else{
            answer.push_back(arr[i]);
        }
        last = arr[i];
    }

    return answer;
}