#include <stdio.h>
#include "idpw.h"
#include "file.h"

void idpw()
{
	int menu;

	while (1)
	{
		printf("1.ȸ������\n2.�α���\n3.����\n");
		printf("�޴��� �����Ͻʽÿ�:");
		scanf_s("%d", &menu);

		if (menu == 1)
		{
			memberjoin();
			continue;
		}
		else if (menu == 2)
		{
			login();
			break;
		}

		else if (menu == 3)
		{
			exit();
		}
		else
		{
			printf("1����3���� �Է��ϼ���");
		}

	}
}

int memberjoin()
{
	int menu;
	int condition = 1;
	while (condition)
	{
		condition = 0;
		printf("ȸ������\n");
		printf("ID:");
		scanf("%s", &user[order].id);
		printf("PW:");
		scanf("%s", &user[order].pw);
		printf("�̸�:");
		scanf("%s", &user[order].name);
		printf("����:");
		scanf("%s", &user[order].age);
		for (int j = 0; j < order; j++)
		{
			if (strcmp(user[order].id, user[j].id) == 0)
			{
				printf("���̵� �ߺ��Ǿ����ϴ�\n");
				condition = 1;
				break;
			}
		}
	}
	file();
	idpw();
}