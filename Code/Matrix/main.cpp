# include <iostream>
# include <vector>
# include "matrix.h"

int main() {

	// ������ initial_grid ����һ�� 7x5 ����
	// �����е�����ֵ���� 0.4
	std::vector <std::vector <float> >
		initial_grid(7, std::vector <float>(5, 0.4));

	// TODO:ʹ�ó�ʼ grid ������ʵ����һ���������
	// �������Ӧ��д�� matrixa
	Matrix matrixa(initial_grid);

	// TODO:ʹ�� matrix_print() ������ӡ�� matrixa
	matrixa.matrix_print();

	// TODO:��ӡ�� matrixa �е�����������Ҫ
	//ʹ�� getRows() ������ std::cout
	std::cout << matrixa.getRows();

	// TODO:��ӡ�� matrixa �е����� 
	std::cout << matrixa.getCols();

	// TODO:ȡ�����ת�ò��ѽ���洢��
	//һ������ transposea �ı�����
	Matrix transposea = matrixa.matrix_transpose();

	// TODO:��ӡ�� transposea
	transposea.matrix_print();

	// ��������Ҫʹ����һ����Ϊ matrixb �� 7x5 ������ 
	//���� matrix_addition �����Ľ��

	// 7x5 ��ά��������ֵ��Ϊ 0.2
	std::vector <std::vector <float> >
		second_grid(7, std::vector <float>(5, 0.2));

	// TODO:ʵ����һ������ matrixb �Ķ���ʹ�� second_grid
	// ������Ϊ��ʼ�� matrixb ������
	Matrix matrixb(second_grid);

	// TOOD:matrixa �� matrixb ��ӡ�������洢��һ���µľ�����
	//������Ϊ matrixsum
	Matrix matrixsum(matrixa.matrix_addition(matrixb));

	// TODO:��ӡ�� matrixsum �����а����ľ���
	matrixsum.matrix_print();
	return 0;
}
