#include <iostream>
using namespace std;

/*掛け算するmult関数を作成しなさい。
関数の実態はmain関数があるソースファイルとは同じァイルにしなさい。
なお、mult関数は他のファイルから呼び出しできないようにすること。*/

static void Multi(int a, int b)
{
	cout << "a x b = " << a * b << endl;
}

void Multi2(int a, int b)
{
	Multi(a, b);
}