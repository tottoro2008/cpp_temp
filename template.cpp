#ifdef INCLUDED_MAIN

__int128 read128();
void print128(__int128);

struct Solution {
    stringstream out; const static bool kReadTestCases = 0;

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
#include <iomanip>

using namespace std;
using vi = vector<int>;

#define GET_MACRO(_1, _2, _3, NAME, ...) NAME
#define FOR(...) GET_MACRO(__VA_ARGS__, _FOR3, _FOR2)(__VA_ARGS__)
#define _FOR2(i, n) for (int i = 0; i < (n); i++)
#define _FOR3(i, a, b) for (int i = (a); i < (b); i++)
#define endl '\n'
#define int long long
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define all(x) (x).begin(), (x).end()
#define ssort(v) sort(all(v))
#define lsort(v) sort(all(v), greater<>())
#define yes(cond) cout << ((cond) ? "Yes" : "No") << "\n"

template <typename T> inline bool chmin(T& a, const T& b) {bool compare = a > b; if (a > b) a = b; return compare;}
template <typename T> inline bool chmax(T& a, const T& b) {bool compare = a < b; if (a < b) a = b; return compare;}

/*****    Library area    *****/

// graph template
template <typename T = int>
struct Edge {
  int from, to;
  T cost;
  int idx;
  Edge() = default;

  Edge(int from, int to, T cost = 1, int idx = -1)
      : from(from), to(to), cost(cost), idx(idx) {}

  operator int() const { return to; }
};

template <typename T = int>
struct Graph {
  vector<vector<Edge<T> > > g;
  int es;

  Graph() = default;
  explicit Graph(int n) : g(n), es(0) {}
  size_t size() const { return g.size(); }
  void add_directed_edge(int from, int to, T cost = 1) {
    g[from].emplace_back(from, to, cost, es++);
  }

  void add_edge(int from, int to, T cost = 1) {
    g[from].emplace_back(from, to, cost, es);
    g[to].emplace_back(to, from, cost, es++);
  }

  void read(int M, int padding = -1, bool weighted = false,
            bool directed = false) {
    for (int i = 0; i < M; i++) {
      int a, b;
      cin >> a >> b;
      a += padding;
      b += padding;
      T c = T(1);
      if (weighted) cin >> c;
      if (directed)
        add_directed_edge(a, b, c);
      else
        add_edge(a, b, c);
    }
  }

  inline vector<Edge<T> > &operator[](const int &k) { return g[k]; }
  inline const vector<Edge<T> > &operator[](const int &k) const { return g[k]; }
};

template <typename T = int>
using Edges = vector<Edge<T> >;



// input __int128
__int128 read128() {
    string s;
    cin >> s;
    __int128 x = 0;
    bool neg = false;
    int i = 0;
    if (s[0] == '-') neg = true, i = 1;
    for (; i < s.size(); ++i) x = x * 10 + (s[i] - '0');
    return neg ? -x : x;
}

// output __int128
void print128(__int128 x) {
    if (x == 0) { cout << 0; return; }
    if (x < 0) { cout << '-'; x = -x; }
    string s;
    while (x) { s += '0' + (x % 10); x /= 10; }
    reverse(s.begin(), s.end());
    cout << s;
}


/*****    Library area    *****/

/******************************/

#define INCLUDED_MAIN
#include __FILE__
#endif
