#include<bits/stdc++.h>

using namespace std;
void solution(string s){
	string s1=s;
	for(int i=0;i<s.size();i++){
		if(s[i]==s[i+1]){
			s.erase(i,2);
			solution(s);
		}
	}
	if(s1==s){
		cout<<s;
	}
}

int main(){
	
	string s;
	cin>>s;
    solution(s);
	return 0;
	
}
