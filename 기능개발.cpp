#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    vector<int> day;
    int time = 0;
    for (int i = 0; i < progresses.size(); i++){
        time = ((100-progresses[i]) % speeds[i] == 0) ? 
        (100-progresses[i]) / speeds[i] :
        (100-progresses[i]) / speeds[i] + 1; 
        day.push_back(time);
    }

    int Dday = day[0];
    int count = 0;
    for (auto time : day){
        if(Dday < time){
            answer.push_back(count);
            count = 1;
            Dday = time;
        }
        else{
            count++;
        }
    }
    answer.push_back(count);
    
    return answer;
}