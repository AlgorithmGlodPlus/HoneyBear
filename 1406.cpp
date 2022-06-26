// string 은 띄어씌기 입력은 안된다
#include<iostream>
#include<string>
#include<stack>
#include<algorithm>

using namespace std;

int main(){
    stack<char> s1;
    stack<char> s2;

    string str,answer="";
    cin >> str;

    int count;
    cin >> count;

    for(auto ch : str){
        s1.push(ch);
    }
    for (int i = 0; i < count; i++){
        char input;
        cin >> input;

        if(input == 'L'){
            if(s1.empty())continue;
            s2.push(s1.top());
            s1.pop();
        }
        else if(input == 'D'){
            if(s2.empty())continue;
            s1.push(s2.top());
            s2.pop();
        }
        else if(input == 'B'){
            if(s1.empty())continue;
            s1.pop();
        }
        else if(input == 'P'){
            cin >> input;
            s1.push(input);
        }
    }

    while(!s2.empty()){
        s1.push(s2.top());
        s2.pop();
    }
    while(!s1.empty()){
        answer+=s1.top();
        s1.pop();
    }
    reverse(answer.begin(),answer.end());
    cout << answer;
    return 0;
}