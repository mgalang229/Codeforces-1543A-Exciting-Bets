#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		long long a, b;
		cin >> a >> b;
		if (a == b) {
			// if 'a' is equal to 'b', then the fans will get infinite excitement
			cout << 0 << " " << 0;
		} else {
			// otherwise, compute the difference of 'a' and 'b' (since this will be their GCD)
			long long g = abs(a - b);
			// then to find the minimum number of steps needed to make 'a' and 'b' divisible by 'g' is
			// to compare the minimum value between the remainder of 'a' and 'g' (the number that
			// is needed to be added to 'a' to make it a multiple of 'g') or the subtracting 'g'
			// by the value that is needed to be added to 'a' to make it a multiple of 'g' (since
			// this will reduce 'a' into the multiple of 'g' wherein it is smaller than the 
			// original value of 'a')
			long long m = min(a % g, g - a % g);
			cout << g << " " << m;
		}
		cout << '\n';
	}
	return 0;
}
