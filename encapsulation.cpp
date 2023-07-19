#include<iostream>

using namespace std;

class SapPortal_attendanceDetails
{
  private:
  
  string subject = "Maths";
  int totaldays = 46;
  int dayspresent = 34;
  int daysabsent = 12; 
  int percentage;
  
  public:
  
  string studentName;
  string schoolname;
  string programStudy;
  string semester;
  int year;
  string session;
  
  void getinformation()
  {
      
      schoolname = "SECSE";
      studentName = "Bittu Sharma";
      programStudy = "B.Tech(Electronics and Computer science";
      semester = " 2nd stage";
      
      cout<<"Student Name :"<<" "<<studentName<<endl;
      cout<<"School :"<<" "<<schoolname<<endl;
      cout<<"Program of study :"<<" "<<programStudy<<endl;
      cout<<"Semester (currently pursuing) :"<<" "<<semester<<endl;
  }
  
  SapPortal_attendanceDetails()      //default constructor
  {
      year = 2023;
      session = "Spring";
      cout<<"In default constructor :"<<endl;
      
    cout<<"Year : "<<year<<endl;
    cout<<"Session : "<<session<<endl;
  }
  
  SapPortal_attendanceDetails(string S,int P,int A,int D)      //parametrized constructor
  {
    S = subject;
    P = dayspresent;
    A = daysabsent;
    D = totaldays;
    
    cout<<"In parametrized constructor :"<<endl;
    
    cout<<"Suject : "<<"  "<<S<<endl<<"No. of Present : "<<"  "<<P<<endl<<"No. of Absent :"<<"  "<<A<<endl<<"Total No. of working days :"<<"  "<<D<<endl;
    
  }
  
   SapPortal_attendanceDetails(SapPortal_attendanceDetails& sharma1 )        //copy constructor
   {
       cout<<"In copy constructor :"<<endl;
      percentage = (dayspresent*100)/totaldays;
     cout<<"Total Percentage : "<<percentage<<endl;
   }
  
  int percentageattendance()
  {
      return (dayspresent*100)/totaldays;
  }
  
};


int main()
{ 
    
    SapPortal_attendanceDetails sharma;
    sharma.getinformation();
    SapPortal_attendanceDetails sharma1("Maths",34,12,46);
    sharma1.percentageattendance();
    SapPortal_attendanceDetails sharma2(sharma);
    
    return 0;  
}