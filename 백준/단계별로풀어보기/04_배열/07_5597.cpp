#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	bool arr[30] = {false,};
	for (int i = 0; i < 28; i++)
	{
		int number;
		cin >> number;
		arr[number - 1] = true;
	}
	for (int i = 0; i < 30; i++)
	{
		if (!arr[i])
			cout << i + 1 << endl;
	}

	return 0;
}