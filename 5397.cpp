#include<iostream>
#include<string>
#include<stack>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    stack<char> s1;
    stack<char> s2;
    vector<string> v;
    

    int count;
    cin >> count;

    
    for (int i = 0; i < count; i++){
        string str,answer="";
        cin >> str;
    
        for(auto ch : str){
            if(ch == '<'){
                if(s1.empty())continue;
                s2.push(s1.top());
                s1.pop();
            }
            else if(ch == '>'){
                if(s2.empty())continue;
                s1.push(s2.top());
                s2.pop();
            }
            else if(ch == '-'){
                if(s1.empty())continue;
                s1.pop();
            }
            else{
                s1.push(ch);
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
        
        v.push_back(answer);
        while(!s1.empty())s1.pop();
        while(!s2.empty())s2.pop();
    }

    for(auto str : v){
        cout << str << endl;
    }
    return 0;
}