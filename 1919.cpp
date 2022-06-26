#include<iostream>
#include<string>
#include<unordered_map>
#include<vector>
#include<cstdlib>
using namespace std;

int main(){
    unordered_map<char ,int> m;
    unordered_map<char ,int>::iterator it;
    
    string str1,str2;
    int answer = 0;
    cin >> str1 >> str2;

    for(auto ch : str1){
        m[ch]++;
    }
    for(auto ch : str2){
        m[ch]--;
    }

    for(it = m.begin(); it != m.end(); it++){
        answer += abs(it->second);
    }
    cout << answer;
    return 0;
}