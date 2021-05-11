#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class name
{
private: 
char* fName;  
char* lName;

public: 
    name();
    name(const char* fName,const char* lName );  //add following functions //Getter, Setters  //Destructor, Default Constructor, Copy Constructor, 
    name(name&);
    ~name();
    void setfname();
    void setlname();
    void setfname(char*);
    void setlname(char*);

    char* getfname();
    char* getlname();

    friend ostream & operator<<(ostream & out, const name & n); 
}; 



 class date//() 
 {
     int day; 
     int month;
     int year;  //add constructurs getter setters and stream output function, which output date in given format day / Mon / Year 
 public:
     date();
     date(int, int, int);
     date(date&);
     ~date();
     void setday();
     void setmonth();
     void setyear();
     void setday(int);
     void setmonth(int);
     void setyear(int);

     int getday();
     int getmonth();
     int getyear();
     bool compare(date);
    // bool operator==(date& obj);
     friend ostream& operator<<(ostream& out, const date& obj);

 };


 class mTime//()
 {
     int hour;
     int min;
     int sec;  //add constructurs getter setters and stream output function, which output time in given format Hr : Min : Sec
 public:
     mTime();
     mTime(int, int, int);
     mTime(mTime&);
     ~mTime();
     void sethour();
     void setmin();
     void setsec();
     void sethour(int);
     void setmin(int);
     void setsec(int);

     int gethour();
     int getmin();
     int getsec();
     friend ostream& operator<<(ostream& out, const mTime& obj);

 };
    
 class person 
 {
 private: 
    name pName; 
    date DOB; 
    int Age;  
    int Nid;
    
 public: 
     person();
     person(const char*,const char*, int, int, int, int, int);
     person(person&);
     ~person();
     void setname();
     void setname(char*,char*);
     void setdob();
     void setdob(int,int,int);
     void setAge();
     void setAge(int);
     void setNid();
     void setNid(int);

     name getname();                          //add following functions in this class 
     date getdate();                          //Getter, Setters 
     int getage();                           //Destructor, Default and Parametrized Constructor, Copy Constructor, Output operator (print information of person) 
     int getNid();
     void print();
     friend ostream& operator<<(ostream& out, const person& obj);
 }; 

 class pRecord 
 {
     char* DiseaseType;
     date   visDate;
     mTime  visTime;
     int    AssignedDoc;  // Contain Doctor ID  
     float  feepaid; 
 public:
     pRecord();
     pRecord(const char*,int,int,int,int,int,int,int,float);
     pRecord(pRecord&);
     ~pRecord();
     void setDiseaseType();
     void setDiseaseType(char*);

     void setvisDate();
     void setvisDate(date&);
     void setvisDate(int, int, int);

     void setvisTime();
     void setvisTime(mTime&);       
     void setvisTime(int, int, int);

     void setAssignedDoc();
     void setAssignedDoc(int);
        
     void setfeepaid();
     void setfeepaid(float);

     char* getDiseaseType();
     date getvisDate();
     mTime getvisTime();
     int getAssignedDoc();
     float getfeepaid();

     friend ostream& operator<<(ostream& out, const pRecord& obj);
        
     friend ifstream& operator>>(ifstream&, pRecord&);
     friend ofstream& operator<<(ofstream&, pRecord&);
 }; 


 class patient : public person
 {
 private:  
     
     int pid;                // Unique and Assigned first time when patient come to clinic
     pRecord ** history;     //Maintain and Update history of patient on each visit to clinic by adding new record in dynamic array. 
     int inde;                       //you can add more members if required 
 
 public:
     patient();
     patient(int, const char*, const char*, int, int, int, int, int);
     ~patient();
     void setpId();
     void setpid(int);
     void sethistory(pRecord&);

     void print1();
     int getpId();
     pRecord** gethistory();
     int getinde();

     friend ostream& operator<<(ostream& out,  patient& obj);
     friend ifstream& operator>>(ifstream&, patient&);
     friend ofstream& operator<<(ofstream&, patient&);
                     //add following functions in this class 
                     //Getter, Setters 
                     //Destructor, Default and Parametrized Constructor, Copy Constructor, Output operator (print cpmplete information of patient including history id any) 
 }; 

 class doctor : public person
 {
 private:
        int  dId;
        char* specialization;  //General Physician, Orthopedic, Child Specialist etc. 
        int  *pateintsVisited; //Add patient id in the array for tracking complete information of visited patients. 
        int index;
 public:     
     
     doctor();
     doctor(int,const char*,  const char*,const char*, int, int, int, int, int );
     doctor(doctor&);
     ~doctor();

     void setdid();
     void setdid(int);
     void setspecialization();
     void setspecialization(char*);
     void setpateintsVisited();
     void setpatientsvisited(int);

     int getdid();
     char* getspecialization();
     int* getpateintsVisited();
     int getNoPV();
     //int getindex();
     friend ostream& operator<<(ostream& out, const doctor& obj);
     friend ifstream& operator>>(ifstream&, doctor&);
     friend ofstream& operator<<(ofstream&, doctor&);
     
                        //add following functions in this class 
                        //Getter, Setters  
                        //Destructor, Default and Parameterized Constructor, Copy Constructor, Output operator(prints complete information of Doctor) 
 };
 //int doctor::index = 0;

    
 class appointment
 {
     char* Disease_Type;
     int    pId;  
     int    dId;
     date   appDate;
     mTime  appTime;
     int    token_Number;
     float  fee;
     bool   status; // false for pending, true if complete 
 public:
     appointment();
     appointment(const char*, int, int, int, int, int, int, int, int, int, float, bool);
     appointment(appointment&);
     ~appointment();

     void setDisease_Type();
     void setDisease_Type(char*);

     void setpId();
     void setpid1(int); 

     void setdid(int);
     void setdid();
   
     void setappDate();
     void setappDate(int,int,int);
     void setappTime();
     void setappTime(int, int, int);  
     void settoken_Number();
     void settoken_Number(int);
     void setfee();
     void setfee(float);
     
     void setstatus();
     void setstatus(int);

     char* getDisease_Type();
     int getpid();
     int getdid();
     date getappdate();
     mTime getapptime();
     int gettoken_Number();
     float getfee();
     bool getstatus();

     friend ostream& operator<<(ostream& out, const appointment&  obj);
     friend ifstream& operator>>(ifstream&, appointment&);
     friend ofstream& operator<<(ofstream&, appointment&);
 };

 class clinic
 {
 private:
     doctor** Doctors;
     int dcount;
     patient** Patients;
     int pcount;
     appointment** Appointments;
     int acount;        
 public:
     clinic();
     ~clinic();
    void add_patient();
    void add_doctor();
    void make_appointment();
    void update_appointment_status();
    void make_app_for_exising_patient();
    void print_6();
    void print7();
    void print8();
    void print9();

    friend ostream& operator<<(ostream& out, clinic& obj);

    void inputfromfile();
    void outpuinfile();
 };