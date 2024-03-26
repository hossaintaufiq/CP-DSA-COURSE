// #include<bits/stdc++.h>
// using namespace std; 

// char lower(char a ){
// 	char b; 
// 	b=tolower(a);
// 	return b; 

// }

// int main(){

// 	string str1, str2; 
// 	cin>>str1>>str2;
// 	int str1_sum=0, str2_sum=0;

// 	for(int i=0;i<str1.length();i++){
// 		str1[i]=lower(str1[i]);
// 		str2[i]=lower(str2[i]);
// 	}


// 	for(int i=0;i<str1.length();i++){
// 		str1_sum+=(int)str1[i];
// 		str2_sum+=(int)str2[i];
// 	}

// 	if(str1_sum<str2_sum){
// 		cout<<"-1";
// 	}
// 	else if(str1_sum>str2_sum){
// 		cout<<"1";
// 	}
// 	else if (str1_sum== str2_sum){
// 		cout<<"0";
// 	}

// 	// cout<<str1<<endl<<str2;
// 	cout<<endl<<str1_sum<<endl<<str2_sum;

// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i;
    string f,s;
    while(cin>>f>>s)
    {
        long sum1=0,sum2=0;
        for(i=0; i<f.size(); i++)
        {
            if(f[i]>='A'&&f[i]<='Z')
                f[i]=f[i]-'A'+97;

            if(s[i]>='A'&&s[i]<='Z')
                s[i]=s[i]-'A'+97;
        }
        for(i=0; i<s.size(); i++)
        {
            if(f[i]>s[i])
                {
                    cout<<"1\n";
                    return 0;}

            if(s[i]>f[i])
                {
                    cout<<"-1\n";
                    return 0;
                }

        }
        cout<<"0\n";
    }
    return 0;
}