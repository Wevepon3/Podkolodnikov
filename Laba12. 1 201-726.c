#include <stdio.h>
#include <math.h>
void sortb(int* m, int n)
{
	int tmp, k;
	while (n > 1) { // ������ ��������, �� ���� �� ����������� 
		k = 0; // ��� ������������
		for (int i = 1; i < n; ++i) {
			if (m[i] / 10 < m[i - 1] / 10) {
				tmp = m[i - 1];
				m[i - 1] = m[i];
				m[i] = tmp;
				k = i; // � � ����� ��������� �������������� �������
			}
		}
		n = k; // � k ��� �������������
	}
}