#include<bits/stdc++.h>
using namespace std;
bool isSubsequence(string t,string s,size_t i,size_t j){
	if(j==s.length())
		return 1;
	if(i==t.length())
		return 0;
	if(s[j]==t[i])
		return isSubsequence(t,s,i+1,j+1);
	return isSubsequence(t,s,i+1,j);
}
int main(){
	string s,t;
	cin>>s>>t;
	if(isSubsequence(t,s,0,0))
		cout<<"YES\n";
	else
		cout<<"NO\n";
	return 0;
}
		
