#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

// SmolBrain Debug
template <typename A, typename B>
string to_string(pair<A, B> p);
string to_string(const string& s) { return '"' + s + '"'; }
string to_string(const char* s) { return to_string((string) s); }
string to_string(bool b) { return (b ? "true" : "false"); }
string to_string(vector<bool> v) {
	string res = "{";
	for (int i = 0; i < static_cast<int>(v.size()); i++) {
		res += to_string(v[i])+",";
	}
	if(res.back() == ',') res.pop_back();
	res += "}";
	return res;
}
template <typename A>
string to_string(A v) {
	string res = "{";
	for(const auto &x : v){
		res += to_string(x)+",";
	}
	if(res.back() == ',') res.pop_back();
	res += "}";
	return res;
}
template <typename A, typename B>
string to_string(pair<A, B> p) {
	return "(" + to_string(p.first) + "," + to_string(p.second) + ")";
}
void debug_out() { cout << endl; }
template <typename Head, typename... Tail>
void debug_out(Head H, Tail... T) {
	cout << "," << to_string(H);
	debug_out(T...);
}
template <typename Head, typename... Tail>
void my_debug(Head H, Tail... T) {
	cout << " " << to_string(H);
	debug_out(T...);
}

#ifdef LOCAL
#define debug(...) cout << "[" << #__VA_ARGS__ << "]:"; my_debug(__VA_ARGS__)
#else
#define debug(...) 42
#endif

mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
int main() {
	cin.tie(0)->sync_with_stdio(0);
	cin.exceptions(cin.failbit);
}