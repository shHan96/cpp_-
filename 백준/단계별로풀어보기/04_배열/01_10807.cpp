#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N;
	int arr[100];
	int v;
	int result=0;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	cin >> v;
	for (int i = 0; i < N; i++)
	{
		if (arr[i] == v)
			result++;
	}
	cout << result << endl;
	return 0;
}