#include <iostream>
using namespace std;

/*掛け算するmult関数を作成しなさい。
関数の実態はmain関数があるソースファイルとは同じァイルにしなさい。
なお、mult関数は他のファイルから呼び出しできないようにすること。*/

void Multi2(int a, int b);

void Multi3()
{
	Multi2(6, 11);
}

int main()
{
	Multi3();
}
