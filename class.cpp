#include<iostream>
using namespace std;
class btech{
	public:
		int roll;
		float cgpa;
		char section;
		void print(){
			cout<<"roll:"<<roll<<endl;
			cout<<"cgpa:"<<cgpa<<endl;
			cout<<"section:"<<section<<endl;
		}
};
int main(){
	btech prity,raj;
	prity.roll=622;
	prity.cgpa=8.3;
	prity.section='A';
	prity.print();
	return 0;
}


















