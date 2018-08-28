#include <iostream>
#include <string>
using namespace std;

bool isNum(string str)
{
	int num;
	num = strlen(str.c_str());
	if (num == 0)
		return false;

	if (str[0] != '-')
	{
		if (str[0] == '0')
			return false;
		for (int i = 0; i < num; i++)
		{
			if (str[i] < '0' || str[i] > '9')
				return false;
		}
		return true;
	}
	else
	{
		if (str[1] == '0')
			return false;
		for (int j = 1; j < num; j++)
		{
			if (str[j] < '0' || str[j] > '9')
				return false;
		}
		return true;
	}
}

int main()
{
	string str;
	printf("请输入整数：");
	cin >> str;

	string MAX_num = "2147483647";
	string MIN_num = "-2147483647";
	if (str[0] != '-')
	{
		if (str > MAX_num)
		{
			cout << "输入超过范围！" << endl;
			return 0;
		}
	}
	else
	{
		if (str > MIN_num)
		{
			cout << "输入超过范围！" << endl;
			return 0;
		}
	}

	if (isNum(str))
	{
		long long int num, y;
		num = atol(str.c_str());
		cout << "num的值为：" << num << endl;
		
		y = 2 * num;
		if (y > 4294967294)
			cout << "输出违法！" << endl;
		else
			cout << "y的值为：" << y << endl;
	}
	else
		cout << "输入违法！" << endl;	

	system("pause");
	return 0;
}

