#include<stdio.h>
#define NULL 0
//动态顺序表
typedef int DataType;
typedef struct Seqlist
{
	DataType* array;
	int size;//有效元素的个数 
	int capacity;//空间总大小 
 }Seqlist;
 //顺序表的初始化 
void SeqlistInit(Seqlist *ps,int capacity) 
{
	//要判断参数是否为空，容量要是正整数 
	if(ps==NULL)
	{
		saaert(0);
		return;
	}
	ps->capacity==capacity<=0?10:capacity; 
	//将ps所指向的Seqlist类型的结构体变量各个字段初始化
	//申请一段capacity大小空间
	//size
	ps->array=(DataType*)malloc(capacity*sizeof(Datatype));//申请空间 
	//ps->capicity=capacity; 
	ps->size=0;
}
 
//顺序表的销毁 
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

//尾插 
void SeqlistPushback(Seqlist *ps,DataType Data) 
{
	//判空 
	if(ps==NULL)
	{
		assert(0);
		return; 
	} 
	//检测容量：是否需要扩容 
	ps->array[ps->size]=Data;
	ps->size++; 
}


//尾删 
void SeqlistPopback(Seqlist *ps) 
{
	//ps指向的顺序表的结构体类型的变量是否存在 
	if(ps==NULL)
	{
		assert(0);
		return; 
	}
	//顺序表为空：顺序表存在，知识顺序表中没有有效元素
	if(ps->size==0)
	{
		return;
	} 
	ps->size--; 
}



//头插 
void SeqlistPushfront(Seqlist *ps,DataType Data)  
{
	if(ps==NULL)
	{
		assert(0);
		return; 
	}
	//检测是否需要扩容
	//插入元素
	//1.将顺序表中所有的元素整体后移一位（从最后一个元素开始） 
	for(int i=ps->size-1;i>=0;i--) 
	{
		ps->array[i+1]=ps->array[i]; 
	}
	//2.将元素插入 
	ps->array[0]=Data;
	ps->size++;//容量加1 
}

//头删 
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
	//方法：将0号位置的 所有元素向前移动一位
	for(int i=1;i<ps->size;i++)
	{
		ps->array[i-1]==ps->array[i]; 
		ps->size--;
	} 
} 
//任意位置的插入 
void SeqlistInsert(Seqlist *ps,int pos,DataType Data)  




//任意位置的删除 
void SeqlistErase(Seqlist *ps,int pos) 



//查找,返回该元素的下标 
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
//检测顺序表中的有效元素是否为空 
int SeqlistEmpty(Seqlist*ps) 
{
	return ps->size==0;
}
//清空表 
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





