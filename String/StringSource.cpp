#include "String.h"

void String3()
{
	cout << "��� ������ C. ������� ��� �������, ������ �� ������� ������������\n\
������� C � ������� �������, � ������ ������� �� �������� C." << endl;
	char symbol = 0;
	cout << "Input C: " << endl;
	cin >> symbol;
	cout << (char)(symbol - 1) << " and " << (char)(symbol + 1) << endl;
}

void String6()
{
	cout << "��� ������ C, ������������ ����� ��� ����� (��������� ��� �������). \n\
���� C ���������� �����, �� ������� ������ �digit�, ���� ��������� ����� � ������� \n\
������ �lat�, ���� ������� � ������� ������ �rus�." << endl;
	char symbol = 0;
	cout << "Input C: " << endl;
	cin >> symbol;
	if (symbol >= '0' && symbol <= '9')
		cout << "digit" << endl;
	else if (symbol > 0)
		cout << "lat" << endl;
	else cout << "rus" << endl;
}

void String10()
{
	cout << "���� ������. ������� ������, ���������� �� �� �������, �� ������������� � �������� �������. " << endl;
	char symbol[255];
	cout << "Input Str: " << endl;
	cin >> symbol;
	cout << "Result: " << endl;
	for (int i = 255; i >= 0; i--)
	{
		if (symbol[i] > '\0')
		{
			cout << symbol[i];
		}
	}
	cout << endl;
}

void String16()
{
	cout << "���� ������. ������������� � ��� ��� ��������� ��������� ����� � ��������. " << endl;
	char symbol[255];
	cout << "Input Str: " << endl;
	cin >> symbol;
	cout << "Result: " << endl;
	for (int i = 0; symbol[i] != '\0'; i++)
	{
		if (symbol[i] >= 65 && symbol[i] <= 90)
		{
			symbol[i] = (symbol[i] + 32);
		}
	}
	for (int i = 0; symbol[i] != '\0'; i++) cout << symbol[i];
	cout << endl;
}

void String22()
{
	cout << "���� ����� ������������� �����. ������� �������, ������������ ����� ����� �����(� ������� ������ ������). " << endl;
	int digit = 0;
	cout << "Input digit: " << endl;
	cin >> digit;
	char symbol[100];
	for (int i = 0; digit != 0; i++)
	{
		symbol[i] = digit % 10 + 48;
		digit /= 10;
	}
	for (int i = 100; i >= 0; i--)
	{
		if (symbol[i] > '\0')
		{
			cout << symbol[i];
		}
	}
	cout << endl;
}

void String24()
{
	cout << "���� ������, ������������ �������� ������ ������ ��������������\n\
�����.������� ������, ������������ ���������� ������ ����� �� �����. " << endl;
	char symbol[100];
	cout << "Input Str: " << endl;
	int result = 0;
	cin >> symbol;
	for (int i = 0; symbol[i] != '\0'; i++)
	{
		if ((symbol[i] < '0') || (symbol[i] > '1')) break;
		result <<= 1;
		result += symbol[i] - '0';
	};
	cout << "Result: " << endl;
	cout << result << endl;
}

void String27()
{
	cout << "���� ����� ������������� ����� N1 � N2 � ������ S1 � S2. ��������\n\
�� ���� ����� ����� ������, ���������� ������ N1 �������� ������ S1 �\n\
��������� N2 �������� ������ S2(� ��������� �������). " << endl;
	cout << "Input N1 and N2: " << endl;
	int n1 = 0, n2 = 0;
	cin >> n1 >> n2;
	cout << "Input S1 and S2" << endl;
	char s1[100], s2[100];
	cin >> s1 >> s2;
	cout << "Result: " << endl;
	for (int i = 0, j = 0; j < n2; i++)
	{
		if (s1[i] > '\0' && i < n1)
			cout << s1[i];
		else if (s2[j] > '\0')
			cout << s2[j++];
		else j++;
	}
	cout << endl;
}

void String30()
{
	cout << "��� ������ C � ������ S, S0. ����� ������� ��������� ������� C � ������ S �������� ������ S0. " << endl;
	char symbol, s[10000], s0[100], s_temp[10000];
	cout << "Input C: " << endl;
	cin >> symbol;
	cout << "Imput S and S0: " << endl;
	cin >> s >> s0;
	for (int i = 0, j = 0; s[i] != '\0'; i++)
	{
		if (s[i] == symbol)
		{
			for (int k = 0; s0[k] != '\0'; k++)
			{
				s_temp[j++] = s0[k];
			}
		}
		else
			s_temp[j++] = s[i];
	}
	for (int k = 0; s_temp[k] > 0; k++)
		s[k] = s_temp[k];
	cout << "Result: " << endl;
	for (int k = 0; s_temp[k] > 0; k++)  cout << s[k];
	cout << endl;
}

void String38()
{
	cout << "���� ������ S, S1 � S2. �������� � ������ S ��� ��������� ������ S1 �� ������ S2" << endl;
	char* s = new char[10000];
	char* s_temp = new char[10000];
	char* s1 = new char[10000];
	char* s2 = new char[10000];
	cout << "Input S: " << endl;
	cin >> s;
	cout << "Imput S1 and S2: " << endl;
	cin >> s1 >> s2;
	int lenS1 = 0, g = 0;
	for (int i = 0; s1[i] != '\0'; i++) lenS1++;
	bool flagP = false;
	for (int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == s1[0])
		{
			for (int j = 0, k = i; s1[j] != '\0'; j++)
			{
				if (s[k++] != s1[j])
				{
					flagP = true;
					break;
				}
			}
			if (flagP)
			{
				flagP = false;
				s_temp[g++] = s[i];
			}
			else
			{
				for (int q = 0; s2[q] != '\0'; q++)
				{
					s_temp[g++] = s2[q];
				}
				i = i + lenS1 - 1;
			}
		}
		else
		{
			s_temp[g++] = s[i];
		}
	}
	for (int i = 0; s_temp[i] > 0; i++) s[i] = s_temp[i];
	cout << "Result: " << endl;
	for (int k = 0; s_temp[k] > 0; k++)  cout << s[k];
	cout << endl;
}

