/*
Given an array of integers, find the first missing positive integer in linear time and constant space. 
In other words, find the lowest positive integer that does not exist in the array. 
The array can contain duplicates and negative numbers as well.
*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_set>

using namespace std;

int findsum(vector<int> v){
	
	int ans=1;
	//sort(v.begin(),v.end());
	unordered_set<int> s;
	for(int i=0;i<v.size();i++){
		s.insert(v[i]);
	}
	for(int i=1;i<v.size();i++)
	{
		if((s.find(i)!=s.end())!=true){
			return i;
		}
	}
	return 0;
}


int main(){
	vector<int> v;
	v.push_back(3);
	v.push_back(4);
	v.push_back(-1);
	v.push_back(1);
	
	cout<<findsum(v)<<endl;
	
	
	
	
	
}