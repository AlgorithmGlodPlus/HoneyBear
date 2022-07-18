#include <iostream>
#include <algorithm>
using namespace std;

int y, x;
int graph[500][500];
int mx[4] = {1,0,-1,0};
int my[4] = {0,1,0,-1};
int maxWidth,width;
bool visited[500][500] = {false};
void dfs(int point_y, int point_x) {
	visited[point_y][point_x] = true;
	width++;
	for (int i = 0; i < 4; i++) {
		int dx = point_x + mx[i];
		int dy = point_y + my[i];
		if (visited[dy][dx]) continue;
		if (dy >= 0 && dy < y && dx >= 0 && dx < x && graph[dy][dx] == 1) {
			dfs(dy, dx);
		}

	}

}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	cin >> y >> x;
	
	for (int i = 0; i < y; i++) {
		for (int j = 0; j < x; j++) {
			cin >> graph[i][j];
		}
	}
	
	int cnt = 0;
	
	for (int i = 0; i < y; i++) {
		for (int j = 0; j < x; j++) {
			if (!visited[i][j] && graph[i][j] == 1) {
				cnt++;
				width = 0;
				dfs(i, j);
				maxWidth = max(maxWidth, width);
			}
		}
	}
	cout << cnt << '\n' << maxWidth;
	return 0;
}