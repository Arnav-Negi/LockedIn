/**
 * Author: A Kishore Kumar
 * Date: 2023-03-30
 * License: CC0
 * Source: http://rng-58.blogspot.com/2017/02/hashing-and-probability-of-collision.html
 * Description: Tree isomorphism using hashing.
 * $O(V + E)$
 * Status: Tested on CF
 */

#include "../strings/Hashing.h"

vector<HT> R(MAXN);
void prec(){
	auto rng = std::mt19937(std::random_device()());
	for(int i=0; i < sz(R); i++) R[i] = {rng(), rng()}; //*
}
HT hasher(vector<HT> &h, int d){
	HT ret_hash = mint_ntuple(1);
	for(auto &x : h) ret_hash *= (R[d] + x);
	return ret_hash;
}
auto comp = [&](vvi &adj){
	vector<HT> iso(n);
	function<int(int, int)> dfs = [&](int v, int p){
		vector<HT> c;
		int dep = 0;
		for(auto &to : adj[v]) if(to != p) {
			dep = max(dep, dfs(to, v) + 1);
			c.pb(iso[to]);
		}		 
		return iso[v] = hasher(c, dep), dep;
	};
	return dfs(0, -1), iso;
};
