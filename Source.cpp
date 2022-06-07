#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int main()
{
	srand(time(0));
	int i, j, g, p1c = 0, p2c = 0, p3c = 0, k, che0 = 0;
	string che;
	string player1[18];
	string player2[18];
	string player3[18];
	string a[53] = { "1", "2", "3", "4", "5", "6", "7", "8", "9", "10","11", "12", "13", "1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13" ,"1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13" , "j" }; //全部的牌
	g = sizeof(a) / sizeof(a[0]);
	int num[53] = { 0 };
	cout << g << endl; //檢查用
	for (i = 1; i <= g; i++)		//洗全部的53牌
	{
		do {
			num[i - 1] = rand() % g + 1;
			for (j = 1; j < i; j++)
			{
				if (num[i - 1] == num[j - 1])
				{
					break;
				}
			}
		} while (j != i);
		cout << num[i - 1] << " ";
	}
	cout << endl;
	for (k = 1; k <= g; k++)		//洗好的檢查看a[亂碼]長怎樣
	{
		cout << a[num[k - 1] - 1] <<" ";
	}

	for (int k = 1; k <= 52; k++)		//發牌
	{
		if ((k % 3) == 0)
		{
			player1[p1c] = a[num[k - 1] - 1];
			p1c++;
		}
		else if ((k % 3) == 1)
		{
			player2[p2c] = a[num[k - 1] - 1];
			p2c++;
		}
		else if ((k % 3) == 2)
		{
			player3[p3c] = a[num[k - 1] - 1];
			p3c++;
		}
	}
	cout << endl;
	for (int o = 0; o < 18; o++)		//檢查一下
	{
		cout << player1[o] << " ";
	}
	cout << endl;
	for (int o = 0; o < 18; o++)
	{
		cout << player2[o] << " ";
	}
	cout << endl;
	for (int o = 0; o < 18; o++)
	{
		cout << player3[o] << " ";
	}
	cout << endl;


	che = player1[che0];		//檢查有沒有一樣的
	while(che0!=17)
	{
		for (int m = che0 + 1; m < 18; m++)
		{
			if (che == player1[m])
			{
				cout << "player1已把相同的" << che << "丟出" << endl;
				player1[che0] = {0};
				player1[m] = {0};

				che = player1[che0 + 1];
				che0++;
				
				while ((player1[che0+1]) == "0" && che0<=16)
				{
					che = player1[che0 + 1];
					che0++;
				}
			}
		}
		che = player1[che0 + 1];
		che0++;
		while ((player1[che0+1]) == "0" && che0 <= 16)
		{
			che = player1[che0 + 1];
			che0++;
		}
	}
	//3個都找一樣的
	//洗牌
	//cout << "請選擇數字";//抽
	//	cin >> x;
	//	player2[x-1] = { 0 };
	//	player1[後面+1張];
	//	2抽3
	//	3抽1
	//一抽到直接找一樣
	//洗牌
	//抽
	// 抽完找一樣
	//洗牌
	//抽
	//..................


}

