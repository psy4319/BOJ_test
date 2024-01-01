#include <bits/stdc++.h>
using namespace std;
char paper[2200][2200];

void solve(int n, int x, int y)
{
	if (n == 1)
	{
		paper[x][y] = '*';
		return;
	}
	
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (i == 1 && j == 1)
			{
				continue;
			}
			
			solve(n/3, x + i * n/3, y + j * n/3);
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		fill(paper[i], paper[i]+n, ' ');
	}
	
	solve(n, 0, 0);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << paper[i][j];
		}
		cout << '\n';
	}
	
	return 0;
}