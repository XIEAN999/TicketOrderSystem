
//����״̬
#ifndef _STATUS_
#define _STATUS_
#define STATUS int
#define ERROR 0
#define SUCCESS 1
#endif
//���Խṹ��
#ifndef _TESTING_STRUCT_
#define _TESTING_STRUCT_
#include<string>
using std::string;
typedef struct student
{
    string name,job;
	int age;
} STU;
#define _INFO_FILE_PATH_  "./test.data"
#endif
//�ļ����غ���
#ifndef _FILE_LOADER_
#define _FILE_LOADER_
int load_data();
void wirte_info(const STU *,int);
#endif

//����ͼ�Ľṹ�������㷨
#ifndef _GRAPH_
#define _GRAPH_
#define _CITIES_TOTLAL_AMOUNT_ 20
#include<string>
using std::string;
typedef struct ArcCell
{
	int flight_number;
}ArcCell, AdjMatrix[_CITIES_TOTLAL_AMOUNT_][_CITIES_TOTLAL_AMOUNT_];
typedef struct 
{
	string cities[_CITIES_TOTLAL_AMOUNT_];
	AdjMatrix  arcs;

}Graph;
#endif
#define TRUE 1
#define FALSE 0
#define NULL 0//�����������Ľ��������




