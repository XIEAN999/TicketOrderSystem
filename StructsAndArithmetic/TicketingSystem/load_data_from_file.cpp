#include <stdio.h>
#include "stdafx.h"
#include"defines.h"

STATUS load_data()
{
	FILE *fp;
	STU stu;
	fp=fopen(_INFO_FILE_PATH_,"rb");
	if(fp==NULL)
	{
		perror("�ļ���ʧ��");
	    return ERROR;
	}
	while(1==fread(&stu,sizeof(STU),1,fp))
	{
		printf("������Ϣ��%d,%s,%s",stu.age,stu.name,stu.job);
	}
	printf("����Ϊȫ����Ϣ");
	fclose(fp);
	return SUCCESS;
}

void wirte_info(const STU * stu,int len)
{
	FILE * fp;
	printf("д��׼��");
	int i=0;
	fp=fopen(_INFO_FILE_PATH_,"rb+");
	if(!fp)
	{
		fp=fopen(_INFO_FILE_PATH_,"wb+");
	}
	fseek(fp,0,SEEK_END);
	while(i<len)
	{
		fwrite(stu+i,sizeof(STU),1,fp);
	    i++;
	}
	fclose(fp);

}