
#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
string s1, s2;
int a[101]; int b[101]; int c[101];
void strtoint(string src, int des[])
{
	for (int i = 0; i < src.size(); i++)
	{
		des[i] = src[src.size() - i - 1] - '0';		
	}

}
bool comparestr(string a, string b)
{
	if (a.size() != b.size())
	{
		return a.size() >= b.size();
	}
	else return a >= b;
	
}
int main()
{
	cin >> s1 >> s2;
	if (!comparestr(s1, s2))
	{
		cout << "-";
		string s3;
		s3 = s1;
		s1 = s2;
		s2 = s3;
	}
	strtoint(s1, a);
	strtoint(s2, b);
	int la = s1.size();
	int lb = s2.size();
	int lc = max(la, lb);
	for (int i = 0; i < lc; i++)
	{
	
		
		if (a[i] < b[i])
		{
			a[i] += 10;
			a[i + 1] -= 1;
			
		}
		c[i] = a[i] - b[i];		
	}
	
	while (c[lc] == 0&&lc>0)
	{
		lc--;
	}
	for (int i = lc; i >= 0; i--)
	{
		cout << c[i];
	}
}

