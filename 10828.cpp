#include<iostream>
#include<string>
#include<stack>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    int N;
    stack<int> s;
    vector<int> v;
    string str;
    int num;
    cin >> N;


    for (int i = 0; i < N; i++){
        cin >> str;
        if(str == "pop"){
            if(s.empty())v.push_back(-1);
            else{
                v.push_back(s.top());
                s.pop();
            }
        } 
        else if(str == "size"){
            v.push_back(s.size());
        }
        else if(str == "empty"){
            if(s.empty())v.push_back(1);
            else{
                v.push_back(0);
            }
        }
        else if(str == "top"){
            if(s.empty())v.push_back(-1);
            else{
                v.push_back(s.top());
            }
        }
        else{
            cin >> num;
            s.push(num);
        }
    }
    for(auto num : v){
        cout << num << endl;
    }
    return 0;
}