#include <bits/stdc++.h>
using namespace std;
 
int main () {
	int K; double R;
	while( cin >> K >> R ) {
		if( K == 0 && R == 0.0 ) return 0;
		vector<int> members(121);
		while( K-- ) {
			int n, m;
			cin >> n >> m;
			members[m] += n;
		}
		vector<int> section;
		for( int i = 1 ; i < 121 ; i++ ) {
			if( members[i] != 0 ) {
				section.push_back( members[i] );
			}
		}
		sort( section.begin(), section.end() );
		int a = 0, b = 0;
		int count = 0;
		while( b < int( section.size() ) ) {
			if( double(section[b]) / double(section[a]) <= R ) b++;
			else{ a = b; count++; }
		}
		cout << count + 1 << endl;
	}
	return 0;
}
