#include<iostream>
#include<vector>
#include<string>
#include<stdio.h>
#include<conio.h>

using namespace std;

bool isvalid(char ch){
	if((ch>='A' and ch<='Z')||(ch>='0' and ch<='9')||(ch>='a' and ch<='z')){
		return true;
	}
	return false;
}

char lower(char ch){
	return ch-'A'+'a';
}

bool palindrome(vector<char> temp){
	
	int i=0;
	int j=temp.size()-1;
	while(i<j){
		if(temp[i]==temp[j]){
			i++;
			j--;
			continue;
		}
		else{
			return false;
		}
	}
	return true;
}

int main(){
	
	vector<char> temp;
	string s;
	getline(cin,s);
	for(int i=0;i<s.length();i++){
		if(isvalid(s[i])){
			temp.push_back(s[i]);
		}
	}
	
	
	
	for(int i=0;i<temp.size();i++){
		if(temp[i]>='A' and temp[i]<='Z'){
			temp[i]=lower(temp[i]);
		}
	}
	cout<<palindrome(temp);
	getch();
	return 0;
	
	
}
