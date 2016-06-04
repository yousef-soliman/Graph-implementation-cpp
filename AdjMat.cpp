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


int main(){	
	int N, x, y;
	cout << "Enter Number of vertices" << endl;
	cin >> N;
	vvi AdjMat;
	/*initializing AdjMat with 0 */
	for(int i = 0;i < N; i++){
		vi v;
		for(int j = 0;j < N; j++) {
			v.push_back(0);
		}
		AdjMat.push_back(v);
	}
	int M;
	cout << "Enter Number of edges" << endl;
	cin >> M;
	for(int i = 0;i < M; i++) {
		cin >> x >> y;
		AdjMat[x][y] = 1; // make an edge 
		AdjMat[y][x] = 1; // make an edge 
	}
	/*show Adjacency Matrix*/
	cout << "  ";
	for(int i = 0;i < N; i++){
		cout << i << " ";
	}
	cout << endl;
	for(int i = 0;i < N; i++){
		cout << i << " ";
		for(int j = 0;j < N; j++) {
			cout << AdjMat[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}




