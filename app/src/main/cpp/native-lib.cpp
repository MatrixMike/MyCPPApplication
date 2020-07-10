#include <jni.h>
#include <string>
#include <iostream>
using namespace std;
extern "C"
    jstring
Java_com_electroteach_mike_mycppapplication_MainActivity_stringFromJNI(JNIEnv *
								       env,
								       jobject
								       /* this */
								       )
{
	string str1 ="hello";
	string str2 = "world";
	string str3 ;

	const int MAXTRIPLE = 25;
	const int monthsInYear = 12;	// if array is oversized elements are zero filled

	int year[monthsInYear] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };	// days in months
	int daysInYear(0);

	class pythagtriple {
	private:int a, b, c;
	public:
		pythagtriple() {
		cout << "Constructor called!" << endl;
			a = b = c = 0;
		} void seta(int len) {
			a = len;
		}
		int geta() {
			return a;
		}
		void setb(int len) {
			b = len;
		}
		int getb() {
			return b;
		}
		void setc(int len) {
			c = len;
		}
		int getc() {
			return c;
		}
		void showtriple() {
			//	cout << "a,b,c are " << a << " " << b << " " << c << " " <<
			//	endl;
		}
		int oddb() {
			b = ((a * a) - 1) / 2;
			return b;
		}
		int evenb() {
			b = ((a / 2) * (a / 2)) - 1;
			return b;
		}
		int oddc() {
			c = b + 1;
			return c;
		}
		int evenc() {
			c = b + 2;
			return c;
		}

/* need to note that formulae for triples based on odd a and for even a are known
 *  odd :	b= (a*a) -1
 * 			c= b+1
 *
 *
 */

	};

	pythagtriple pythagtriple;

	for (int cv = 3; cv < MAXTRIPLE; cv = cv + 2) {
		int dummyb, dummyc;
//mike		cout << "start loop... " << endl;
		pythagtriple.seta(cv);
		//    cout << "oddb = " <<
		dummyb = pythagtriple.oddb();	// () << endl;
		//    cout << "oddc = " <<
		dummyc = pythagtriple.oddc();	// () << endl;
		pythagtriple.showtriple();
		if (((pythagtriple.geta() * pythagtriple.geta()) +
			 (pythagtriple.getb() * pythagtriple.getb())) ==
			(pythagtriple.getc() * pythagtriple.getc())) {
//mike			cout << "test passed : " << pythagtriple.geta() << endl;
		}
		//     pythagtriple.showtriple ();
		cout << "values = " << pythagtriple.geta() << " " <<
		pythagtriple.getb() << " " << pythagtriple.getc() << endl;
		// a test now
		// (a*a) + (b*b) = (c*c)
	}
	std::string line, file, date, time, blank, nl;
	line =  __LINE__ ;
	file =  __FILE__ ;
	date =  __DATE__ ;
	time =  __TIME__ ;
	nl = "\n";
	blank = nl+line+nl+file+nl+date+nl+time+nl;

str3 = str1 + str2;

	std::string hello;
    hello = "Hello from C++, vk3kmj"+ blank;
	std::string mike = "vk3kmj";
	return env->NewStringUTF(hello.c_str());
}

/*
Java_com_electroteach_mike_mycppapplication_MainActivity_stringFromJNI2(JNIEnv *
env,
jobject
 this */
/*)
{
const int monthsInYear = 12;	// if array is oversized elements are zero filled

int year[monthsInYear] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };	// days in months
int daysInYear(0);

std::string hello;
hello = "Hello from C++, vk3kmj";
std::string mike = "vk3kmj";
return env->NewStringUTF(hello.c_str());
}
*/
