#include<bits/stdc++.h>
#include<string>
using namespace std ;

int vowel_count(string s,int i){
	
	int length= s.length();
	
	if(i==length){
		return 0;
	}

	int ans = vowel_count(s,i+1);

	if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
		return ans+1;
	}
		return ans;

}
int main(){

	string s;
	getline(cin,s);


	int result= vowel_count(s,0);
		cout<<result;

}