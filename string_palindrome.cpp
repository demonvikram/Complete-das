#include<bits/stdc++.h>

using namespace std;

char lower(char a){
	return char(97+(int(a)-65));
}


bool check(string s){
	int k=s.length();
	int st=0,en=k-1;
	while(st<en){
		if(s[st++]==s[en--]){
			continue;
		}
		else if(int(s[st])<97 || int(s[en])<97){
			if(lower(s[st]==lower(s[en]))){
				st++;
				en--;
				continue;
			}
			
		}
		else{
			return false;
		}
	}
	return true;
}

int main(){
	string s;
	char a;
	cin>>a;
	cout<<check(s);
	return 0;
}
