#include <string>
#include <vector>
#include <deque>
#include<algorithm>
#include<iostream>
using namespace std;

int solution(vector<int> priorities, int location) {

    deque<pair<int,int>> dq;
    vector<int> check;
    for (int i = 0; i < priorities.size(); i++)
    {
        dq.push_back(make_pair(priorities[i],i)); //  우선수윈,idx
        check.push_back(priorities[i]); // 2, 1, 3, 1 
    }
    sort(check.begin(),check.end(),greater<>()); // 3 2 1,1
    int idx = 0;
    int order = 1;

    while(!dq.empty()){  
        if(dq.front().first == check[idx]){       
            if(dq.front().second == location)return order;
            else{
                dq.pop_front();
                order++;
                idx++;
            }
        }
        else{
            dq.push_back(dq.front());
            dq.pop_front();
        }
    }
}