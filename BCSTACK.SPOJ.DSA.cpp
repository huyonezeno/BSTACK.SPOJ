#include<iostream>
#include<stack>
using namespace std;
string s;
stack<int>st;
int main() {
	while (true) {
		cin >> s;
		if (s == "end") break;
		if (s == "init") {
			st = stack<int>();
		}
		else if (s == "push") {
			int x;
			cin >> x;
			st.push(x);
		}
		else if (s == "pop") {
			if (!st.empty()) {
				st.pop();
			}
		}
		else if (s == "top") {
			if (!st.empty()) {
				cout << st.top() <<endl;
			}
			else {
				cout << "-1" << endl;
			}
		}
		else if (s == "size") {
			cout << st.size() << endl;
		}
		else if (s == "empty") {
			if (st.empty()) {
				cout << 1 << endl;
			}
			else {
				cout << 0 << endl;
			}
		}
	}
	return 0;
}
