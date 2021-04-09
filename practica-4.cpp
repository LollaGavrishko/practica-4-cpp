//Из двух случайных чисел, одно из которых четное, а другое
//нечетное, определить и вывести на экран нечетное число.
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
setlocale(LC_ALL, "rus");
int a, b;
cout<<"введите число";
cin>>a;
cout<<"введите число";
cin>>b;
if{ (a%2==1) cout<<"нечетное"<< endl<< b <<"четное";}
else {cout <<"четное"<< endl<<b<<"нечетное";}
return 0;
}
//Перевести число, введенное пользователем, в байты или килобайты
//в зависимости от его выбора.
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
setlocale(LC_ALL, "rus");
int a, c;
cin>>a;
cout<<"байты-1, килобайты-2";
cin>>c;
if(c==1){
cout<<a/8;}
else {cout<<a/8192;}
return 0;
}
//Вводятся два целых числа. Проверить делится ли первое на второе.
//Вывести на экран сообщение об этом, а также остаток (если он есть)
//и частное (в любом случае).
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
setlocale(LC_ALL, "rus");
int a, b;
cout<<"a=";
cin>>a;
cout<<"b=";
cin>>b;
if (a%b==0){
cout<<(a,"не делится",b);}
else {cout<<("остаток", a%b);}
return 0;
}
//Вводятся три разных числа. Найти, какое из них является средним
//(больше одного, но меньше другого).
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
setlocale(LC_ALL, "rus");
int a,b,c;
cout<<"a=";
cin>>a;
cout<<"b=";
cin>>b;
cout<<"c=";
cin>>c;
if(a>b && a<c && a<b && a>c){
cout<<a;}
else if (b>a || b<c || b<a || b>c){
cout <<b;}
else {cout<<a;}
return 0;
}
//Определить, является ли год, который ввел пользователем,
//високосным или невисокосным.
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   int x;
   cin>>x;
   if(x%4==0 && x%100 !=0 || x%400==0){
   cout<<"високосный";}
   else {cout<<"невисокосный";}

    return 0;
}
//Найти корни квадратного уравнения и вывести их на экран, если они
//есть. Если корней нет, то вывести сообщение об этом. Конкретное
//квадратное уравнение определяется коэффициентами a, b, c, которые
//вводит пользователь.
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
double a,b,c;
cin>>a>>b>>c;
double d=b*b-4*a*c;
if (d>0){
cout << "x1="<< (-b+sqrt(d))/(2*a)<< endl;
cout<<"x2="<< (-b-sqrt(d))/(2*a)<< endl;
}
else if (d==0){
cout<< "x="<< -b/2/a;}
 else {cout<<"нет корней"<<endl;}
return 0;
}
//По длинам трех отрезков, введенных пользователем, определить
//возможность существования треугольника, составленного из этих
//отрезков. Если такой треугольник существует, то определить,
//является ли он разносторонним, равнобедренным или
//равносторонним.
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
double a,b,c;
cin>>a>>b>>c;

if(a>b) swap(a,b);
if(b>c) swap(b,c);
if(a>b) swap(a,b);
if (a+b <= c || a+c <= b || b+c <= a){
           cout<<"треугольник не существует"<<endl;;}
    else
        if (a != b && a != c && b != c){
               cout<<"разносторонний"<<endl;;}
        else
            if (a == b && b == c){
                  cout<<"равносторонний"<<endl;}
            else{
                   cout<<"равнобедренный"<<endl;}

return 0;
}
//Даны круг и квадрат. Составьте программу, определяющую по
//введенным вами значениям длин стороны квадрата и радиуса круга,
//одно из утверждений «Круг может быть вписан в квадрат» или
//«Квадрат может быть вписан в круг».
#include <iostream>
#include <cmath>
 using namespace std;
int main()
{   setlocale(0, "");
  int l,r;
    cin >> l;
    cin >> r;
    if(l == 2*r){ 
        cout << "Круг может быть вписан в квадрат";
    }
    else if(sqrt(l*l/2) == r){  
    cout << "Квадрат может быть вписан в круг";
    }
    else {
        cout << "условия не выполняются"; }
 return 0;
}
//Напишите программу, которая анализирует человека по возрасту и
//относит к одной из четырех групп: дошкольник, ученик, работник,
//пенсионер. Возраст человека вводится с клавиатуры
#include <iostream>
#include <cmath>
 using namespace std;
int main()
{
   int a;
   cout<<"введите возраст:";
   cin>>a;
   if  (a<6 %% a>0){
       cout<<"личинка";
   }
   else if (a>6 && a<17 ){
       cout<<"ученик";
   }
    else if (a>17 && a<60 ){
       cout<<"работник";
   }
    else if (a>60 && a<90 ){
       cout<<"работник";
   }
   else if (a>90 && a<120 ){
       cout<<"мумия";
   }
   else{
       cout<<"неизвестно";
   }
    return 0;
}
//  прием на работу идет на конкурсной основе.
//Условия приема требует 20 лет рабочего
//стажа и возраста не более 42 лет. определить,
//будет ли человек принят.
#include <iostream>
#include <cmath>
 using namespace std;
int main()
{
   int a,b;
cout<<"стаж работы";
cin>>a;
cout<<"возраст";
cin>>b;
if (a>20 && b<42){
    cout<<"принят";
}
else{
    cout<<"не принят";
    }
    return 0;
}
