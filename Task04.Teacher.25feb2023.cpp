//  04 Represent a Teacher in programming using classes and objects
// in c++ 
#include <iostream>
#include <string>
using namespace std;


class teacher {
	private:
	string	fname;
	string lname;
	int age;
	string tcourse; //teaching course
	
	public:
	void getteacher()	{
			cout<<"Enter Teacher First Name" <<endl;
			cin >>fname;
			cout<<"Enter Teacher Last Name" <<endl;
			cin>>lname;
			cout<<"Enter Teacher's Age: " <<endl;
			cin >>age;
			cout<<"Enter Teaching Course: " <<endl;
			cin>>tcourse;
		}
		
	void showteacher()	{
		cout<<"Data of Teacher is: " <<endl;
		cout<< "Teacher Name: " << fname <<lname<<endl;
		cout << "Teacher Age is: " << age <<endl;
		cout << "Teaching Course is: " <<tcourse << endl;
		
		}
			
};

	int main (){
		teacher t1;
		t1.getteacher();
		t1.showteacher();
	
}
