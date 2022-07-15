#include<bits/stdc++.h>

using namespace std;
// A man, a plan , a canal : Panama => amanaplanacanalpanama
// it's a palindrome sentence
bool isValid(char ch){
	if((ch>='a' && ch<='z')||(ch>='A' and ch<='Z')||(ch>='0' and ch<='9')){
		return true;
	}
	else{
		return false;
	}
	
}

char lower(char ch){
	if((ch>='a' and ch<='z')||(ch>='0' and ch<='9')){
		return ch;
	}
	else{
		return ch-'A'+'a';
	}
}

bool palindrome(string s){
	int st=0,en=s.length()-1;
	while(st<en){
		if(s[st++]==s[en--]){
			continue;
		}
		else{
			return false;
		}
	}
	return true;
}

int main(){
	string s;
	getline(cin,s);
	string temp="";
	for(int i=0;i<s.length();i++){
		if(isValid(s[i])){
			temp.push_back(s[i]);
		}
		else{
			continue;
		}
	}
	
	for(int i=0;i<temp.length();i++){
		temp[i]=lower(temp[i]);
		
	}
	cout<<palindrome(temp);
	return 0;
}

