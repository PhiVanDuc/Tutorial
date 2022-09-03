#include<iostream>

using namespace std;

int main()
{
	int n;
	cout << "Nhap n: "; cin >> n;
	cout << "Hien thi ra n: " << n;
	
	int a, b;
	cin >> a >> b;
	if(a > b)
		cout << a;
	else
		cout << b;
	return 0;
}

