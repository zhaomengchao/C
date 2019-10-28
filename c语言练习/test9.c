#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct subway//����һ���ṹ�� 
{
	char num[10];
	char line[20];//��· 
	char sstation[20];//��ʼվ 
	char ostation[20];//�յ�վ 
	char charge[20];//Ʊ�� 
	struct subway* next;
	
}subway;//��typedef���ṹ�������subway; 
subway*createsubwaylist()//�������� 
{
	subway*head;
	head=(subway*)malloc(sizeof(subway));//��������ռ� 
	head->next=NULL;//ָ����һ���ڵ��ָ�� 
	return head;
}
void insert(subway *head)//���뺯�� 
{
	subway *b,*p;
	char flag='y';
	p=head;
	while(p->next!=NULL)//�ƶ�ָ�� 
	{
		p=p->next;
	}
	while(flag=='y')//������Ҫ�Ƿ���Ҫ������� 
	{
		b=(subway*)malloc(sizeof(subway));
		printf("�������ţ�"); 
		scanf("%s",b->num);
		printf("�����������·��");
		scanf("%s",b->line);
		printf("��������ʼվ��");
		scanf("%s",b->sstation);
		printf("�������յ�վ��");
		scanf("%s",b->ostation);
		printf("������Ʊ�ۣ�");
		scanf("%s",b->charge);
		p->next=b;
		p=b;
		b->next=NULL;
		printf("��ӳɹ���\n������ӣ�(y/n)\n");
		fflush(stdin);
		scanf("%c",&flag);
		if(flag=='n')
			break;
		else if(flag=='y')
			continue;
		
		 
	}
	return ;
}

void Delete(subway *head)//ɾ������ 
{
	subway *q,*p;
	char s[30];
	int flag;
	
	flag=0;
	q=head;
	p=head->next;
	printf("������Ҫɾ���ĵ�����·��");//ͨ��������·��������Ϣ 
	fflush(stdin);
	scanf("%s",s);
	
	while(p!=NULL)
	{
		
		if(strcmp(p->line,s)==0)//����������Ӧ�洢�ļ� 
		{
			flag=1;
			break;
		}
		q=p;
		p=p->next;
	
	}	
	if(flag==1)
	{
		q->next=p->next;
		free(p);
		printf("ɾ���ɹ���\n"); 
	}
	else
		printf("����ʧ�ܣ�");
	return;
}
void Print(subway*head)//�洢��Ϣ����� 
{
	subway *p;
	if(head==NULL || head->next==NULL)//�п� 
	{
		printf("û�м�¼���ڣ�\n");
		return;
	}
	p=head;
	printf("�����������ţ���·����ʼվ���յ�վ��Ʊ��\n");
	while(p->next!=NULL)
	{
		p=p->next;
		printf("%s %s %s %s %s\n",p->num,p->line,p->sstation,p->ostation,p->charge);
	}
	return ;
}
void Search(subway*head)//���� 
{
	subway *p;
	char s[30];
	int flag=0;
	p=head;
	if(head==NULL || head->next==NULL)
		printf("�嵥Ϊ�գ�\n");
	else
	{
		printf("�����������·��");//ͨ��������·���� 
		scanf("%s",s);
		while(p->next!=NULL)
		{
			p=p->next;
			if(strcmp(p->line,s)==0)
			{
				flag=1;
				printf("��ţ�%s\n��·�� %s\n��ʼվ�� %s\n�յ�վ�� %s\nƱ�ۣ� %s\n",p->num,p->line,p->sstation,p->ostation,p->charge);
				return;
			}
			if(p->next == NULL) 
				printf("\n��ѯ��ϣ�"); 
			 	
		}
		if(flag==0)
			printf("û���ҵ�[%s]!\n",s); 
		
	}
	return;
}
void Update(subway*head)//��Ϣ�ĸ��� 
{
	subway*p;
	int flag=0;
	char s[30];
	p=head;
	printf("�����������·��");
	scanf("%s",s);
	while(p->next!=NULL)
	{
		p=p->next;
		if(strcmp(p->line,s)==0)
		{
			flag=1;
			printf("�������ţ�"); 
			scanf("%s",p->num);
			printf("�����������·��");
			scanf("%s",p->line);
			printf("��������ʼվ��");
			scanf("%s",p->sstation);
			printf("�������յ�վ��");
			scanf("%s",p->ostation);
			printf("������Ʊ�ۣ�");
			scanf("%s",p->charge);
		}
	}
	if(flag==0)
		printf("û���ҵ�[%s]!\n",s);
	return;
}
int menu()//���˵� 
{
	int n;
	printf("   ��������ϵͳ   \n");
	printf("------------------\n");
	printf("1.������Ϣ��¼��\n");
	printf("2.������Ϣ�����\n");
	printf("3.������Ϣ�Ĳ�ѯ\n");
	printf("4.������Ϣ�ĸ���\n");
	printf("5.������Ϣ��ɾ��\n");
	printf("6.�˳�\n");
	printf("------------------\n");
	printf("������ѡ����ţ�\n");
	scanf("%d",&n);
	while(n<0 || n>6)
	{
		printf("�������\n");
		scanf("%d",&n);
	}
	return n;
}
int main()
{
	subway*head;
	int m;
	head=NULL;
	for(;;)
	{
		m=menu();
		switch(m)
		{
			case 1:
				if(head==NULL)
					head=createsubwaylist();
				insert(head);
				break;
			case 2:
				Print(head);
				break;
			case 3:
				Search(head);
				break;
			case 4:
				Update(head);
				break;
			case 5:
				Delete(head);
				break;
			case 6:
				exit(0);
				break;
			default:
				break;
		}
	}
	return 0;
	
}
