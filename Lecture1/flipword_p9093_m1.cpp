#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	cin >> n;
	cin.ignore(); //��� �� ĭ�� ������µ� ���۶����ε�.
	while (n--)
	{
		string sentence;
		getline(cin, sentence);
		int sen_len = sentence.length();

		char word[21];
		int j = 0; //�ܾ� �迭 ����� ���� j
		for (int i = 0; i < sen_len; i++) //���� �迭 Ȯ�ο� ���� i
		{
			if (sentence[i] != ' ')
			{
				word[j++] = sentence[i]; //���� �ƴ� �� word�� ����
			}
			else //������ �� 
			{
				for (int k = j - 1; k >= 0; k--)
				{
					cout << word[k]; //�ϴ� word �������� ���
				}
				j = 0;
				cout << ' '; //�� ������ �ܾ ����� �ȵǼ� �����ϰ�
				word[0] = NULL; //���ڿ� �ʱ�ȭ?
			}
		}
		for (int k = j - 1; k >= 0; k--)
		{
			cout << word[k]; //�� ������ ���ڴ� ' '�� �Ȱɷ����� ���⼭ ���
		}
		j = 0;
		if (n != 0) { cout << "\n"; } //�� ������ ���� ������ ���� �� ��Ű����
	}

	return 0;
}