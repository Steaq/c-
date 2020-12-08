#include <iostream>
using namespace std;

int main() {
int type, j = 0;
float v1, v2, out;
    do{
cout << "MENU:\n"
"0 - exit\n" <<
"1 - addition \n" <<
"2 - subtraction \n" <<
"3 - multiplication \n" <<
"4 - division \n ";

cin >> type;

    if(type == 0 ){
    j = 1;
}

if(type == 1){
 cout << "Введіть перше число, яке ви хочете додати: " <<endl;
  cin >> v1;
   cout << "Введіть друге число, яке ви хочете додати: " <<endl;
   cin >> v2;
   out = v1 + v2;
   cout << "Відповідь: " << out <<endl;
}
    if(type == 2){
        cout << "Введіть перше число: " <<endl;
         cin >> v1;
        cout << "Введіть друге число, яке ви хочете відняти від першого:" <<endl;
        cin >> v2;
        out = v1 - v2;
        cout << "Відповідь: " << out <<endl;
}
        if(type == 3){
         cout << "Введіть перше число: " <<endl;
            cin >> v1;
            cout << "Введіть друге число, яке ви хочете помножити на перше:" <<endl;
   cin >> v2;
   out = v1 * v2;
   cout << "Відповідь: " << out <<endl;
  
}
    if(type == 4){
    cout << "Введіть перше число: " <<endl;
        cin >> v1;
        cout << "Введіть друге число, на яке поьтрібно поділити перше:" <<endl;
   cin >> v2;
   out = v1 / v2;
   
         if(v2 == 0){
         cout << "Не можна ділити на 0." <<endl;
   }
   if(v2 != 0)
   cout << "Відповідь: " << out <<endl;
}
}
while(j == 0);
cout << "Калькулятор вимкнено" <<endl;
}