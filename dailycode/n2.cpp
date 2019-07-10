#include <iostream>
#include <vector>

using namespace std;

vector<int> findproduct(vector<int> a){
	vector<int> v;
	int product=1;
	for(int i=1;i<a.size();i++){
		product=product*a[i];
		
	}
	v.push_back(product);
	
	for(int i=1;i<a.size();i++){
		int ans=(v[i-1]*a[i-1])/a[i];
		v.push_back(ans);
	}
	
	return v;
}

void printarray(vector<int> &v){
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
		
		
	}
	cout<<endl;
	
	
}

main(){
vector<int> ans;
vector<int> arr;
arr.push_back(1);
arr.push_back(2);
arr.push_back(3);
arr.push_back(4);
arr.push_back(5);
ans=findproduct(arr);
printarray(ans);

}