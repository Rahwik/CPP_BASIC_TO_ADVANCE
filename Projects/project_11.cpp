// PALINDROME USING STACK.........
#include<iostream>
#include<string.h>
using namespace std;
#define MAX 50
class Stack
{
private:
  char data[MAX],str[MAX];
  int top,length,count;
  void pushData(char);
  char popData();
public:
  Stack()
  {
    top=-1;
    length=0;
    count=0;
  }
  void getString();
  void checkPalindrome();
  void extractString();
  void displayReverse();
};
int main()
{
  system("color 5a");
  Stack obj;
  obj.getString();
  obj.extractString();
  cout<<"\n String extracted after removing punctuations and symbols";
  cout<<"\n String converted to lower case";
  cout<<"\n Reverse of entered string: ";
  obj.displayReverse();
  obj.checkPalindrome();
  return 0;
}
void Stack::getString()
{
  cout<<"\n Enter a String: ";
  cin.getline(str,MAX);
  length=strlen(str);
}
void Stack::extractString()
{
  char temp[MAX];
  int i,j;
  for(i=0; i<length; i++)
  {
    temp[i]=str[i];
  }
  j=0;
  for(i=0; i<length; i++ ) 
  {
    if(isalpha(temp[i]))
    {
      str[j]=tolower(temp[i]);
      j++;
    }
  }
  length=j;   //update length with new str length
}
void Stack::checkPalindrome()
{
  for(int i=0; i<length; i++)
    pushData(str[i]);

  for(int i=0; i<length; i++)
  {
    if(str[i]==popData())
      count++;
  }
  if(count==length)
  {
    cout<<"\n Entered string is a Palindrome. \n";
  }
  else  cout<<"\n Entered string is not a Palindrome. \n";
}
void Stack::displayReverse()
{
  for(int i=length-1; i>=0; i--)
    cout<<str[i];
}
void Stack::pushData(char temp)
{
  if(top==MAX-1)
  {
    cout<<"\n Stack Overflow!!!";
    return;
  }
  top++;
  data[top]=temp;
}
char Stack::popData()
{
  if(top==-1)
  {
    cout<<"\n Stack Underflow!!!";
    char ch='\n';
    return ch;
  }
  char temp=data[top];
  top--;
  return temp;
  return 0;
}
