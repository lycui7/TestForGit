#include <iostream>
#include <cstring>
using namespace std;
//��������
int main(int argc, char const *argv[])
{
	char name[30];
	cout << "������������֣�";
	cin >> name;
	cout << "�ҵ�������" << name << endl;
	char a1[30] = "albert";
	strcat(a1, "cui");
	char* p = (char*)a1;
	cout << p;
	return 0;
}
