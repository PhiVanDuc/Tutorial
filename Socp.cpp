#include<iostream>
#include<math.h>

using namespace std;

bool socp(int x)
{
	int kc = sqrt(x);
	if(pow(kc, 2) != x)
		return false;
	return true;
}

int main()
{
	int n;
	cin >> n;
	if(socp(n) == true)
		cout << "Dung";
	else
		cout << "Sai";
	cout << "Conflict from master";
	return 0;
}

