#include <stdio.h>

int main(int argc, char* argv[]) {
	//��ü ��쿡 ���� ���ݷ� ����� ���� �迭�� ���� �� ����
	double rate[10] = {
		0.0, 0.1, 0.25,	//1~3�� 0%, 10%, 25%
		0.5, 0.5,		//4~5�� 50%
		0.6, 0.65,		//6~7�� 60%, 65%
		0.8, 0.82, 0.97	//8~10�� 80%, 82%, 97%
	};

	int age = 0, i = 0, free = 1000;

	//���ǥ�� ����Ѵ�.
	printf("���ǥ\n");
	for (i = 1; i <= 10; i++)
	{
		printf("%d�� ���: \t%d��\n", i, (int)(free * rate[i - 1]));
	} putchar('\n');

	//���̸� �Է¹ް� �迭 �ε��� ���� ���η� ���� ���� �����Ѵ�.
	printf("���̸� �Է��ϼ���: ");
	scanf_s("%d", &age);
	if (age < 1) age = 1;
	else if (age > 10) age = 10;

	//���̿� �´� �迭��Ҹ� �����ϰ� ���ٸ� ��� ���� ��� ���� ����Ѵ�.
	printf("�������: %d��\n", (int)(free * rate[age-1]));
	putchar('\n');
	return 0;
}