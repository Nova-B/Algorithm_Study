#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	cin >> n;
	cin.ignore(); //계속 한 칸이 띄어졌는데 버퍼때문인듯.
	while (n--)
	{
		string sentence;
		getline(cin, sentence);
		int sen_len = sentence.length();

		char word[21];
		int j = 0; //단어 배열 저장용 변수 j
		for (int i = 0; i < sen_len; i++) //문장 배열 확인용 변수 i
		{
			if (sentence[i] != ' ')
			{
				word[j++] = sentence[i]; //띄어쓰기 아닐 때 word에 저장
			}
			else //띄어쓰기일 때 
			{
				for (int k = j - 1; k >= 0; k--)
				{
					cout << word[k]; //일단 word 역순으로 출력
				}
				j = 0;
				cout << ' '; //맨 마지막 단어가 출력이 안되서 띄어쓰기하고
				word[0] = NULL; //문자열 초기화?
			}
		}
		for (int k = j - 1; k >= 0; k--)
		{
			cout << word[k]; //맨 마지막 문자는 ' '로 안걸러져서 여기서 출력
		}
		j = 0;
		if (n != 0) { cout << "\n"; } //맨 마지막 문장 끝나고 개행 안 시키려고
	}

	return 0;
}