#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    int max = -1, cnt = 0;
    vector<int> answer;
    for (int i = 0; i < progresses.size(); i++) {
        if (max < ceil((double)(100 - progresses[i]) / speeds[i])) {
            max = ceil((double)(100 - progresses[i]) / speeds[i]);
            if(cnt > 0) answer.push_back(cnt);
            cnt = 1;
        }
        else {
            cnt++;
        }
    }
    answer.push_back(cnt);
    return answer;
}