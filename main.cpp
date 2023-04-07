#include<iostream>
#include<ctime>
#include<vector>

using namespace std;
int main()
{
	vector<int>X;
	srand(time(NULL));
	int temp[6];
	while (true)
	{
		for (int i = 1; i <= 45; i++)
		{
			X.push_back(i);
		}

		for (int j = 0; j < 6; j++)
		{
			temp[j] = X[rand() % 46];
		}
		for (int k = 0; k < 6; k++)
		{
			if (temp[0] != temp[1] && temp[1] != temp[2] && temp[3] != temp[4] && temp[4] != temp[5])
			{
				cout << temp[k] << "\t";
			}
			else
				break;
		}
		if (temp[0] != temp[1] && temp[1] != temp[2] && temp[3] != temp[4] && temp[4] != temp[5])
		{
			break;
		}
		else
		continue;
	}

	return 0;
}