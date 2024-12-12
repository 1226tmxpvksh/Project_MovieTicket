#include <stdio.h>
#include "idpw.h"


extern member user[10];

void file()
{
	FILE* fp;

	fp = fopen("MemberList.txt", "at");
	if (fp == NULL)
	{
		printf("파일열기 실패");
		exit();
	}
	fprintf(fp, "%s %s %s %d\n", user[order].id, user[order].pw, user[order].name, &user[order].age);


	fclose(fp);
	order++;

}

void set_ifo()
{
	FILE* fp = fopen("MemberList.txt", "rt");
	FILE* fp_s;
	fp_s = fopen("seat.txt", "rt");

	int a = 0;

	while (!feof(fp))
	{
		fscanf(fp, "%s %s %s %d \n", user[a].id, user[a].pw, user[a].name, &user[a].age);

		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				fscanf(fp_s, "%d", &user[user_num].seat[i][j]);
			}
		}
		fscanf(fp_s, "\n");
		a++;
	}
	order = a;

	fclose(fp);
	fclose(fp_s);
}

void seat_file() {
	FILE* fp;

	fp = fopen("seat.txt", "at");
	if (fp == NULL)
	{
		printf("파일열기 실패");
		exit();
	}
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			fprintf(fp, "%d ", user[user_num].seat[i][j]);
		}
	}
	fprintf(fp, "\n");

	fclose(fp);
}