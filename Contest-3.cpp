#include<bits/stdc++.h>
using namespace std;

char upper(char a){
    char b=toupper(a);
    return b;
}

char lower(char a){
   char b=tolower(a);
    return b;
}

int main()
{
    string s; 
    cin>>s; 

    int clCount=0;
    int slCount=0;

    for(int i=0; i<s.length();i++){
        // cout<<s[i]<<endl;

        if(s[i]>='A' && s[i]<='Z'){
            clCount++;
        }
        else if(s[i]>='a' && s[i]<='z'){
            slCount++;
        }
    }

    if(clCount== slCount){
         for (int i = 0; i < s.length(); ++i)
        {
        cout<<lower(s[i]);
        }
    }
    else if(clCount< slCount){
          for (int i = 0; i < s.length(); ++i)
        {
        cout<<lower(s[i]);
        }
    }
    else if(clCount> slCount){
        for (int i = 0; i < s.length(); ++i)
        {
        cout<<upper(s[i]);
        }
    }

}