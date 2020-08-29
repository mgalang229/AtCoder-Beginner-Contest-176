#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	string s;
	cin >> s;
	int sum=0;
	for(int i=0; i<(int)s.size(); ++i)
		sum+=s[i]-'0';
	if(sum%9==0)
		cout << "Yes";
	else
		cout << "No";
	cout << "\n";
}
