#include<iostream>
using namespace std;

int main()
{
int volume;
int length;
cout << " enter the length in meters" ;
cin >> length;
int width;
cout << " enter the width in meters" ;
cin >> width;
int height;
cout << " enter the height in meters " ;
cin >> height ;
volume = length * width * height;
string quantity;
cout << "enter the quantity  " << endl ;
cin >> quantity;
if (quantity == "centimeters")
{
    int result;
    result = volume * (1000000);
    cout << " the volume of pyrmaid in centimeters is : " << result;

}
if (quantity == "kilometers")
{
    int result1;
    result1 = volume / (1000000000);
    cout << " the volume of pyrmaid in kilometers is : " << result1;
    }
    if (quantity == "millimeters")
    {
        int result2;
        result2 = volume * (1000000000);
        cout << "the volume of pyrmaid in millimeters is : " << result2;
    }

}
  