char bufRus[256];
char* RUS(const char* text) //������� ��������� �������� �����
{
	CharToOem((LPCWSTR)text, bufRus);

	return bufRus;
}

void String42()
{
	cout << "���� ������, ��������� �� ������� ����, ��������� ���������� ������� � ����������� ��������� (����� ��� �����������). \n\
����� ���������� ����, ������� ���������� � ������������� ����� � ��� �� ������" << endl;
	cout << "Input S1" << endl;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char* s = new char[100];
	char temp = '\0';
	cin.getline(s, 255);
	int count = 0, curIter = 0;

	for (int i = 0; s[i - 1] != '\0'; i++)
	{
		if (temp == '\0' && s[i] != ' ')
		{
			curIter = i;
			temp = s[i];
		}
		if (s[i + 1] == '\0' || s[i + 1] == ' ' && s[curIter] == s[i] && curIter != i && temp != '\0')
			count++;

		if (s[i] == ' ')
			temp = '\0';
	}

	cout << "Result: " << endl;
	cout << count << endl;
}

void String45()
{
	cout << "���� ������, ��������� �� ������� ����, ����������� ��������� (����� ��� �����������). ����� ����� ������ ��������� �����. " << endl;
	cout << "Input S1" << endl;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char* s = new char[100];
	char temp = '\0';
	cin.getline(s, 255);
	int count = 0, min = 0;
	bool flag = true;
	for (int i = 0; s[i - 1] != '\0'; i++)
	{

		if (temp == '\0' && s[i] != ' ')
		{
			temp = s[i];
		}

		if (s[i] != ' ' && temp != '\0')
			count++;

		if (min > count && !flag && s[i] == ' ' || s[i + 1] == '\0')
		{
			min = count;
			count = 0;
		}

		if (s[i] == ' ' && temp != '\0')
		{
			temp = '\0';
			if (flag)
			{
				flag = false;
				min = count;
				count = 0;
			}
		}

		if (s[i] == ' ')
			count = 0;
	}

	cout << "Result: " << endl;
	cout << min << endl;
}

void String54()
{
	cout << "���� ������-����������� �� ������� �����. ���������� ���������� ������������ � ������ ������� ����. " << endl;
	char* s = new char[100];
	char temp = '\0';
	cin.getline(s, 255);
	int count = 0;
	bool flag = true;
	for (int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '�' || s[i] == '�' || s[i] == '�' || s[i] == '�' || s[i] == '�' || s[i] == '�' || s[i] == '�' || s[i] == '�' || s[i] == '�' || s[i] == '�' || s[i] == '�' || s[i] == '�' || s[i] == '�' || s[i] == '�' || s[i] == '�' || s[i] == '�')
			count++;
	}
	cout << "Result: " << endl;
	cout << count << endl;
}

void String58()
{
	cout << "���� ������, ���������� ������ ��� �����, �� ���� ��� �����, ������ ��������� (����), ���������� ��� � ����������.\n\
�������� �� ���� ������ ��� �����(��� ����������). " << endl;
	char* s = new char[100];
	char s1[100];
	char temp = '\0';
	cin.getline(s, 255);
	int g = 0;
	bool flag = true;
	for (int i = 100; i >= 0; i--)
	{
		if (s[i] == '\\') 
			break;
		if (s[i] == '.')
		{
			flag = false;
			continue;
		}
		if (!flag && s[i] > 0) 
			s1[g++] = s[i];
	}

	cout << "Result: " << endl;
	for (int i = g - 1; i >= 0; i--) cout << s1[i];
	cout << endl;
}

void String63()
{
	cout << "���� ������-����������� �� ������� ����� � ����� K (0 < K < 10). ����������� ������, �������� \n\
����������� ������ ������ ����� �� ����� ���� �� ��������, ������������� � �������� �� K - � ������� ����� ��������� �����(��������, ��� K = 2 \n\
��� �������� � �», �� � � ��, ��� � � �û, ��� � � �� � �.�.).����� ��� � �������� �� ���������, ����� ���������� � ������� �� ��������. " << endl;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int i, k = 0;
	char masiv[100];
	cout << "Input text: " << endl;
	cin.getline(masiv, 100);
	cout << "Input K: " << endl;
	cin >> k;

	for (i = 0; i < strlen(masiv); i++)
		masiv[i] += k;

	cout << endl << "Result: " << masiv << endl << endl;
}

void String65()
{
	cout << "���� ������������� ����������� �� ������� ����� (������ ���������� ������ � ������� String63) � ��� �������������� ������ ������ C.\n\
����� ������� �������� K � ������������ �����������. " << endl;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int i = 0, k = 0;
	char masiv[100], symbol = ' ', temp= ' ';
	cout << "Input text: " << endl;
	cin.getline(masiv, 100);
	cout << "Input sym: " << endl;
	cin >> symbol;

	for (int i = 0; i < 100; i++)
	{
		if (masiv[i] != ' ')
		{
			temp = masiv[i];
			break;
		}
	}

	k = temp - symbol;

	for (i = 0; i < strlen(masiv); i++)
		masiv[i] -= k;

	cout << endl << "Result: " << masiv << endl << endl;
}
