#include<iostream>
#include<string>
#include<unordered_map>
#include<vector>
using namespace std;

int main(){
    unordered_map<char,int> m;
    vector<string> v;
    int N;
    cin >> N;

    for (int i = 0; i < N; i++){
        string str1, str2;
        cin >> str1 >> str2;
        if(str1.size()!= str2.size()){
            v.push_back("Impossible");
            continue;
        }

        for(auto ch : str1){
            m[ch]++;
        }
        for(auto ch : str2){
            if(m[ch]>1)m[ch]--;
            else{
                m.erase(ch);
            }
        }
        if(m.empty())v.push_back("Possible");
        else{
            v.push_back("Impossible");
        }
        m.clear();
    }
    
    for(auto str : v){
        cout << str << endl;
    }

    return 0;
}