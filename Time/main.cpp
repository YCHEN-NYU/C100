#include <iostream>
#include "Time.h"
using namespace std;

int main(){
  Time t4(23, 59, 59);
  t4.PrintTime();
  cout << "++second" << endl;
  t4.NextSecond();
  t4.PrintTime();
  t4.PreviousSecond();
  cout << "--second" << endl;
  t4.PrintTime();
  cout << endl;

  t4.PrintTime();
  cout << "++minute" << endl;
  t4.NextMinute();
  t4.PrintTime();
  t4.PreviousMinute();
  cout << "--minute" << endl;
  t4.PrintTime();
  cout << endl;

  t4.PrintTime();
  t4.NextHour();
  cout << "++hour" << endl;
  t4.PrintTime();
  t4.PreviousHour();
  cout << "--hour" << endl;
  t4.PrintTime();
  cout << endl;


  return 0;
}
