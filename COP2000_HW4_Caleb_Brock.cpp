//To calculate who won a race using imputted times and names, Caleb Brock, 11/14/2017, COP2000_HW4
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//prototypes
void getRaceTimes(string &, double &);
bool RaceTimeValidation(double);
double raceAverage(double, double, double);
void Welcome();
void findWinner(string, string, string, double, double, double);

void getRaceTimes(string &V_First_Name, double &V_Race_Time)
{
    string Inputted_First_Name;
    double Inputted_Race_Time;
    cout<<"Please enter the racer's first name.";
    cin>>Inputted_First_Name;
    cout<< Inputted_First_Name<<endl;
    input:
    cout<<"Please enter the racer's time.";
    cin>>Inputted_Race_Time;
    cout<<Inputted_Race_Time;
    if (RaceTimeValidation(Inputted_Race_Time))
    {
        V_Race_Time==Inputted_Race_Time;
        V_First_Name==Inputted_First_Name;
    }
    else
        cout<<"Invalid time input...time must be greater than 0";
        goto input;
}

bool RaceTimeValidation(double Inputted_Race_Time)
{
    if (Inputted_Race_Time > 0)
        return true;
    else
        return false;
}
void findWinner (string WinnerRaceName1, string WinnerRaceName2, string WinnerRaceName3, double WinnerRaceTime1, double WinnerRaceTime2, double WinnerRaceTime3)
{
    if (WinnerRaceTime1 = WinnerRaceTime2 and WinnerRaceTime3)
    {    
        cout<<"We have a 3 way TIE!! No Winner for this Racee..."<<endl;
        return;
    }
    if (WinnerRaceTime1 = WinnerRaceTime2 < WinnerRaceTime3)
    {
        cout<<"We have a TIE "<<WinnerRaceName1<<" and "<<WinnerRaceName2<<" win!!"<<endl;
        cout<<"***** Your winning time is:  "<<WinnerRaceTime1<<"   *****"<<endl;
        return;
    }
    if (WinnerRaceTime1 = WinnerRaceTime3 < WinnerRaceTime2)
    {
        cout<<"We have a TIE "<<WinnerRaceName1<<" and "<<WinnerRaceName3<<" win!!"<<endl;
        cout<<"***** Your winning time is:  "<<WinnerRaceTime1<<"   *****"<<endl;
        return;
    }
    if (WinnerRaceTime2 = WinnerRaceTime3 < WinnerRaceTime1)
    {
        cout<<"We have a TIE "<<WinnerRaceName2<<" and "<<WinnerRaceName3<<" win!!"<<endl;
        cout<<"***** Your winning time is:  "<<WinnerRaceTime2<<"   *****"<<endl;
        return;
    }
    if (WinnerRaceTime1 < WinnerRaceTime2 or WinnerRaceTime3)
    {
        cout<<"Congratulations "<<WinnerRaceName1<<"!!! You are the winner!!"<<endl;
        cout<<"***** Your winning time is:  "<<WinnerRaceTime1<<"   *****"<<endl;
        return;
    }
    if (WinnerRaceTime2 < WinnerRaceTime1 or WinnerRaceTime3)
    {
        cout<<"Congratulations "<<WinnerRaceName2<<"!!! You are the winner!!"<<endl;
        cout<<"***** Your winning time is:  "<<WinnerRaceTime2<<"   *****"<<endl;
        return;
    }
    if (WinnerRaceTime3 < WinnerRaceTime1 or WinnerRaceTime2)
    {
        cout<<"Congratulations "<<WinnerRaceName3<<"!!! You are the winner!!"<<endl;
        cout<<"***** Your winning time is:  "<<WinnerRaceTime3<<"   *****"<<endl;
        return;
    }
}
double raceAverage(double Validated_Race_time1, double Validated_Race_time2, double Validated_Race_time3)
{
    Validated_Race_time1;
    Validated_Race_time2;
    Validated_Race_time3;
    float AveragedRacetime;
    AveragedRacetime = (Validated_Race_time1+Validated_Race_time2+Validated_Race_time3)/3;
    cout<<"Overall Race Time Average:   "<<AveragedRacetime;
}
void Welcome()
{
    cout<<setfill ('*')<<setw(72)<<"*"<<endl;
    cout<<"Welcome to Race Results Program"<<endl;
    cout<<"You are Asked to Enter the Three Racer's Names"<<endl;
    cout<<"and Their Associated Race Time."<<endl<<endl;
    cout<<"Please enter a real number for Race Time (the Race Time Must be >0)."<<endl<<endl;
    cout<<"Program Developed by: Caleb Brock"<<endl;
    cout<<setfill ('*')<<setw(72)<<"*"<<endl;
}
int main ()
{
    string RacerName1;
    string RacerName2;
    string RacerName3;
    double RacerTime1;
    double RacerTime2;
    double RacerTime3;
    
    Welcome();
    getRaceTimes(RacerName1, RacerTime1);
    getRaceTimes(RacerName2, RacerTime2);
    getRaceTimes(RacerName3, RacerTime3);
    findWinner (RacerName1, RacerName2, RacerName3, RacerTime1, RacerTime2, RacerTime3);
    raceAverage(RacerTime1, RacerTime2, RacerTime3);
    return 0;
}

