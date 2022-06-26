#include<iostream>
#include<unordered_map>
#include<string>

using namespace std;

int main(){
    unordered_map<char,int> m;
    int A, B, C;

    string str = "0123456789";

    for(auto ch : str){
        m[ch] = 0;
    }

    cin >> A >> B >> C;
    
    long long int result = A * B * C;

    string input_num = to_string(result);
    
    for(auto ch : input_num){
        m[ch]++;
    }

    for(auto ch : str){
        cout << m[ch] << endl;
    }

    return 0;
}