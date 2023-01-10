#include<iostream>
#include<cmath>
using namespace std;
main()
{
    int neededHours,days,workers;
    int workingHours;
    cout<<"Enter needed hours: ";
    cin>>neededHours;
    cout<<"Enter days the firm has: ";
    cin>>days;
    cout<<"Enter the number of workers: ";
    cin>>workers;
    int actualDays = days - (days*0.1);
    
    int overtimeHours =workers*(actualDays*10);
    workingHours = floor(overtimeHours);
    int diff = workingHours - neededHours;
    if(workingHours>neededHours)
    {
        cout<<"Yes "<<diff<<" hours left ";
    }
    if(workingHours<neededHours)
    {
        cout<<"Not enough time "<<(-1*diff)<<" hours needed ";
    }




}