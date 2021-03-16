// 10-02_fig10_01_StdLibrary-string-class-test-program.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <string>
using namespace std;


int main()
{
    string s1{ "happy" };
    string s2{ " birthday" };
    string s3;

    // test overloaded equality & relational operators
    cout
        << "s1 is:\t\"" << s1 << "\",\n"
        << "s2 is:\t\"" << s2 << "\",\n"
        << "s3 is:\t\"" << s3 << "\",\n" << "\n\n";

    cout    
        // book: lines 15-21 start
        << "The results of comparing s2 & s1:" << boolalpha << "\n"
        << "\n\ts2 == s1 yields:\t" << (s2 == s1)
        << "\n\ts2 != s1 yields:\t" << (s2 != s1)
        << "\n\ts2 >  s1 yields:\t" << (s2 > s1)
        << "\n\ts2  < s1 yields:\t" << (s2 < s1)
        << "\n\ts2 >= s1 yields:\t" << (s2 >= s1)
        << "\n\ts2 <= s1 yields:\t" << (s2 <= s1);
        // book: lines 15-21 end

    // book: lines 23-30 start
    // test string member function empty
    cout << "\n\nTesting s3.empty():\n\t";
    if (s3.empty() == true) {
        cout << "s3 is empty; assigning s1 to s3;\n";
        s3 = s1; // assign s1 to s3
                 // overloaded copy assignment operator
        cout << "s3 is \"" << s3 << "\"";
    }  // book: lines 23-30 end


    // book: line 32-35 example
    // test overloaded string concatenation assignment operator
    cout
        << "\n\ns1 += s2 yields:\ts1 = " 
        << (s1 += s2) << "\n";

    // book: lines 37-40
    // test string concatenation with a C string
    cout
        << "s1 += \" to you\" yields:\ts1 = "
        << (s1 += " to you") << "\n";

    // book: line 42-45
    // test string contatenation with a C++14 string object literal
    cout
        << "s1 += \", have a great day!\" yields:\ts1 = "
        << (s1 += ", have a great day!"s) << "\n\n";

    // book: line 47-50
    // test string member function substr(...)
    cout
        << "The substring of s1:\n"
        << "\tOffset:\t0,\n"
        << "\tsubstringLength:\t14,\n"
        << "\tcode:\ts1.substr(0, 14),\n"
        << "\tvalueReturned:\t" << s1.substr(0, 14) << "\n\n";

    // book: lines 52-54
    // test substr "to-end-of-string" option
    cout
        << "The substring of s1:\n"
        << "\tOffsetToStartFrom: 15\n"
        << "\tsubstringLength:\tnull=>implicit \"to-end-of-string\"\n"
        << "\tcode:\ts1.substr(15)\n"
        << "\tresult:\t" << s1.substr(15) << "\n";

    // test copy constructor
    string s4{ s1 };
    cout
        << "\ns4 = " << s4;

    // book: lines 65-69
    // test using overloaded subscript operator to create lvalue
    s1[0] = 'H';
    s1[6] = 'B';

    cout
        << "\n\ns1 after:\ns1[0] = 'H'\nAND\ns1[6] = 'B', is:\n\t"
        << s1 << "\n\n";

    // book: lines 71-78
    // test subscript out of range with string member function 'at'
    try {
        cout
            << "Attempt to assign 'd' to s1.at(100) yields:\n"
            << "\tcode:\t\ts1.at(100) = 'd';";

        // attempt assignment
        s1.at(100) = 'd'; // error: subscript out of range
    }
    catch (out_of_range& ex) {
        cout << "An exception occurred: " << ex.what() << endl;
    }





}





