#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);                                 
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		string s;
		cin >> s;
		// the substring that we need to find is either two consecutive left or right moves (from the south)
		bool checker = false;
		for (int i = 0; i < n; i++) {
			string temp = s.substr(i, 2);
			checker |= ((temp == "RR") | (temp == "LL"));
		}
		cout << (checker ? "YES" : "NO") << '\n';
	}
	return 0;
}