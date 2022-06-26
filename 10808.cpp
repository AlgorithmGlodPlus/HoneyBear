#include<iostream>
#include<unordered_map>
#include<string>

using namespace std;

int main(){
    string input = "";
    cin >> input;

    string alpha = "abcdefghijklmnopqrstuvwxyz";
    unordered_map<char,int> m;

    for(auto i : alpha){
        m[i] = 0;
    }

    for(auto i : input){
        m[i]++;
    }

    for(auto i : alpha){
        cout << m[i] << " ";
    }

    return 0;
}