#include <iostream>
using namespace std;
int main()
{
	string str1 = "abcdefg";
	string str2 = "abcdef";
	char t;
	for(int i =0; i<4; i++)
	{
		for(int j=i+1; j<4; j++)
		{
			if(str1[i] < str1[j])
			{
				t = str1[i];
				str1[i] = str1[j];
				str1[j] = t;
				
			}

		}		
	}
	
	for(int i =0; i<4; i++)
	{
		for(int j=i+1; j<4; j++)
		{
			if(str2[i] < str2[j])
			{
				t = str2[i];
				str2[i] = str2[j];
				str2[j] = t;
				
			}

		}		
	}
	cout<<"STR 1    "<<str1<<endl;
	cout<<"STR 2    "<<str2<<endl;
	if(str1 == str2)
	{
		cout<<"Anagram";
	}
	else
	{
		cout<<"Not Anagram";
	}

 	return 0;
}
