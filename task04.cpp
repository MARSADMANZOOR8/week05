#include <iostream>
using namespace std ;
void  taxCalculator(char type, float price);
int main()
{
char type ;
cout << "enter the type of the appliance : " << endl;
cin >> type;
float price ;
cout << " enter the price of the appliance : " << endl;
cin >> price ;
 taxCalculator(type , price );
}

void  taxCalculator(char type, float price)
{
 

float taxamount;
float final_amount;
if (type=='m')
{
taxamount = price * 6 /100;
final_amount = price + taxamount;
}
if ( type=='e')
{
taxamount = price * 8 /100;
final_amount = price + taxamount;

}
if ( type=='s')
{
taxamount = price * 10 /100;
final_amount = price + taxamount;
}
if ( type=='v')
{
taxamount = price * 12/100;
final_amount = price + taxamount;
}
if ( type=='t')
{
taxamount = price * 14 /100;
final_amount = price + taxamount;
}

 cout << " the tax amount is " << final_amount << endl ;
}
