#ifdef INCLUDED_MAIN

struct Solution {
    stringstream out; const static bool kReadTestCases = 1;

    inline void Solve() {
        
    }

    Solution() {}
    inline void Run() {
        out << fixed << setprecision(20);
        int num_test_cases = 1;
        if (kReadTestCases) cin >> num_test_cases;
        FOR(test_case, num_test_cases) Solve();
    }
};

int32_t main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    Solution().Run();
}


#else

/*****    Template area    *****/
#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <algorithm>
#include <functional>
#include <cmath>
#include <numeric>
#include <limits>
#include <iterator>
#include <cassert>
#include <stack>
#include <queue>
#include <deque>
#include <random>
#include <sstream>
#include <chrono>
#include <stdexcept>
#include <set>
#include <map>

using namespace std;
using ll = long long;
using vi = vector<int>;

#define GET_MACRO(_1, _2, _3, NAME, ...) NAME
#define FOR(...) GET_MACRO(__VA_ARGS__, _FOR3, _FOR2)(__VA_ARGS__)
#define _FOR2(i, n) for (int i = 0; i < (n); i++)
#define _FOR3(i, a, b) for (int i = (a); i < (b); i++)
#define endl '\n'

#define rep(i, n) for (int i = 0; i < (n); ++i)
#define all(x) (x).begin(), (x).end()
#define ssort(v) sort(all(v))
#define lsort(v) sort(all(v), greater<>())
#define yes(cond) cout << ((cond) ? "Yes" : "No") << endl


/*****    Library area    *****/

/******************************/

#define INCLUDED_MAIN
#include __FILE__
#endif
