#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	bool arr[42] = { false, };
	int result = 0;
	for (int i = 0; i < 10; i++)
	{
		int number;
		cin >> number;
		if (!arr[number % 42])
		{
			result++;
			arr[number % 42] = true;
		}
	}
	cout << result << endl;
	return 0;
}