#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
#include "SimplePerson.h"

using namespace std;

class Student: public SimplePerson
{
	public:
		Student(const string& sname, const string& sid, const string &smajor, int year);
		~Student();
		void print();
		void changeMajor(const string& newMajor);
	private:
		string major;
		int gradYear;

};
#endif
