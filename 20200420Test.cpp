#include <iostream>
using namespace std;


/*
// C�����еĽṹ�����ǲ��ܷź�����
// ������̣����� �� �������ݵķ������뿪��
struct Student
{
	void InitStudent(struct Student* ps, char* name, char* gender, int age)
	{}

	char* name;
	char* gender;
	int age;
};
*/

#if 0

// C++��Ҳ�нṹ��---��ΪC++Ҫ����C����
// C++�ṹ���п��Զ��庯��
// ��Student�ṹ��������ѧ����Ϣ
// Student����һ�������ѧ��

// ��struct����һ����--ѧ����
// ��class����һ����--ѧ����
// �ࣺ����һ�������ʵ�壬���ǶԸ�ʵ�������
// Student����һ�������ѧ�������Ƕ�Ⱥ��Ⱥ���һ������

// ��Ķ��巽ʽһ���ǽ���������붨��ȫ���������н��ж���
class Student
{
	void InitStudent(char* name, char* gender, int age)
	{
		strcpy(_name, name);
		strcpy(_gender, gender);
		_age = age;
	}

	void PrintStudent()
	{
		cout << _name << "-" << _gender << "-" << _age << endl;
	}

	char _name[20];
	char _gender[3];
	int _age;
};


/*
���ֶ��巽ʽ������
1. �����Ͷ���ֿ�---��Ա���������ⶨ��ʱ������Ҫ�ڳ�Ա������ǰ�ӣ�����::
2. ��������Ͷ���ȫ����������---���������ܻὫ��Ա����������������
3. һ�������-�����齫�����Ͷ���ֿ�--Ϊ�˷�ֹ�ظ�����
*/


int main()
{
	// Student���Ǿ����ѧ������ֻ�����Ƕ�ѧ����һ������
	// Student._age = 10;

	// ��Student�ṹ�嶨������Ľṹ�����͵ı���--->����Ϊһ�������ѧ��
	// ��Student��������ı���--->��Ϊֻ���󣬶��������һ��������ʵ��
	Student s1,s2,s3;
	/*
	s1.InitStudent("Peter", "��", 30);
	s2.InitStudent("����", "Ů", 31);
	s3.InitStudent("Summer", "��", 2);

	s1.PrintStudent();
	s2.PrintStudent();
	s3.PrintStudent();
	*/

	// InitSutdent(&s1, "Peter", "��", 30);
	// PrintStudent(&s1);
	return 0;
}
#endif


#if 0
// �����޶���
// ������󣺷�װ  �̳�  ��̬

//  ��װ�������ݺͲ������ݵķ��������л���ϣ����ض�������Ժ�ʵ��ϸ�ڣ������⹫���ӿ����Ͷ�����н���
// C++�У�ͨ���ཫ���ݺͲ������ݵķ�����װ����
// ʹ�÷���Ȩ�ޣ���������Щ�����������ⲿֱ�ӱ����е���
// �����޶����޶����Ǹó�Ա�Ƿ��ܹ�������ֱ�ӱ�ʹ�ã������з���û������

class Student
{
public:// ��Ҫ�����ⱻֱ�ӵ��ã����ò��ֳ�Ա�ķ���Ȩ������Ϊpublic
	void InitStudent(char* name, char* gender, int age)
	{
		strcpy(_name, name);
		strcpy(_gender, gender);
		_age = age;
	}

	void PrintStudent()
	{
		cout << _name << "-" << _gender << "-" << _age << endl;
	}

private:
	char _name[20];
	char _gender[3];
protected:
	int _age;
};


int main()
{
	Student s1, s2, s3;
	s1.InitStudent("Peter", "��", 30);
	s2.InitStudent("����", "Ů", 31);
	s3.InitStudent("Summer", "��", 2);

	s1.PrintStudent();
	s2.PrintStudent();
	s3.PrintStudent();

	// cout << s1._name << endl;
	cout << s1._age << endl;
	return 0;
}

