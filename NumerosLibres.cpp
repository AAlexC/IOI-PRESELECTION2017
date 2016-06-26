#include <iostream>
#include <algorithm>
using namespace std;
int long long  n, r, i, a, b;
int main(){
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	cin >> n;
	while(n--){
		cin >> a >> b;
		r = __gcd(a, b);
		if(r == 1) cout << "SI";
		else cout << "NO";
	cout << "\n";
	}
	return 0;
}
