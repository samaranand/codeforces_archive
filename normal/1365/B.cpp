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
//Snippets: delta, sieve, fastexp, dfs, bfs, dijkstra, floodfill

using namespace std;

ll n;

void Input() {
	cin >> n;
}

void Solve() {
	vector<pll> a(n);
	bool p = 0, q = 0;
	for (ll i = 0; i < n; i++) cin >> a[i].f;
	for (ll i = 0; i < n; i++) {cin >> a[i].s; p |= a[i].s == 1, q |= a[i].s == 0;}
	if (p and q)cout << "Yes\n";
	else {
		bool f = 1;
		for (ll i = 0; i < n - 1; i++) f &= a[i] <= a[i + 1];
		if (f)cout << "Yes\n";
		else cout << "No\n";
	}

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