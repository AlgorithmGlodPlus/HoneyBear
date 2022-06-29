#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N, num;

	cin >> N;

	stack<pair<int, int>> s;
	vector<int> v;
	for (int i = 1; i <= N; i++)
	{
		cin >> num;
		pair<int, int> p = make_pair(num, i);

		while (true) {
			if (s.empty()) {
				v.push_back(0);
				break;
			}
			else if (s.top().first < p.first)s.pop();
			else {
				v.push_back(s.top().second);
				break;
			}
		}
		s.push(p);
	}
	for (auto answer : v) {
		cout << answer << " ";
	}
	return 0;
}