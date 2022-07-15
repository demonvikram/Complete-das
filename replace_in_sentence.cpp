#include<iostream>
#include<string>

using namespace std;

void nstr(string &s){
	for(int i=0;i<s.size();i++){
		if(s[i]==' '){
			s.replace(i,1,"@40");
		}
		else{
			continue;
		}
	}
}

int main(){
	
	string s;
	getline(cin,s);
	nstr(s);
	cout<<s;
	return 0;
}
