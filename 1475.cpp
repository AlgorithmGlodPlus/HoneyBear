#include<iostream>
#include<unordered_map>
#include<string>

using namespace std;

int main(){
    
    string num = "0123456789";
    unordered_map<char,int> m;
    
    for(auto ch : num){
        m[ch] = 0;
    }
    
    int input;
    cin >> input;
    string str = to_string(input);
    
    for(auto ch : str){
        m[ch]++;
    }

    int best = 0;  
  
    for(auto ch : num){
        if(m[ch] > best && ch != '6' && ch != '9'){
            best = m[ch];
        } 
    }

    cout << max(best,(m['6']+m['9']+1)/2) << endl;
    
    return 0;
}