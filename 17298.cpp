#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;

int N;
stack<int> s;
vector<int> answer(1000001,-1);
vector<int> seq(1000001,-1);

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); 
	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> seq[i];
	
	for (int i = N - 1; i >= 0; i--)
	{
		while (!s.empty() && s.top() <= seq[i])
			s.pop();

		if (!s.empty())answer[i] = s.top();
		
        s.push(seq[i]);
	}

	for (int i = 0; i < N; i++)
		cout << answer[i] << " ";
}