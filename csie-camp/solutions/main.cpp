#include <bits/stdc++.h>
using namespace std;
#define pb push_back
const int MAXN = 1005;

vector<int> Like[MAXN];
set<int> Activity[MAXN];
int Capacity[MAXN], MaxLimit[MAXN], n, m, c;
bitset<MAXN> vis;

bool find(int now) {
    for (auto i : Like[now]) {
        if (!vis[i]) {
            vis[i] = 1;
            if (Capacity[i] < MaxLimit[i]) {
                Capacity[i]++;
                Activity[i].insert(now);
                return true;
            } else if (Capacity[i] == MaxLimit[i]) {
                for (auto j : Activity[i]) {
                    if (find(j)) {
                        Activity[i].insert(now);
                        Activity[i].erase(j);
                        return true;
                    }
                }
            }
        }
    }
    return false;
}


int main() {
    cin.sync_with_stdio(0), cin.tie(0);
    
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		int num;
		cin >> num;
		while (num--) {
			int x;
			cin >> x;
			Like[i].pb(x);
		}
	}
	for(int i=1;i<=m;i++) cin >> MaxLimit[i];
	
	int ans = 0;
	for (int i = 1; i <= n; i++) {
		vis.reset();
		if (find(i)) ans++;
	}
	cout << ans << '\n';
}
