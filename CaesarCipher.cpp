#include<iostream>
#include<string>
using namespace std;

string decrypt(string s,int key)
{

	string str;
	for(int i=0; i<s.length(); i++)
	{
		if(isupper(s[i]))
		{
			//str[i]=(s[i]-65-key)%26+65; //Cant access str this way, invalid

			if(s[i]-65-key<0)
			{
				str.push_back(91-abs(s[i]-65-key));
			}
			else
				str.push_back((s[i]-65-key)%26+65);

		}
		else if(s[i]==' ')
			str.push_back(' ');
		else
		{
			//str[i]=(s[i]-97-key)%26+97;
			if(s[i]-97-key<0)
			{
				str.push_back(123-abs(s[i]-97-key));
			}
			else
				str.push_back((s[i]-97-key)%26+97);
		}
	}
	return str;
}

string encrypt(string s,int key)
{

	string str;
	for(int i=0; i<s.length(); i++)
	{
		if(isupper(s[i]))
		{
			//str[i]=(s[i]-65+key)%26+65;
			str.push_back((s[i]-65+key)%26+65);
			
		}
		else if(s[i]==' ')
			str.push_back(' ');
		else
		{
			//str[i]=(s[i]-97+key)%26+97;
			str.push_back((s[i]-97+key)%26+97);
		}
	}
	
	return str;
	
}


int main()
{
	string s;
	cout<<"Enter message:"<<"\n";
	//cin>>s;
	getline(cin,s);

	int key;
	cin>>key;

	string s1=encrypt(s,key);
	string s2=decrypt(s1,key);
	
	cout<<"Cipher text: "<<s1<<"\n";
	cout<<"Plain text: "<<s2;

	return 0;
}