#include <iostream.h>
#include <conio.h>
class Student
{
	public:
	void AI()
	{
		cout << "I'm in AI"<<endl;
	}
	public:
	void AI1()
	{
		cout <<"I'm in AI1"<<endl;
	}
};
int main()
{
	Student obj;
	clrscr();
	obj.AI();
	obj.AI1();
	getch();
	return 0;
}