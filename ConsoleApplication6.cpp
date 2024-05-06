#include<iostream>
#include<string>
#include <algorithm>
using namespace std;
string s1, s2;
int a[101]; int b[101]; int c[101];
void strtoint(string src,int des[])
{
	for (int i = 0; i < src.size(); i++)
	{
		des[i] = src[src.size()-i-1] - '0';
	}
	for (int i = 0; i < src.size(); i++)
	{
		des[i] = des[src.size() - 1];
	}
}

int main()
{
    cin >> s1;
	cin >> s2;
	strtoint(s1, a);
	strtoint(s2, b);
	int size1 = s1.size();
	int size2 = s2.size();
	int size3 = max(size1, size2) + 1;
	for (int i = 0; i < size1; i++)
	{
		c[i] += a[i] + b[i];
		if (c[i] >= 10)
		{
			c[i + 1] += 1;
			c[i] %= 10;
		}
	}
	while (c[size3]==0)
	{
		size3 -= 1;
	}
	for (int i = size3; i >= 0; i--)
	{
		
		cout<<c[i];
	}
}