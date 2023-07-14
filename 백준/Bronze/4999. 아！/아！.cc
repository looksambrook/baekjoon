#include <iostream>
#include <cstring>

using namespace std;

int main() {
	char arr[1000];
	char a[1000];

	cin >> arr >> a;

	if (strlen(arr) < strlen(a))
		cout << "no";
	else
		cout << "go";


	return 0;
}