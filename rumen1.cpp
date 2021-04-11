#include <iostream>
#include <cstring>
using namespace std;
//函数声明
int main(int argc, char const *argv[])
{
	char name[30];
	cout << "请输入你的名字：";
	cin >> name;
	cout << "我的名字是" << name << endl;
	char a1[30] = "albert";
	strcat(a1, "cui");
	char* p = (char*)a1;
	cout << p;
	return 0;
}
