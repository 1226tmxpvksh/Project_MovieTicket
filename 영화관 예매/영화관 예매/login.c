#include <stdio.h>
#include "login.h"
#include "idpw.h"
#include "reservation.h"
#include "cancel.h"

void login()      //�α��� �κ�
{
	char id[10];
	char pw[10];
	int condition = 0;
	while (1)
	{
		printf("�α���\n");
		printf("���̵� �Է��Ͻÿ�: ");
		scanf("%s", id);
		printf("��й�ȣ�� �Է��Ͻÿ�: ");
		scanf("%s", pw);

		for (int j = 0; j < 10; j++)
		{
			if (strcmp(user[j].id, id) == 0 && strcmp(user[j].pw, pw) == 0)
			{
				condition = 1;
				user_num = j; //������ ����� �������� �Ǵ�
			}
			else if (strcmp(user[j].id, id) != 0)
			{
			}
			else if (strcmp(user[j].pw, pw) != 0)
			{
			}
		}
		if (condition == 1)
		{
			printf("�α��� ����\n");
			select();
			break;
		}
		else if (condition == 0)
		{
			printf("�α��� ����\n");
			continue;
		}
	}
}

void select()
{
	while (1)
	{

		int menu;

		printf("1.����\n2.�¼�����\n3.���\n4.����\n�޴��������Ͻÿ�: ");
		scanf_s("%d", &menu);
		printf("\n");

		if (menu == 1)
		{
			reservation();
			continue;
		}
		else if (menu == 2)
		{
			seats();
			continue;
		}
		else if (menu == 3)
		{
			cancel();
			continue;
		}

		else if (menu == 4)
		{
			idpw();
		}
		else
		{
			printf("1������ 4���� �Է��Ͻʽÿ�\n");
			continue;

		}
		break;
	}
}