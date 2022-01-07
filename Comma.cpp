#include <iostream>
using namespace std;


int fun1(){return 1;}
int fun2(){return 2;}

int main()
{
  //Comma as operator
  int i = (5, 10);
  int j = (fun1(), fun2());

  //comma as separator
  //void fun(int a, int b)
  //fun(a,b)


  //comma insted of a semicolan
  cout <<"First line \n",
    cout << "second line";

  return 0;
}