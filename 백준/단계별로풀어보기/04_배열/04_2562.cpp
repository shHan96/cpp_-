#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int arr[9];
	int max_value=0, max_index=0;
	for (int i = 0; i < 9; i++)
		cin >> arr[i];
	for (int i = 0; i < 9; i++)
	{
		if (arr[i] > max_value)
		{
			max_value = arr[i];
			max_index = i + 1;
		}
	}
	cout << max_value << endl;
	cout << max_index << endl;
	return 0;
}