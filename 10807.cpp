#include<iostream>
#include<string>
#include<unordered_map>
#include<vector>
using namespace std;

int main(){
    int N;
    cin >> N;

    unordered_map<int,vector<int>> m;

    for (int i = 0; i < N; i++)
    {
        int input;
        cin >> input;
        m[input].push_back(input);
    }

    int v;
    cin >> v;

    cout << m[v].size();
    return 0;
}