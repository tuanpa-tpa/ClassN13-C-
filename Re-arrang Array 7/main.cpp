#include <bits/stdc++.h>
using namespace std;
bool soSanh(string a, string b)
{
	string ab=a.append(b);
	string ba=b.append(a);
	if(ab.compare(ba)>0) return true;
	return false;
}
int main()
{
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n; 
		string a[n];
		for(int i=0; i<n; i++) cin >> a[i];
			sort(a, a+n, soSanh);
		for(int i=0; i<n; i++) cout << a[i];
		cout << endl;
	}
	return 0;
}
// 6054854654
// 998764543431
// 6054854654
// 998764543431
