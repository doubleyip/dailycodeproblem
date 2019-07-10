#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;

bool findsum(vector<int> v,int k){
	
	bool found=false;
	sort(v.begin(),v.end());
	unordered_set<int> s;
	for(int i=0;i<v.size();i++){
		s.insert(v[i]);
	}
	for(auto itr=s.begin();itr!=s.end();++itr){
		if(s.find(k-*itr)!=s.end()){
			found=true;
		}
	}
	return found;

}


int main(){
	vector<int> v;
	v.push_back(10);
	v.push_back(15);
	v.push_back(3);
	v.push_back(7);
	int k=17;
	
	cout<<findsum(v,k)<<endl;
	
	
	
	
	
}