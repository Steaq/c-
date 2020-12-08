#include <iostream>
using namespace std;
  int main(void) {
  int year, month, day;
  int day_of_week;
  cout<<"Enter a year: ";
  cin>>year;
  cout<<"Enter a month: ";
  cin>>month;
  cout<<"Enter a day: ";
  cin>>day;
  if (year>=1900 && year <=2100 && month <= 12 && day>=1) {
    month-=2;
    if (month<=0){
      month+=12;
      year-=1;
    }
    month = month*83/32;
    month += day;
    month += year;
    month += year/4;
    month -= year/100;
    month += year/400;
    day_of_week = month%7;
    cout<<day_of_week<<"\n";
  
  if (day_of_week==0)
  cout<<"Sunday";
  if (day_of_week==1)
  cout<<"Monday";
  if (day_of_week==2)
  cout<<"Tuesday";
  if (day_of_week==3)
  cout<<"Wednesday";
  if (day_of_week==0)
  cout<<"Thursday";
  if (day_of_week==0)
  cout<<"Friday";
  if (day_of_week==0)
  cout<<"Saturday";
  }
  else {
    cout<<"Ви ввели невірну дату";
  }
  return 0;
  }

