#include<bits/stdc++.h>
#define ll long long
#define ull unsigned ll
#define endl '\n'
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    vector<string> vec(n);
    map<string, int> map1;
    map<string, int> map2;

    for (int i = 0; i < n; i++) {
        string in;
        cin >> in;
        vec[i] = in;
        for (int j = 3; j <= in.size(); j++) {
            string left = in.substr(0, j);
            map1[left] = i;
            map2[left]++;
        }
        for (int j = in.size() - 3; j > 0; j--) {
            string right = in.substr(j);
            map1[right] = i;
            map2[right]++;
        }
    }

    for (int i = 0; i < m; i++) {
        string in;
        cin >> in;
        string str1, str2;
        bool good = true;
        bool has = false;

        for (int j = 2; j <= in.size() - 3; j++) {
            string left = in.substr(0, j + 1);
            string right = in.substr(j);

            if (map1.find(left) != map1.end() && map1.find(right) != map1.end()) {
                int cnt = map2[left] + map2[right];

                if (map2[left] == map2[right] && map2[right] == 1) {
                    has = true;
                    str1 = vec[map1[left]];
                    str2 = vec[map1[right]];
                } else if (cnt >= 3 && map2[left] >= 1 && map2[right] >= 1) {
                    has = true;
                    good = false;
                }
            }
        }

        if (!good) {
            cout << "ambiguous" << endl;
            continue;
        }

        if (has) {
            cout << str1 << ' ' << str2 << endl;
            continue;
        }

        good = true;
        has = false;

        for (int j = 2; j <= in.size() - 4; j++) {
            string left = in.substr(0, j + 1);
            string right = in.substr(j + 1);

            if (map1.find(left) != map1.end() && map1.find(right) != map1.end()) {
                int cnt = map2[left] + map2[right];

                if (map2[left] == map2[right] && map2[right] == 1) {
                    has = true;
                    str1 = vec[map1[left]];
                    str2 = vec[map1[right]];
                } else if (cnt >= 3 && map2[left] >= 1 && map2[right] >= 1) {
                    has = true;
                    good = false;
                }
            }
        }

        if (!good) {
            cout << "ambiguous" << endl;
            continue;
        }

        if (has) {
            cout << str1 << ' ' << str2 << endl;
        } else {
            cout << "none" << endl;
        }
    }
}

int main() {
    fast;
    int t;
    t = 1;

    while (t--) {
        solve();
    }

    return 0;
}
