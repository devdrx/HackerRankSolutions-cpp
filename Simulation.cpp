#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define vi vector<int>
#define ll long long
int main() {
	{
#ifndef ONLINE_JUDGE
		// for getting input from input.txt
		freopen("input.txt", "r", stdin);
		// for writing output to output.txt
		freopen("output.txt", "w", stdout);
#endif
	}
	vi counter(3);
	vi  shellpos(3);
	for (int i = 0; i < 3; i++) {
		shellpos[i] = i;
	}
	int t, a, b, g;
	cin >> t;
	while (t--) {
		cin >> a >> b >> g;    //reading the input
		a--; b--; g--;		// zero offsetting the indexes		
		swap(shellpos[a], shellpos[b]);
		counter[shellpos[g]]++;   //why is this so hard to understand
 	}
	cout << max({counter[0], counter[1], counter[2]});
	return 0;
}

//arr[j][k]
// 1 2 3     2 1 3 (1 2 swap)	if it was at 2 and she guesses  index 1 then its correct; shellpos[1] =  2 ; counter[2] = 1
