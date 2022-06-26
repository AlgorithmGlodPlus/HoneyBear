#include<iostream>
#include<string>
#include<stack>
#include<algorithm>


using namespace std;

int main(){
    int N,num,answer=0;
    stack<int> s;
    cin >> N;


    for (int i = 0; i < N; i++){
        cin >> num;
        if(num == 0)s.pop();
        else{
            s.push(num);
        }
    }
    while(!s.empty()){
        answer += s.top();
        s.pop();
    }
    cout << answer;
    return 0;
}