#endif

#if 0
// һ�������һ��������
// C++������ȫ��������  �������еľֲ�������  �����ռ�  ����

void TestFunc()
{}

namespace N
{
	void TestFunc(int)
	{}
}

class Test
{
public:
	void TestFunc(double)
	{}

};

// TestFunc�����ڲ�ͬ����������˲��Ǻ�������
int main()
{
	TestFunc();
	N::TestFunc(10);

	Test t;
	t.TestFunc(12.34);
	return 0;
}
#endif

#if 0
// ��Ա����---�൱�������Ա������ȫ�ֱ���---��Ϊÿ��"��Ա����"�ж�����ֱ��ʹ��
// ע�⣺��ȫ�ֱ�����΢�е�����ȫ�ֱ�����ʹ��ǰҪ�ȶ��壬����Ա����û�д�Ҫ��Ϊʲô��
class Student
{
public:// ��Ҫ�����ⱻֱ�ӵ��ã����ò��ֳ�Ա�ķ���Ȩ������Ϊpublic
	void InitStudent(char* name, char* gender, int age)
	{
		strcpy(_name, name);
		strcpy(_gender, gender);
		_age = age;
	}

	void PrintStudent()
	{
		cout << _name << "-" << _gender << "-" << _age << endl;
	}

private:
	char _name[20];
	char _gender[3];
protected:
	int _age;
};

// ��C�����У�һ�������ڱ�ʹ��֮ǰ�����ȶ���,����ͻ����ʧ��

 int g_a = 10;

int main()
{
	cout << g_a << endl;
	return 0;
}

// int g_a = 10;---�������ʹ��֮���壬����ʧ��
#endif

#if 0
class Student
{
public:// ��Ҫ�����ⱻֱ�ӵ��ã����ò��ֳ�Ա�ķ���Ȩ������Ϊpublic
	void InitStudent(char* name, char* gender, int age)
	{
		strcpy(_name, name);
		strcpy(_gender, gender);
		_age = age;
	}

	void PrintStudent()
	{
		cout << _name << "-" << _gender << "-" << _age << endl;
	}

	char _name[20];
	char _gender[3];
	int _age;
};

/*
// ���������ֻ֪������Ҫʲô���ӵı���

�ң��ϰ�������--����                ���ʦ�����������������ͼֽ����ͼֽ---����Ա
�������������߶ȸ����ʦ�����ʦ���������������ͼֽ

���������ͼֽ(������������)-----ע�����ͼֽ������ס��----->�뽳���Ƿ�������----->�Ż��γ�һ�����������ı���(����ס�˵�)

   ��(������������)--->����ֱ��ʹ����"��Ա"-----> ʵ����---> ���������Ķ��󣨶����вſ��Է����ݣ�
*/


// ��μ���һ����Ĵ�С��
// ����Ҫ֪��һ�����а�����ʲô��

int main()
{
	Student s1, s2, s3;
	
	s1.InitStudent("Peter", "��", 30);
	s2.InitStudent("����", "Ů", 31);
	s3.InitStudent("Summer", "��", 2);

	s1.PrintStudent();
	s2.PrintStudent();
	s3.PrintStudent();

	cout << sizeof(Student) << endl;
	return 0;
}
#endif

#if 0
// 4
class A
{
public:
	void funa()
	{}

	int a;
};


// 1
class B
{
public:
	void funb()
	{}
};


// 1
class C    // ����
{};


//  ΪʲôB��C�Ĵ�Сvs��������1��

int main()
{
	C c1, c2, c3;

	cout << sizeof(A) << endl;
	cout << sizeof(B) << endl;
	cout << sizeof(C) << endl;

	return 0;
}
#endif

#if 0
// C�����ж����ѧ���ṹ��
struct Student
{
	char name[20];
	char gender[3];
	int age;
};

// �������ѧ���ṹ��ķ���
void InitStudent(Student* pthis, char* name, char* gender, int age)
{
	strcpy(pthis->name, name);
	strcpy(pthis->gender, gender);
	pthis->age = age;
}

