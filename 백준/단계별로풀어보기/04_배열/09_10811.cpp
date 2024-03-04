#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N, M;
	int arr[101] = { 0, };
	cin >> N >> M;
	for (int i = 1; i < N + 1; i++)
	{
		arr[i] = i;
	}
	for (int i = 0; i < M; i++)
	{
		int a, b;
		cin >> a >> b;
		while (a < b)
		{
			int temp = arr[a];
			arr[a] = arr[b];
			arr[b] = temp;
			a++;
			b--;
		}
	}
	for (int i = 1; i < N + 1; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}