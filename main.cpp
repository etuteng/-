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
	printf("������������");
	cin >> str;

	string MAX_num = "2147483647";
	string MIN_num = "-2147483647";
	if (str[0] != '-')
	{
		if (str > MAX_num)
		{
			cout << "���볬����Χ��" << endl;
			return 0;
		}
	}
	else
	{
		if (str > MIN_num)
		{
			cout << "���볬����Χ��" << endl;
			return 0;
		}
	}

	if (isNum(str))
	{
		long long int num, y;
		num = atol(str.c_str());
		cout << "num��ֵΪ��" << num << endl;
		
		y = 2 * num;
		if (y > 4294967294)
			cout << "���Υ����" << endl;
		else
			cout << "y��ֵΪ��" << y << endl;
	}
	else
		cout << "����Υ����" << endl;	

	system("pause");
	return 0;
}