void PrintStudent(Student* pthis)
{
	printf("%s-%s-%d\n", pthis->name, pthis->gender, pthis->age);
}

int main()
{
	Student s1, s2, s3;
	InitStudent(&s1, "Peter", "��", 30);
	InitStudent(&s2, "����", "Ů", 31);
	InitStudent(&s3, "Summer", "��", 2);

	PrintStudent(&s1);
	PrintStudent(&s2);
	PrintStudent(&s3);
	return 0;
}
#endif


#if 0
// C++Ҳ�ǰ���������ʽ�����
class Student
{
public:// ��Ҫ�����ⱻֱ�ӵ��ã����ò��ֳ�Ա�ķ���Ȩ������Ϊpublic
	// �������ú�����������ʱ��ʵ���ϸú�����4�����������б�����Ϊ�����ӵ����ص�thisָ��
	void InitStudent(char* _name, char* gender, int age)
	{
		// thisָ�����ͣ�Student* const this;
		//this = nullptr;
		//cout << this << endl;

		strcpy(this->_name, _name);
		strcpy(this->_gender, gender);
		this->_age = age;
	}

	/*
	1. ����Ա�����������ص�thisָ��
	2. ����"��Ա����ǰ����this->"
	void InitStudent(Student* const this, char* name, char* gender, int age)
	{
		strcpy(this->_name, name);
		strcpy(this->_gender, gender);
		this->_age = age;
	}
	*/

	// �������ú���û�в�ʱ��ʵ���ϸú�����1�����������б�����Ϊ�����ӵ����ص�thisָ��
	void PrintStudent()
	{
		cout << this << endl;
		cout << _name << "-" << _gender << "-" << _age << endl;
	}

	/*
	void PrintStudent(Student* const this)
	{
		cout << this->_name << "-" << this->_gender << "-" << this->_age << endl;
	}
	*/

	// ��������-----ssp:29��
	// ����������Ա����thisָ�봫�ݷ�ʽ---����ѹջ
	void TestFunc(...)
	{}

private:
	char _name[20];
	char _gender[3];
	int _age;
};

Student* ps;
int main()
{
	Student s1, s2, s3;

	ps = &s1;

	s1.TestFunc(10);
	s2.TestFunc(10, 20);

	s1.InitStudent("Peter", "��", 30);
	s2.InitStudent("����", "Ů", 31);
	s3.InitStudent("Summer", "��", 2);

	s1.PrintStudent();
	s2.PrintStudent();
	s3.PrintStudent();

	// thisָ��ֻ�ܹ��ڳ�Ա�����н���ʹ��
	// cout << this << endl;
	return 0;
}
#endif

#if 0
class Student
{
public:
	void InitStudent(char* _name, char* gender, int age)
	{
		strcpy(this->_name, _name);
		strcpy(this->_gender, gender);
		this->_age = age;
	}

	// �������ú���û�в�ʱ��ʵ���ϸú�����1�����������б�����Ϊ�����ӵ����ص�thisָ��
	void PrintStudent()
	{
		cout << this << endl;
		// cout << this->_name << "-" << _gender << "-" << _age << endl;
	}

private:
	char _name[20];
	char _gender[3];
	int _age;
};

int main()
{
	Student s;
	s.InitStudent("Peter", "��", 30);
	s.PrintStudent();

	Student* ps = &s;
	ps->PrintStudent();

	ps = nullptr;
	ps->PrintStudent();

	return 0;
}
#endif

#if 0
class Date
{
public:
	Date(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
		cout << "Date(int,int,int):" << this << endl;
	}

	Date(int year)
	{
		_year = year;
		_month = 1;
		_day = 1;
	}

	void SetDate(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}

	void PrintDate()
	{
		cout << _year << "/" << _month << "/" << _day << endl;
	}

private:
	int _year;
	int _month;
	int _day;
};


