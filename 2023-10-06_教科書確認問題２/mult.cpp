#include <iostream>
using namespace std;

/*�|���Z����mult�֐����쐬���Ȃ����B
�֐��̎��Ԃ�main�֐�������\�[�X�t�@�C���Ƃ͓����@�C���ɂ��Ȃ����B
�Ȃ��Amult�֐��͑��̃t�@�C������Ăяo���ł��Ȃ��悤�ɂ��邱�ƁB*/

static void Multi(int a, int b)
{
	cout << "a x b = " << a * b << endl;
}

void Multi2(int a, int b)
{
	Multi(a, b);
}