#include<stdio.h>
#define NULL 0
//��̬˳���
typedef int DataType;
typedef struct Seqlist
{
	DataType* array;
	int size;//��ЧԪ�صĸ��� 
	int capacity;//�ռ��ܴ�С 
 }Seqlist;
 //˳���ĳ�ʼ�� 
void SeqlistInit(Seqlist *ps,int capacity) 
{
	//Ҫ�жϲ����Ƿ�Ϊ�գ�����Ҫ�������� 
	if(ps==NULL)
	{
		saaert(0);
		return;
	}
	ps->capacity==capacity<=0?10:capacity; 
	//��ps��ָ���Seqlist���͵Ľṹ����������ֶγ�ʼ��
	//����һ��capacity��С�ռ�
	//size
	ps->array=(DataType*)malloc(capacity*sizeof(Datatype));//����ռ� 
	//ps->capicity=capacity; 
	ps->size=0;
}
 
//˳�������� 
void SeqlistDestroy(Seqlist *ps) 
{
	if(ps)
	{
		free(ps->array)
		ps->array=NULL;
		ps->capacity=0;
		ps->size=0; 
	}
} 

//β�� 
void SeqlistPushback(Seqlist *ps,DataType Data) 
{
	//�п� 
	if(ps==NULL)
	{
		assert(0);
		return; 
	} 
	//����������Ƿ���Ҫ���� 
	ps->array[ps->size]=Data;
	ps->size++; 
}


//βɾ 
void SeqlistPopback(Seqlist *ps) 
{
	//psָ���˳���Ľṹ�����͵ı����Ƿ���� 
	if(ps==NULL)
	{
		assert(0);
		return; 
	}
	//˳���Ϊ�գ�˳�����ڣ�֪ʶ˳�����û����ЧԪ��
	if(ps->size==0)
	{
		return;
	} 
	ps->size--; 
}



//ͷ�� 
void SeqlistPushfront(Seqlist *ps,DataType Data)  
{
	if(ps==NULL)
	{
		assert(0);
		return; 
	}
	//����Ƿ���Ҫ����
	//����Ԫ��
	//1.��˳��������е�Ԫ���������һλ�������һ��Ԫ�ؿ�ʼ�� 
	for(int i=ps->size-1;i>=0;i--) 
	{
		ps->array[i+1]=ps->array[i]; 
	}
	//2.��Ԫ�ز��� 
	ps->array[0]=Data;
	ps->size++;//������1 
}

//ͷɾ 
void SeqlistPopfront(Seqlist *ps) 
{ 
	if(ps==NULL)
	{
		assert(0);
		return; 
	}
	if(ps->size==0){
		return;
	}
	//��������0��λ�õ� ����Ԫ����ǰ�ƶ�һλ
	for(int i=1;i<ps->size;i++)
	{
		ps->array[i-1]==ps->array[i]; 
		ps->size--;
	} 
} 
//����λ�õĲ��� 
void SeqlistInsert(Seqlist *ps,int pos,DataType Data)  




//����λ�õ�ɾ�� 
void SeqlistErase(Seqlist *ps,int pos) 



//����,���ظ�Ԫ�ص��±� 
int SeqlistFind(Seqlist*ps,DataType Data)
{
	if(ps==NULL)
	{
		assert(0);
		return -1; 
	}	
	for(int i=0;i<ps->size;++i)
	{
		if(ps->array[i]==Data){ 
		return i;
		} 
		return -1; 
	}
}
//���˳����е���ЧԪ���Ƿ�Ϊ�� 
int SeqlistEmpty(Seqlist*ps) 
{
	return ps->size==0;
}
//��ձ� 
void SeqlistClear(Seqlist*ps,DataType Data) 
{
	ps->size=0;
}

int main()
{
	Seqlist s;
	SeqlistInit(&s,10);
	SeqlistPushback(&s,1);
	return 0;
	
}





