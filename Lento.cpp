#include <iostream>
#include <algorithm>
using namespace std;
long long int A[1000002], n, s = 0, i, mid, im = -1;
int main(){ 
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	cin >> n;
	for(i = 0;i < n;i++) cin >> A[i];
		sort(A, A+n);
		for(i = 0; i < n; i++) s += A[i];
		if(s % 2 == 0){
			i = 0;
			while(i < n && A[i] % 2 == 0) i++;
			if(A[i] % 2 != 0) im = i;
			if(im == -1) cout << 0;
			else cout << s-A[im];
		}
		else{
			cout << s;
		}
		cout << "\n";
	return 0;
}
