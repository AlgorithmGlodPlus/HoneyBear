#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int N, X,input,answer=0;
    
    cin >> N ;
    
    vector<int> v;
    for(int i = 0; i < N; i++){
        cin >> input;
        v.push_back(input);
    }
    sort(v.begin(),v.end());
    cin >> X;
    

    
    int start = 0, end = N-1;
    while (1) {
		if (start >= end) 
			break;
		int sum = v[start] + v[end];
		if (sum == X) {
			answer++;
			start++;
			end--;
		}
		else if (sum < X)
			start++;
		else
			end--;
	}
    
    
    // 1<= i < j <= n 이므로 입력받은 데이터의 순서는 바뀌면 안된다 
    cout << answer;
    return 0;
}
// set 