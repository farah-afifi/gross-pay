// FCI – Programming 1 – 2018 - Assignment 2
// Program Name:page107problem6.cpp
// Last Modification Date: 03/03/2017
// Author1 and ID and Group: farah mohamed osama 20170351
// Author2 and ID and Group: hussein hossam idris 20170352
// Author3 and ID and Group: omar reda tawfeek 20170353
// Teaching Assistant: xxxxx xxxxx
//                                                                      `: calculates the worker’s gross pay, each withholding amount, and the net take-home pay for the week.
#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    cout<<"how many hour have you been working this week?"<<endl;
    int hours , dependents;
    double grosspay;
    cin>>hours;
    cout<<"please enter how many people depend on you"<<endl;
    cin>>dependents;
    if (hours <= 40){
        grosspay=hours*16.78;
        cout<<"grosspay is = "<< grosspay<<endl;
    }
    else{
        grosspay=(40*16.78)+((hours-40)*(16.78*1.5));
        cout<<"grosspay is = "<< grosspay<<endl;
    }
    double social_security,federal_income,state_income,union_dues,health_insurance=0;
    cout<<"social security tax is = "<<(social_security= grosspay *(6.0/100))<<endl;
    cout<<"federal income tax = "<<(federal_income= grosspay*(14.0/100))<<endl;
    cout<<"state income tax is ="<<(state_income= grosspay*(5.0/100))<<endl;
    cout<<"union dues is = "<<(union_dues = 10)<<endl;
    if (dependents>=3)
    cout<< "cost of health insurance beyond what the employer pays is="<<(health_insurance=35)<<endl;
    cout<<"your net take-home pay is "<<grosspay-(social_security+federal_income+state_income+union_dues+health_insurance)<<endl;
    return 0;
}
