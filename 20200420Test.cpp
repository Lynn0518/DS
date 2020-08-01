#include <iostream>
using namespace std;


/*
// C语言中的结构体中是不能放函数的
// 面向过程：数据 和 操作数据的方法分离开的
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

// C++中也有结构体---因为C++要兼容C语言
// C++结构体中可以定义函数
// 用Student结构体来描述学生信息
// Student不是一个具体的学生

// 用struct定义一个类--学生类
// 用class定义一个类--学生类
// 类：不是一个具体的实体，它是对该实体的描述
// Student不是一个具体的学生，它是对群生群体的一种描述

// 类的定义方式一：是将类的声明与定义全部放在类中进行定义
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
两种定义方式的区别：
1. 声明和定义分开---成员函数在类外定义时，必须要在成员函数名前加：类名::
2. 如果声明和定义全部放在类中---编译器可能会将成员函数当成内联函数
3. 一般情况下-都建议将声明和定义分开--为了防止重复包含
*/


int main()
{
	// Student不是具体的学生，它只不过是对学生的一种描述
	// Student._age = 10;

	// 用Student结构体定义出来的结构体类型的变量--->称作为一个具体的学生
	// 用Student定义出来的变量--->称为只对象，对象才算是一个真正的实体
	Student s1,s2,s3;
	/*
	s1.InitStudent("Peter", "男", 30);
	s2.InitStudent("静静", "女", 31);
	s3.InitStudent("Summer", "公", 2);

	s1.PrintStudent();
	s2.PrintStudent();
	s3.PrintStudent();
	*/

	// InitSutdent(&s1, "Peter", "男", 30);
	// PrintStudent(&s1);
	return 0;
}
#endif


#if 0
// 访问限定符
// 面向对象：封装  继承  多态

//  封装：将数据和操作数据的方法进行有机结合，隐藏对象的属性和实现细节，仅对外公开接口来和对象进行交互
// C++中：通过类将数据和操作数据的方法包装起来
// 使用访问权限：来控制那些方法可以再外部直接被进行调用
// 访问限定符限定的是该成员是否能够在类外直接被使用，对类中访问没有限制

class Student
{
public:// 想要在类外被直接调用，将该部分成员的访问权限设置为public
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
	s1.InitStudent("Peter", "男", 30);
	s2.InitStudent("静静", "女", 31);
	s3.InitStudent("Summer", "公", 2);

	s1.PrintStudent();
	s2.PrintStudent();
	s3.PrintStudent();

	// cout << s1._name << endl;
	cout << s1._age << endl;
	return 0;
}

#endif

#if 0
// 一个类就是一个作用域
// C++作用域：全局作用域  函数体中的局部作用域  命名空间  类域

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

// TestFunc隶属于不同的作用域，因此不是函数重载
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
// 成员变量---相当于是类成员函数的全局变量---因为每个"成员函数"中都可以直接使用
// 注意：和全局变量稍微有点区别，全局变量在使用前要先定义，而成员变量没有此要求，为什么？
class Student
{
public:// 想要在类外被直接调用，将该部分成员的访问权限设置为public
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

// 在C语言中：一个变量在被使用之前必须先定义,否则就会编译失败

 int g_a = 10;

int main()
{
	cout << g_a << endl;
	return 0;
}

// int g_a = 10;---如果放在使用之后定义，编译失败
#endif

#if 0
class Student
{
public:// 想要在类外被直接调用，将该部分成员的访问权限设置为public
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
// 建造别墅：只知道我想要什么样子的别墅

我：老板提需求--别墅                设计师：根据描述画出设计图纸画出图纸---程序员
将别墅的描述高度给设计师，设计师根据描述画出设计图纸

别墅的设计图纸(用来描述别墅)-----注意设计图纸还不能住人----->请匠人是否来建造----->才会形成一栋真真正正的别墅(可以住人的)

   类(用来描述对象)--->不能直接使用其"成员"-----> 实例化---> 真真正正的对象（对象中才可以放数据）
*/


// 如何计算一个类的大小？
// 必须要知道一个类中包含有什么？

int main()
{
	Student s1, s2, s3;
	
	s1.InitStudent("Peter", "男", 30);
	s2.InitStudent("静静", "女", 31);
	s3.InitStudent("Summer", "公", 2);

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
class C    // 空类
{};


//  为什么B和C的大小vs给出的是1？

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
// C语言中定义的学生结构体
struct Student
{
	char name[20];
	char gender[3];
	int age;
};

// 定义操作学生结构体的方法
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
	InitStudent(&s1, "Peter", "男", 30);
	InitStudent(&s2, "静静", "女", 31);
	InitStudent(&s3, "Summer", "公", 2);

	PrintStudent(&s1);
	PrintStudent(&s2);
	PrintStudent(&s3);
	return 0;
}
#endif


#if 0
// C++也是按照上述方式来玩的
class Student
{
public:// 想要在类外被直接调用，将该部分成员的访问权限设置为public
	// 看起来该函数有三个参时，实际上该函数有4个参数，还有编译器为其增加的隐藏的this指针
	void InitStudent(char* _name, char* gender, int age)
	{
		// this指针类型：Student* const this;
		//this = nullptr;
		//cout << this << endl;

		strcpy(this->_name, _name);
		strcpy(this->_gender, gender);
		this->_age = age;
	}

	/*
	1. 给成员函数增加隐藏的this指针
	2. 所有"成员变量前增加this->"
	void InitStudent(Student* const this, char* name, char* gender, int age)
	{
		strcpy(this->_name, name);
		strcpy(this->_gender, gender);
		this->_age = age;
	}
	*/

	// 看起来该函数没有参时，实际上该函数有1个参数，还有编译器为其增加的隐藏的this指针
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

	// 不定参数-----ssp:29万
	// 不定参数成员函数this指针传递方式---参数压栈
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

	s1.InitStudent("Peter", "男", 30);
	s2.InitStudent("静静", "女", 31);
	s3.InitStudent("Summer", "公", 2);

	s1.PrintStudent();
	s2.PrintStudent();
	s3.PrintStudent();

	// this指针只能够在成员函数中进行使用
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

	// 看起来该函数没有参时，实际上该函数有1个参数，还有编译器为其增加的隐藏的this指针
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
	s.InitStudent("Peter", "男", 30);
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
	// 在创建对象期间，能否将对象初始化好
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
// 如果用户没有显式定义时，编译器就会生成一个无参的默认构造函数
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
	// 用户显式定义了一个带有三个参数的构造函数
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

	// 通过背后的汇编代码：
	// lea         ecx, [d]
	// call        Date::Date(0251357h): 在创建对象d期间确实调用构造函数
	return 0;
}
#endif


#if 0
// 默认的构造函数：
// 1. 用户定义的无参构造函数
// 2. 用户定义带有全缺省的构造函数---所有参数都带有默认值
// 3. 如果用户没有显式定义任何构造函数，编译器会自动生成一个无参的构造函数
// 默认的构造函数：只能存在一个
class Date
{
public:
	Date()
	{
		_year = 1970;
		_month = 1;
		_day = 1;
	}

	// 全缺省的构造函数
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

	// 析构函数：对象在销毁时，由编译器自动进行调用，作用：完成对象中资源的清理工作
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
	// 测试
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