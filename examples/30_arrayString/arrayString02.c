#include <stdio.h>

int main(void) {
	char szBuffer[32] = { 0 };
	int nLength = 0;

	//�̸��� �Է¹޾� �迭�� ����
	printf("Input your name: ");
	gets(szBuffer);

	//�迭�� ���ۺ��� '\0'�� ���� ������ ��� �������� �ѱ�� Ȯ���Ѵ�.
	while (szBuffer[nLength] != '\0') {
		nLength++;
	}
	
	//�̸��� ���ڿ��� ���̸� ����Ѵ�
	printf("�̸�: %s", szBuffer);
	printf("\n���ڿ��� ����: %d", nLength);

	return 0;
}