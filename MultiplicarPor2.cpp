#include <iostream>
#include <algorithm>
using namespace std;
long long int a, b, aux, m, ca;
int main(){
	cin >> a >> b;
	aux = __gcd(a,b), m = max(a, b);
		m /= aux, ca = 2; 
		while(ca < m) ca *= 2;
		if(ca == m) cout << "felizmil";
		else cout << "tristemil";
	cout << "\n";
	return 0;
}
