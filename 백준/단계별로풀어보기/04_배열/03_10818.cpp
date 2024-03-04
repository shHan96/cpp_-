#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N;
	int arr[1000000];
	int max_value = -1000000, min_value = 1000000;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < N; i++)
	{
		if (max_value < arr[i])
			max_value = arr[i];
		if (min_value > arr[i])
			min_value = arr[i];

	}
	cout << min_value << " " << max_value << endl;
	return 0;
}