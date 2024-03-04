#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N;
	int arr[1000];
	int max_value=0;
	int total = 0;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
		total += arr[i];
		if (max_value < arr[i])
			max_value = arr[i];
	}
	cout << total*100 / (double)(max_value*N)  << endl;
	return 0;
}