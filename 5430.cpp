#include <iostream>
#include <deque>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(0);

	int T;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		deque<int> dq;
		
		string P;
		cin >> P;

		int n;
		cin >> n;

		string str;
		cin >> str;

		bool flag = true;
	
		string s = "";
		for (int i = 0; i < str.length(); i++) {
			if (isdigit(str[i])) {
				s += str[i];

			}
			else {
				if (!s.empty()) {
					if (stoi(s) == 0)continue;
					dq.push_back(stoi(s));
					s = "";
				}
			}
		}


		for (char ch : P) {
			if (ch == 'R') {
				flag = !flag;
			}
			else if (ch == 'D') {
				if (dq.empty()) {
					cout << "error" << endl;
					break;
				}
				else {
					if (flag == true) dq.pop_front();
					else
						dq.pop_back();
					
				}
			}
		}
		if (!dq.empty()) {
			cout << "[";
			while (!dq.empty()) {
				if (flag == true) {
					cout << dq.front();
					dq.pop_front();
					if (dq.size() != 0)cout << ",";
				}
				else {
					cout << dq.back();
					dq.pop_back();
					if(dq.size() != 0)cout << ",";
				}
			}
			cout << "]" << endl;
		}
	}
}