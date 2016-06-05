#include <iostream>
#include <string>
#include <cstdio>
#include <map>
#include <algorithm>
#include <stack>
#include <queue>
#include <sstream>
#include <utility>
#include <cmath>
#include <bitset>
#include <cstring>
#include <utility>
#include <set>
#include <cctype>
#include <list>
#include <climits>
#include <cstdlib>
#define ii pair<int,int>
#define psi pair<string,int>
#define vi vector<int>
#define vvi vector <vector<int> >
#define vvc vector <vector<char> >
#define vs vector<string>
#define vl vector<long long>
#define vii vector<ii>
#define mp make_pair
#define gl(s) getline(cin , s)
#define max3(x, y, z) max(x,max(y,z))  
#define min3(x, y, z) min(x,min(y,z))
#define mmx INT_MAX 
#define mmn INT_MIN
typedef long long ll;
using namespace std;
vi dfs_num;
vvi AdjList;
void dfs(int u) {
	dfs_num[u] = 1;
	for(int i= 0; i < AdjList[u].size(); i++) {
		if(!dfs_num[AdjList[u][i]]) {
			cout << AdjList[u][i] << " ";
			dfs(AdjList[u][i]);
		}
	}
}

int main(){	
	int N, x, y;
	cout << "Enter Number of vertices" << endl;
	cin >> N;
	AdjList.resize(N);
	dfs_num.assign(N,0);
	int M;
	cout << "Enter Number of edges" << endl;
	cin >> M;
	for(int i = 0;i < M; i++) {
		cin >> x >> y;
		AdjList[x].push_back(y); // make an edge 
		AdjList[y].push_back(x); // make an edge 
	}
	/*show Adjacency Matrix*/
	
	for(int i = 0;i < AdjList.size(); i++){
		cout << i << ": ";
		for(int j = 0;j < AdjList[i].size(); j++) {
			cout << AdjList[i][j] << " ";
		}
		cout << endl;
	}
	cout << 0 << " ";
	dfs(0);
	cout << endl;
	return 0;
}