void TestDate()
{
	// �ڴ��������ڼ䣬�ܷ񽫶����ʼ����
	Date d1(2020, 4, 25);
	//d.SetDate(2020, 4, 25);
	d1.PrintDate();

	Date d2(2020);
	d2.PrintDate();
}

int main()
{
	TestDate();
	return 0;
}
#endif


#if 0
// ����û�û����ʽ����ʱ���������ͻ�����һ���޲ε�Ĭ�Ϲ��캯��
class Time
{
public:
	Time()
	{
		_hour = 0;
		_minute = 0;
		_second = 0;
	}

private:
	int _hour;
	int _minute;
	int _second;
};


class Date
{
public:
	// �û���ʽ������һ���������������Ĺ��캯��
	Date(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
		cout << "Date(int,int,int):" << this << endl;
	}

	void SetDate(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}

	void PrintDate()
	{
		cout << _year << "/" << _month << "/" << _day << endl;
	}

private:
	int _year;
	int _month;
	int _day;

	Time _t;
};

int main()
{
	Date d;

	// ͨ������Ļ����룺
	// lea         ecx, [d]
	// call        Date::Date(0251357h): �ڴ�������d�ڼ�ȷʵ���ù��캯��
	return 0;
}
#endif


#if 0
// Ĭ�ϵĹ��캯����
// 1. �û�������޲ι��캯��
// 2. �û��������ȫȱʡ�Ĺ��캯��---���в���������Ĭ��ֵ
// 3. ����û�û����ʽ�����κι��캯�������������Զ�����һ���޲εĹ��캯��
// Ĭ�ϵĹ��캯����ֻ�ܴ���һ��
class Date
{
public:
	Date()
	{
		_year = 1970;
		_month = 1;
		_day = 1;
	}

	// ȫȱʡ�Ĺ��캯��
	Date(int year, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
		cout << "Date(int,int,int):" << this << endl;
	}

	void PrintDate()
	{
		cout << _year << "/" << _month << "/" << _day << endl;
	}

private:
	int _year;
	int _month;
	int _day;
};

int main()
{
	Date d1(2020, 4, 25);
	Date d2;
	Date d3(2020);
	return 0;
}
#endif

#include <malloc.h>
#include <assert.h>


typedef int DataType;

class SeqList
{
public:
	SeqList(size_t capacity = 10)
	{
		_capacity = 0 == capacity ? 10 : capacity;
		_array = (int*)malloc(sizeof(DataType)*_capacity);
		if (nullptr == _array)
		{
			assert(false);
			_capacity = 0;
			return;
		}

		_size = 0;
		cout << "SeqList(size_t):" << this << endl;
	}

	// ��������������������ʱ���ɱ������Զ����е��ã����ã���ɶ�������Դ��������
	~SeqList()
	{
		if (_array)
		{
			free(_array);
			_array = nullptr;
			_capacity = 0;
			_size = 0;
		}
	}

	~SeqList(int)
	{}

	void PushBack(const DataType& data)
	{
		// _CheckCapacity();
		_array[_size++] = data;
	}

	void PopBack()
	{
		if (Empty())
			return;

		_size--;
	}

	size_t Size()
	{
		return _size;
	}

	size_t Capacity()
	{
		return _capacity;
	}

	bool Empty()
	{
		return 0 == _size;
	}

	// .......
	// ����
	void PrintSeqList()
	{
		for (size_t i = 0; i < _size; ++i)
		{
			cout << _array[i] << " ";
		}
		cout << endl;
	}
private:
	DataType* _array;
	size_t _capacity;
	size_t _size;
};


void TestSeqList()
{
	SeqList s;
	s.PushBack(1);
	s.PushBack(2);
	s.PushBack(3);
	s.PushBack(4);

	cout << s.Size() << endl;
	cout << s.Capacity() << endl;

	s.PopBack();
	s.PrintSeqList();
}

int main()
{
	TestSeqList();
	return 0;
}