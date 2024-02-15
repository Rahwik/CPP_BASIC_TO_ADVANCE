#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <algorithm>
#include <math.h>
#include <map>
using namespace std;


string base2To16Table(string num)
{
    map<string, string> table;
    string conversion;

    table.insert(pair<string,string> ("0000", "0"));
    table.insert(pair<string,string> ("0001", "1"));
    table.insert(pair<string,string> ("0010", "2"));
    table.insert(pair<string,string> ("0011", "3"));
    table.insert(pair<string,string> ("0100", "4"));
    table.insert(pair<string,string> ("0101", "5"));
    table.insert(pair<string,string> ("0110", "6"));
    table.insert(pair<string,string> ("0111", "7"));
    table.insert(pair<string,string> ("1000", "8"));
    table.insert(pair<string,string> ("1001", "9"));
    table.insert(pair<string,string> ("1010", "A"));
    table.insert(pair<string,string> ("1011", "B"));
    table.insert(pair<string,string> ("1100", "C"));
    table.insert(pair<string,string> ("1101", "D"));
    table.insert(pair<string,string> ("1110", "E"));
    table.insert(pair<string,string> ("1111", "F"));

    conversion = table.find(num)->second;
    return conversion;
}

string base16To2Table(char num)
{
    
    map<char, string> table;
    string conversion;

    table.insert(pair<char, string> ('0', "0000"));
    table.insert(pair<char, string> ('1', "0001"));
    table.insert(pair<char, string> ('2', "0010"));
    table.insert(pair<char, string> ('3', "0011"));
    table.insert(pair<char, string> ('4', "0100"));
    table.insert(pair<char, string> ('5', "0101"));
    table.insert(pair<char, string> ('6', "0110"));
    table.insert(pair<char, string> ('7', "0111"));
    table.insert(pair<char, string> ('8', "1000"));
    table.insert(pair<char, string> ('9', "1001"));
    table.insert(pair<char, string> ('A', "1010"));
    table.insert(pair<char, string> ('B', "1011"));
    table.insert(pair<char, string> ('C', "1100"));
    table.insert(pair<char, string> ('D', "1101"));
    table.insert(pair<char, string> ('E', "1110"));
    table.insert(pair<char, string> ('F', "1111"));
    
    conversion = table.find(num)->second;
    return conversion;
}

int main(int argc, char* arv[])
{
    cout << "Binary Bunch Conversions" << endl;
    cout << "1. Convert base 10 to binary" << endl;
    cout <<    "2. Convert binary to base 10" << endl;
    cout <<    "3. Convert base 16 to binary" << endl;
    cout << "4. Convert binary to base 16" << endl;
    cout << "5. End Program" << endl;
    
    int input;
    cout << "Please Enter a Number from the Menu: ";
    cin >> input;
    while (input != 5)
    {                   
        if (input == 1)
        {
            int num;
            string remainder;

            cout << "Please Enter a Base 10 Number: ";
            cin >> num;

            int originalNum = num;
            while(num != 0)
            {
                int remain = num % 2;

                stringstream ss;
                ss << remain;
                remainder += ss.str();
                num /= 2;
            }

            reverse(remainder.begin(), remainder.end());

            cout << originalNum << " in base 2 is " << remainder << endl << endl;
        }

        else if (input == 2)
        {
            int base10Num;
            string base2Num;

            cout << "The format for a base 2 number should be in groups of 4 with no spaces" << endl;
            cout << "Example: 000110100011 = 419"<< endl;
            cout << "Please Enter a Base 2 Number: ";
            cin >> base2Num;

            int power = base2Num.size()-1;

            for (int i = 0; (unsigned)i < base2Num.size(); i++)
            {

                int num = base2Num[i]-48;

                base10Num += num*pow(2,power);

                power--;
            }

            cout << base2Num << " in base 10 is " << base10Num << endl << endl;
        }

        else if (input == 3)
        {
            string base2Num;
            string base16Num;

            
            cout << "Please Enter a Base 16 Number: ";
            cin >> base16Num;


            for (int i = 0; (unsigned)i < base16Num.size(); i++)
            {
                base2Num += base16To2Table(base16Num[i]);
            }

            cout << base16Num << " in base 2 is " << base2Num << endl << endl;

        }

        else if (input == 4)
        {
            string base2Num;
            string base16Num;
            string substring;

            
            cout << "The format for a base 2 number should be in groups of 4 with no spaces" << endl;
            cout << "Example: 000110100011 = 1A3"<< endl;
            cout << "Please Enter a Base 2 Number: ";
            cin >> base2Num;

          
            int i = 0;
            
            while((unsigned)i < base2Num.length())
            {
                int position = i;

          
                substring = base2Num.substr(position, 4);

                base16Num += base2To16Table(substring);

             
                i+=4;
            }

           
            cout << base2Num << " in base 16 is " << base16Num << endl << endl;

        }


        else
        {
            cout << input << " is not a valid option. Please Select Again!" << endl;
            cout << "Please Enter a Number from the Menu: ";
            cin >> input;
        }
        
        cout << "Binary Bunch Conversions" << endl;
        cout << "1. Convert base 10 to binary" << endl;
        cout <<    "2. Convert binary to base 10" << endl;
        cout <<    "3. Convert base 16 to binary" << endl;
        cout << "4. Convert binary to base 16" << endl;
        cout << "5. End Program" << endl;
    

        cout << "Please Enter a Number from the Menu: ";
        cin >> input;
    }
    cout << "Thank you for using Binary Bunch Conversions!" << endl;
}