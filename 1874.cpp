#include<iostream>
#include<string>
#include<stack>
#include<deque>
using namespace std;

int main(){
    stack<int> s;
    stack<int> temp;
    deque<int> seq;
    deque<char> answer;
    ios::sync_with_stdio(false); cin.tie(NULL); 
    int N=8,num;
    cin >> N;

    for (int i = N; i > 0; i--)
    {
        s.push(i);
        cin >> num;
        seq.push_back(num);
    }
    while(!seq.empty()){
        if(temp.empty()){
            temp.push(s.top());
            s.pop();
            answer.push_back('+');
        }
        else if(s.empty() || s.top() > seq.front()){
            if(temp.top()==seq.front()){
                temp.pop();
                answer.push_back('-');
                seq.pop_front();
            }
            else{
                cout << "NO";
                return 0;
            }
        }
        else if(s.top() < seq.front()){
            temp.push(s.top());
            s.pop();
            answer.push_back('+');
        }
        else if(s.top() == seq.front()){
            s.pop();
            seq.pop_front();
            answer.push_back('+');
            answer.push_back('-');
        }
    }
    while(!answer.empty()){
        cout << answer.front() << "\n";
        answer.pop_front();
    }
    return 0;
}