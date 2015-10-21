#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Cyclemin {
public:
	string bestmod(string s, int k) {
		int n = s.size();
		string best = s;
		for (int iter = 1; iter <= n; iter++) {
			string sCopy = s;
			int uk = 0;
			for (int j = 0; j < n; j++) {
				if (uk < k && s[j] != 'a') {
					uk++;
					sCopy[j] = 'a';
				}
			}
			best = min(best, sCopy);
			s = s.substr(1) + s.substr(0, 1);
		}
		return best;
	}
};
