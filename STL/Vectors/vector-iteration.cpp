#include <bits/stdc++.h>
using namespace std;

int main() {		
	
	vector<int> v = {5,8,6,4,1,2,9,7,5,6,7,3,4,7};

	for(int i=0; i<v.size(); ++i)
		cout<<v[i]<< " ";
	cout<<endl;

	for(auto it = v.begin(); it != v.end(); ++it)
		cout<<*it<< " ";
	cout<<endl;

	for(int i : v)
		cout<< i << " ";
	
	cout<<endl;

}
