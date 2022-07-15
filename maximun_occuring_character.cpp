#include<bits/stdc++.h>

using namespace std;

char maxim(string s){
	map<char,int> m;
	for(int i=0;i<s.length();i++){
		m[s[i]]+=1;
	}
	int mx=INT_MIN;
	map<char,int>::iterator itr;
	for(itr=m.begin();itr!=m.end();itr++){
	    if((*itr).second>mx){
	    	mx=(*itr).second;
		}
	}
	for(auto &i:m){
		if(i.second==mx){
			return i.first;
		}
   }
}

int main(){
	
	string s;
	cin>>s;
	cout<<maxim(s);
	return 0;
}
