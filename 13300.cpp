#include<iostream>
#include<string>
#include<unordered_map>
#include<vector>
using namespace std;

int main(){
    vector<vector<int>> v(2,vector<int>(7,0));
    int N, K, answer = 0;
    cin >> N >> K;

    
    for (int i = 0; i < N; i++){
        int gender, grade;
        cin >> gender >> grade;
        v[gender][grade]++;
    }
    for(vector<int> student : v){
        for (int grade = 0; grade < 7; grade++){
            if(student[grade] <= K && student[grade] > 0)answer++;
            else if (student[grade] > K && student[grade] % K == 0){
                answer = answer + (student[grade] / K);
            }
            else if (student[grade] > K && student[grade] % K != 0){
                answer = answer + (student[grade] / K) + 1;
            }
        }
        
    }
    cout << answer;
    return 0;
}