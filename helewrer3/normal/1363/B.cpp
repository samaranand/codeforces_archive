/*May The Force Be With Me*/
#include <bits/stdc++.h>
#include <stdio.h>
#include <ctype.h>
#pragma GCC optimize ("Ofast")
#define ll long long
#define MOD 1000000007
#define endl "\n"
#define vll vector<long long>
#define mll map<long long,long long>
#define pll pair<long long, long long>
#define all(c) c.begin(),c.end()
#define rall(c) c.rbegin(),c.rend()
#define pb push_back
#define f first
#define s second
#define inf INT_MAX
#define size_1d 10000000
#define size_2d 1000
//Snippets: delta, sieve, fastexp, dfs, bfs, dijkstra

using namespace std;

ll n;

void Input() {
}

void Solve() {
	string s;
	cin >> s;
	ll x = 0, y = 0;
	for (ll i = 0; i < s.size(); i++) {
		x += s[i] == '1';
		y += s[i] == '0';
	}
	ll ans = min(x, y);
	ll l = 0, r = 0;
	for (ll i = 0; i < s.size(); i++) {
		if (s[i] == '1')x--, l++;
		else y--, r++;
		ans = min(ans, min(l + y, r + x));
	}
	cout << ans << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ll T = 1;
	cin >> T;
	//ll t = 1;
	while (T--) {
		Input();
		//cout << "Case " << t << ": ";
		Solve();
		//t++;
	}
	return 0;
}