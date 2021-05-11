#include"Header.h"
#include<iostream>
#include<string>

name::name()
{
	fName = nullptr;
	lName = nullptr;
}
name::name(const char* fName,const char* lName)
{
	int i = 0;
	i = strlen(fName);

	this->fName = new char[i + 1];
	for (int j = 0; j < i; j++)
	{
		this->fName[j] = fName[j];
	}
	this->fName[i] = '\0';

	i = 0;
	i = strlen(lName);
	this->lName = new char[i + 1];
	for (int j = 0; j < i; j++)
	{
		this->lName[j] = lName[j];
	}
	this->lName[i] = '\0';
}
name::name(name& obj)
{
	int i = 0;
	i = strlen(obj.fName);
	fName = new char[i + 1];
	for (int j = 0; j < i; j++)
	{
		fName[j] = obj.fName[j];
	}
	fName[i] = '\0';

	i = 0;
	i = strlen(obj.lName);
	lName = new char[i + 1];
	for (int j = 0; j < i; j++)
	{
		lName[j] = obj.lName[j];
	}
	lName[i] = '\0';
}
name::~name()
{
	//cout << "~name()";
	/*delete[]fName;
	fName = nullptr;
	delete[]lName;
	lName = nullptr;*/
}
void name::setfname()
{
	char* temp = new char[15];
	cout << "\n Enter first name : ";
	//cin.getline(temp,15);
	cin >> temp;
	cin.ignore();
	int size = strlen(temp);
	fName = new char[size + 1];
	for (int i = 0; i < size; i++)
	{
		fName[i] = temp[i];
	}
	fName[size] = '\0';
}
void name::setfname(char* fn)
{
	int i = 0;
	i = strlen(fn);
	fName = new char[i + 1];
	for (int j = 0; j < i; j++)
	{
		fName[j] = fn[j];
	}
	fName[i] = '\0';
}
void name::setlname()
{
	char* temp = new char[15];
		
	//cin.ignore();
	cout << " Enter last name : ";
	cin >> temp;
	//cin.ignore();

	int size = strlen(temp);
	lName = new char[size + 1];
	for (int i = 0; i < size; i++)
	{
		lName[i] = temp[i];
	}
	lName[size] = '\0';
}
void name::setlname(char* ln)
{
	int i = 0;
	i = strlen(ln);
	lName = new char[i + 1];
	for (int j = 0; j < i; j++)
	{
		lName[j] = ln[j];
	}
	lName[i] = '\0';
}
char* name::getfname()
{
	return fName;
}
char* name::getlname()
{
	return lName;
}

ostream& operator<<(ostream& out, const name& obj)
{
	if(obj.fName!=nullptr && obj.lName!=nullptr)
	{
		cout << obj.fName << " " << obj.lName<<endl;

	}

	return out;
}

///////////////////////////////////////////////			   DATE				////////////////////////////////////////////////////////////
date::date()
{
	this->day = 0;
	this->month = 0;
	this->year = 0;
}
date::date(int day , int month , int year )
{
	this->day = day;
	this->month = month;
	this->year = year;
}
date::date(date& obj)
{
	this->day =   obj.day;
	this->month = obj.month;
	this->year =  obj.year;
}
date::~date()
{
	//cout << "~date()";
	/*day = 0;
	month = 0;
	year = 0;*/
}
void date::setday()
{
	cout << " Enter date : ";
	cin >> day;
}
void date::setmonth()
{
	cout << " Enter month : ";
	cin >> month;
}
void date::setyear()
{
	cout << " Enter year : ";
	cin >> year;
}

void date::setday(int p)
{
	 day=p;
}
void date::setmonth(int p)
{
	 month =p;
}
void date::setyear(int p)
{
	year=p;
}

int date::getday()
{
	return day;
}
int date::getmonth()
{
	return month;

}
int date::getyear()
{
	return year;
}

bool date::compare(date p)
{
	if (day == p.day && month == p.month && year == p.year)
	{
		return true;
	}
	return  false;
}
ostream& operator<<(ostream& out, const date& obj)
{
	cout << obj.day << "/" << obj.month << "/" << obj.year<<endl;
	return out;
}


/////////////////////////////////      Time       /////////////////////////////////////////////
mTime::mTime()
{
	this->hour=0;
	this->min =0;
	this->sec =0;
}
mTime::mTime(int hour , int min , int sec )
{
	this->hour = hour;
	this->min = min;
	this->sec = sec;
}
mTime::mTime(mTime& obj)
{
	this->hour = obj.hour;
	this->min = obj.min;
	this->sec = obj.sec;
}
mTime::~mTime()
{
	//cout << "~mTime()";
	/*hour = 0;
	min = 0;
	sec = 0;*/
}
void mTime::sethour()
{
	cout << " Enter hour : ";
	cin >> hour;
}
void mTime::setmin()
{
	cout << " Enter min : ";
	cin >> min;
}
void mTime::setsec()
{
	cout << " Enter sec : ";
	cin >> sec;
}

void mTime::sethour(int p)
{
	hour=p;
}
void mTime::setmin(int p )
{
	 min=p;
}
void mTime::setsec(int p)
{
	 sec=p;
}


int mTime::gethour()
{
	return hour;
}
int mTime::getmin()
{
	return min;

}
int mTime::getsec()
{
	return sec;
}
ostream& operator<<(ostream& out, const mTime& obj)
{
	cout << obj.hour << ":" << obj.min << ":" << obj.sec << endl;
	return out;
}

///////////////////////////////////////////////////////////////      person		//////////////////////////////////////////////////////////////////////////////////////


person::person() :pName(), DOB()
{
	Age = 0;
	Nid = 0;
}
person::person(const char* fn, const char* ln, int d, int m, int y, int age, int nid) : pName(fn, ln), DOB(d, m, y)
{
	Age = age;
	Nid = nid;
}
person::person(person& obj):pName(obj.pName),DOB(obj.DOB)
{
	this->Age = obj.Age;
	this->Nid = obj.Nid;
}
person::~person()
{
	//cout << "person()";
}
void person::setname()
{
	pName.setfname();
	pName.setlname();
}
void person::setname(char* fn,char* ln)
{
	pName.setfname(fn);
	pName.setlname(ln);
}
void person::setdob()
{
	DOB.setday();
	DOB.setmonth();
	DOB.setyear();
}
void person::setdob(int x,int y,int z)
{
	DOB.setday(x);
	DOB.setmonth(y);
	DOB.setyear(z);
}
void person::setAge()
{
	cout << " Enter age : ";
	cin >> Age;
}
void person::setAge(int x)
{
	Age=x;
}
void person::setNid()
{
	cout << " Enter Nid : ";
	cin >> Nid;
}
void person::setNid(int x)
{
	Nid = x;
}
name person::getname()
{
	return pName;
}
date person::getdate()
{
	return DOB;
}
int person ::getage()
{
	return Age;
}
int person::getNid()
{
	return Nid;
}
void person::print()
{
	cout << " Name : " << pName << endl;
	cout << " Date of birth : " << DOB;
	cout << " Age : " << Age << "\n National id : " << Nid<<endl;
}
ostream& operator<<(ostream& out, const person& obj)
{
	cout << " Name : "<< obj.pName;
	cout << " Date of birth : " << obj.DOB;
	cout << " Age : " << obj.Age << "\n National id : " << obj.Nid;
	return out;
}


//////////////////////////////////////////////////////////			 pRecorde      //////////////////////////////////////////////////////////////////////////////////////

pRecord::pRecord() :visDate(), visTime()
{
	DiseaseType = nullptr;
	AssignedDoc = 0;
	feepaid = 0;
}
pRecord::pRecord(const char* dt, int x,int y,int z,int q,int w,int e, int ad, float fp) :visDate(x,y,z), visTime(q,w,e)
{

	int i = 0;
	i = strlen(dt);
	this->DiseaseType = new char[i + 1];
	for (int j = 0; j < i; j++)
	{
		this->DiseaseType[j] = dt[j];
	}
	this->DiseaseType[i] = '\0';
	AssignedDoc = ad;
	feepaid = fp;
}
pRecord::pRecord(pRecord& obj) :visDate(obj.visDate), visTime(obj.visTime)
{
	int i = strlen(obj.DiseaseType);
	DiseaseType = new char[i + 1];
	for (int j = 0; j < i; j++)
	{
		DiseaseType[j] = obj.DiseaseType[j];
	}
	DiseaseType[i] = '\0';

	AssignedDoc = obj.AssignedDoc;
	feepaid = obj.feepaid;
}
pRecord::~pRecord()
{
	//cout << "~pRecord()";
	//delete[]DiseaseType;
	//DiseaseType = nullptr;
	//AssignedDoc = 0;
	//feepaid = 0;
}

void pRecord::setDiseaseType()
{
	char* temp = new char[30];

	cout << " Enter Disease_Type : ";

	/*cin.ignore();
	cin.getline(temp, 30);*/
	cin >> temp;
	int k = strlen(temp);
	DiseaseType = new char[k + 1];
	for (int i = 0; i < k; i++)
	{
		DiseaseType[i] = temp[i];
	}
	DiseaseType[k] = '\0';

}
void pRecord::setDiseaseType(char* p)
{

	int k = strlen(p);
	DiseaseType = new char[k + 1];

	for (int i = 0; i < k; i++)
	{
		DiseaseType[i] = p[i];
	}
	DiseaseType[k] = '\0';
}

void pRecord::setvisDate()
{
	visDate.setday();
	visDate.setmonth();
	visDate.setyear();
}

void pRecord::setvisDate(int x, int y, int z)
{
	visDate.setday(x);
	visDate.setmonth(y);
	visDate.setyear(z);
}
void pRecord::setvisDate(date& p)
{
	visDate.setday(p.getday());
	visDate.setmonth(p.getmonth());
	visDate.setyear(p.getyear());
}
void pRecord::setvisTime()
{
	visTime.sethour();
	visTime.setmin();
	visTime.setsec();
}
void pRecord::setvisTime(int x,int y,int z)
{
	visTime.sethour(x);
	visTime.setmin(y);
	visTime.setsec(z);
}
void pRecord::setvisTime(mTime& p)
{
	visTime.sethour(p.gethour());
	visTime.setmin(p.getmin());
	visTime.setsec(p.getsec());
}
void pRecord::setAssignedDoc()
{
	cout << " Enter AssignedDoc : ";
	cin >> AssignedDoc;
}

void pRecord::setAssignedDoc(int p)
{
	AssignedDoc = p;
}
void pRecord::setfeepaid()
{
	cout << " Enter feepaid : ";
	cin >> feepaid;
}

void pRecord::setfeepaid(float p)
{
	feepaid = p;
}

char* pRecord::getDiseaseType()
{
	return DiseaseType;
}
date pRecord::getvisDate()
{
	return visDate;
}
mTime pRecord::getvisTime()
{
	return visTime;
}
int pRecord::getAssignedDoc()
{
	return AssignedDoc;
}
float pRecord::getfeepaid()
{
	return feepaid;
}

ostream& operator<<(ostream& out, const pRecord& obj)
{
	cout << " DiseaseType : " << obj.DiseaseType << endl;
	cout << " Visit date : ";
	cout << obj.visDate;
	cout << " Visit Time : ";
	cout << obj.visTime ;

	cout << " AssignedDoc : " <<obj.AssignedDoc;
	cout << "\n Fee paid : " << obj.feepaid << endl;
	return out;
}

ifstream& operator>>(ifstream& in, pRecord& obj)
{
	char* dt = new char[30];
	int da, mo, ye, ho, mi, se, di;
	float fp;

	in >> dt >> da >> mo >> ye >> ho >> mi >> se >> di >> fp;

	obj.setDiseaseType(dt);
	obj.setvisDate(da, mo, ye);
	obj.setvisTime(ho, mi, se);
	obj.setAssignedDoc(di);
	obj.setfeepaid(fp);

	return in;
} 
ofstream& operator<<(ofstream& out, pRecord& obj)
{

	date b;
	b = obj.getvisDate();
	mTime a;
	a = obj.getvisTime();

	out <<" "<< obj.getDiseaseType() << " " << b.getday() << " " << b.getmonth() << " " << b.getyear() << " " << a.gethour() << " " << a.getmin() << " " << a.getsec() << " " << obj.getAssignedDoc() << " " << obj.getfeepaid();

	return out;
}
//////////////////////////////////////////////////////////`					patient				/////////////////////////////////////////////////////////////////////////

patient::patient()
{
	int** x = new int*[10];
	pid = 0;
	history = new pRecord * [15];
	inde = 0;
}
patient::patient(int piid, const char* fn, const char* ln, int d, int m, int p, int age, int nid):person(fn, ln, d, m, p, age, nid)
{
	pid = piid;
	history = new pRecord*[15];
	inde = 0;
	//history[inde] = new pRecord(dt, x, y, z, q, w, e, ad, fp);
	//inde++;	
}
patient::~patient()
{
	//cout << "~patient()";
	//for (int i = 0; i < inde; i++)
	//{
	//	delete[] history[i];
	//}
	//delete[] history;
	//pid = 0;
	//inde = 0;
}

void patient::setpId()
{
	static int z;
	 this->pid=z+10;
	 z++;
}
void patient::setpid(int x)
{
	pid = x;
}
void patient::sethistory(pRecord& obj)
{
	history[inde] = new pRecord(obj);
	inde++;

	/*history[inde] = new pRecord[1];
	history[inde][0] = obj;
	inde++;*/
}
void patient::print1()
{
	print();
}
int patient::getpId()
{
	return pid;
}
pRecord** patient::gethistory()
{
	return history;
}
int patient::getinde()
{
	return inde;
}
ostream& operator<<(ostream& out,  patient& obj)
{
	out << static_cast<person&>(obj);

	cout << "\n Patient id : " << obj.pid << endl<<endl;
	if (obj.inde != 0)
	{
		cout << "\n		Patient History \n\n";
	}
	for (int i = 0; i < obj.inde; i++)
	{
		cout << obj.history[i][0] << endl;
	}
	cout  << endl;
//	person& a = obj;
//	person b(obj);	

	//obj.print();
	//person::obj.print();
	return out;
}
ofstream& operator<<(ofstream& out, patient& obj)
{
	date b;
	b = obj.getdate();

	name a;
	a = obj.getname();

	cout << " data written";

	out << obj.getpId() << " " << a.getfname() << " " << a.getlname() << " " << b.getday() << " " << b.getmonth() << " " << b.getyear() << " " << obj.getage() << " " << obj.getNid();
	if (obj.inde == 0)
	{
		out << " 0" << endl;
	}
	else
		out << " 1" << endl;

	return out;

}

ifstream& operator>>(ifstream& in , patient& obj)
{
	int z, x = 0;

	char* fn = new char[20];
	char* ln = new char[20];
	int pi=0,  da = 0, mo = 0, ye = 0, ag = 0, ni = 0;
	bool his=0;

	in >> pi>> fn>> ln>> da>> mo>> ye>> ag>> ni>> his;

	obj.setpid(pi);
	obj.setname(fn, ln);
	obj.setdob(da, mo, ye);
	obj.setAge(ag);
	obj.setNid(ni);

	string str;

	if (his == 1)
	{
		ifstream file1;
		file1.open("Patient - History.txt");
		while (!file1.eof())
		{			
			file1 >> z;

			if (z == obj.getpId())
			{
				/*cout << " Enter number of appointmnent you want to read of patient having patient id #" << obj.getpId() << " : ";
				cin >> x;*/
				file1 >> x;

				for (int i = 0; i < x; i++)
				{
					pRecord pr;
					file1 >> pr;
					//char* dat = new char[30];
					//int d, mon, yea, ho, mi, se, di;
					//float fp;

					//file1 >> dat >> d >> mon >> yea >> ho >> mi >> se >> di >> fp;

					//pr.setDiseaseType(dat);
					//pr.setvisDate(d, mon, yea);
					//pr.setvisTime(ho, mi, se);
					//pr.setAssignedDoc(di);
					//pr.setfeepaid(fp);

					obj.sethistory(pr);
				}
				break;
			}
			else
			{
				getline(file1, str);
			}
		}
		
		file1.close();
	}
	

	return in;
}
////////////////////////////////////////////////////////////////////             doctor             ///////////////////////////////////////////////////////////////////////////////////////

doctor::doctor()
{
	specialization = nullptr;
	dId = 0;
	pateintsVisited = new int[10];
	index = 0;
}
doctor::doctor(int did, const char* spe, const char* fn, const char* ln, int da, int mo, int ye, int age, int nid) :person(fn, ln, da, mo, ye, age, nid)
{
	dId = did;

	int i = strlen(spe);
	specialization = new char[i + 1];
	for (int j = 0; j < i; j++)
	{
		specialization[j] = spe[j];
	}
	specialization[i] = '\0';

	this->pateintsVisited = new int[15];
	index = 0;
	/*this->pateintsVisited[index] = pv;
	index++;*/
}
doctor::doctor(doctor& obj) :person(obj)
{
	dId = obj.dId;
	index = obj.index;
	int i = strlen(obj.specialization);
	specialization = new char[i + 1];
	for (int  j = 0; j < i; j++)
	{
		specialization[j] = obj.specialization[j];
	}
	specialization[i] = '\0';

	pateintsVisited = new int[15];
	for (int k = 0; k < index; k++)
	{
		pateintsVisited[k] = obj.pateintsVisited[k];
	}
}
doctor::~doctor()
{
	//cout << "~doctor()";
	//dId = 0;
	/*delete[]specialization;
	delete[]pateintsVisited;
	index = 0;*/
}

void doctor::setdid()
{
	static int di;

	dId = di + 10;
	di++;
	/*cout << " Enter doctor id : ";
	cin >> dId;*/
}
void doctor::setdid(int x)
{
	 dId=x;
}
void doctor::setspecialization()
{
	cout << " Enetr doctor's specialization : ";
	char* temp = new char[25];
	cin.ignore();
	cin.getline(temp, 25);
	

	int size = strlen(temp);
	specialization = new char[size + 1];
	for (int i = 0; i < size; i++)
	{
		specialization[i] = temp[i];
	}
	specialization[size] = '\0';

}
void doctor::setspecialization(char* ss)
{
	int i = 0;
	i = strlen(ss);
	specialization = new char[i + 1];
	for (int j = 0; j < i; j++)
	{
		specialization[j] = ss[j];
	}
	specialization[i] = '\0';
}
void doctor::setpateintsVisited()
{
	cout << " Enter the id  of patient : ";
	cin >> this->pateintsVisited[index];
	this->index++;
}

void doctor::setpatientsvisited(int x)
{
	this->pateintsVisited[index] = x;
	index++;
}
int doctor::getdid()
{
	return dId;
}
char* doctor::getspecialization()
{
	return specialization;
}
int* doctor::getpateintsVisited()
{
	return pateintsVisited;
}
int doctor::getNoPV()
{
	return index;
}

ostream& operator<<(ostream& out, const doctor& obj)
{
	cout << "\n		      Doctor's bio-data    \n";

	out << static_cast<const person&>(obj);
		
	cout << "\n Doctor's id : " << obj.dId;
	cout << "\n Doctor's specialization : " << obj.specialization;
	cout << "\n Id's of patient visited to doctor : ";

	for (int i = 0; i < obj.index; i++)
	{
		cout << obj.pateintsVisited[i] << " ";
	}
	cout << endl;
	return out;
}

ifstream& operator>>(ifstream& in, doctor& obj)
{
	int di,da, mo, ye,ag, ni;
	char* fn = new char[20];
	char* ln = new char[20];
	char* spec = new char[35];

	//char** pv;
	//pv = new char*[10];
	int count;
	int pv;
	string str;
	int temp;
	int temp1;
	in >> di >> fn >> ln >> da >> mo >> ye >> ag >> ni >> spec;

	obj.setdid(di);
	obj.setname(fn, ln);
	obj.setdob(da, mo, ye);
	obj.setAge(ag);
	obj.setNid(ni);
	obj.setspecialization(spec);
	int z;
	ifstream file2;
	file2.open("Patients visited.txt");

	char data[50];
	while (!file2.eof())
	{
		file2 >> temp;
		if (temp == di)
		{
			file2 >> z;
			for (int k = 0; k < z; k++)
			{
				file2 >> temp;
				obj.setpatientsvisited(temp);
			}
		}
		else
		{
			getline(file2, str);
		}
	}
	file2.close();

	return in;
}

ofstream& operator<<(ofstream& out, doctor& obj)
{
	date b;
	b = obj.getdate();

	name a;
	a = obj.getname();

	cout << " data written";

	out << obj.dId << " " << a.getfname() << " " << a.getlname() << " " << b.getday() << " " << b.getmonth() << " " << b.getyear() << " " << obj.getage() << " " << obj.getNid()<<" " << obj.getspecialization() << endl;

	return out;
}


///////////////////////////////////////////////////////////////////////////////         appiontment		  	 \\\\\\\\\\\\\\\\\\\\\\\\\/////////////////////////////////////\\\\\\\\\\\\\\\\\\\\\\\\



appointment::appointment() :appDate(), appTime()
{
	Disease_Type = nullptr;
	pId = 0;
	dId = 0;
	token_Number = 0;
	fee = 0;
	status = false;
}
appointment::appointment(const char* dt, int pi, int di, int d, int m, int y, int h, int mi, int se, int tn, float fe, bool sta) :appDate(d, m, y), appTime(h, mi, se)
{
	int i = strlen(dt);
	Disease_Type = new char[i + 1];
	for (int j = 0; j < i; j++)
	{
		Disease_Type[j] = dt[j];
	}
	Disease_Type[i] = '\0';

	pId = pi;
	dId = di;
	token_Number = tn;
	fee = fe;
	status = sta;
}
appointment::appointment(appointment& obj): appDate(obj.appDate),appTime(obj.appTime)
{
	int i = strlen(obj.Disease_Type);
	Disease_Type = new char[i + 1];
	for (int j = 0; j < i; j++)
	{
		Disease_Type[j] = obj.Disease_Type[j];
	}
	Disease_Type[i] = '\0';
	pId = obj.pId;
	dId = obj.dId;
	token_Number = obj.token_Number;
	fee = obj.fee;
	status = obj.status;

}
appointment::~appointment()
{
	//cout << "~appointment()";
	//delete[] Disease_Type;
	//pId = 0;
	//dId = 0;
	//token_Number = 0;
	//fee = 0;

}

void appointment::setDisease_Type()
{

	char* temp = new char[25];
	cout << "\n Enter DiseaseType : ";
	cin.ignore();
	cin.getline(temp, 25);
	int size = strlen(temp);

	Disease_Type = new char[size + 1];
	for (int i = 0; i < size; i++)
	{
		Disease_Type[i] = temp[i];
	}
	Disease_Type[size] = '\0';
}

void appointment::setDisease_Type(char* p)
{
	int k = strlen(p);
	Disease_Type = new char[k + 1];

	for (int i = 0; i < k; i++)
	{
		Disease_Type[i] = p[i];
	}
	Disease_Type[k] = '\0';
}
void appointment::setpId()
{
	cout << " Enter patient id : ";
	cin >> pId;
}
void appointment::setpid1(int x)
{
	pId = x;
}
void appointment::setdid()
{
	cout << " Enter doctor id : ";
	cin >> dId;
}
void appointment::setdid(int x)
{
	dId = x;
}

void appointment::setappDate()
{
	appDate.setday();
	appDate.setmonth();
	appDate.setyear();
}
void appointment::setappDate(int x,int y,int z)
{
	appDate.setday(x);
	appDate.setmonth(y);
	appDate.setyear(z);
}
void appointment::setappTime()
{
	appTime.sethour();
	appTime.setmin();
	appTime.setsec();
}
void appointment::setappTime(int x, int y, int z)
{
	appTime.sethour(x);
	appTime.setmin(y);
	appTime.setsec(z);
}
void appointment::settoken_Number()
{
	cout << " Enter token number : ";
	cin >> token_Number;
}
void appointment::settoken_Number(int x)
{
	token_Number=x;
}
void  appointment::setfee()
{
	cout << " Enter appointment fee : ";
	cin >> fee;
}void  appointment::setfee(float x)
{
	 fee=x;
}
void appointment::setstatus()
{
	cout << " Enter appointment status (0 if pending and 1 if complete) : ";
	cin >> status;
}
void appointment::setstatus(int x)
{
	status = x;
}
char* appointment::getDisease_Type()
{
	return Disease_Type;
}
int appointment::getpid()
{
	return pId;
}
int appointment::getdid()
{
	return dId;
}
date appointment::getappdate()
{
	return appDate;
}
mTime appointment::getapptime()
{
	return appTime;
}
int appointment::gettoken_Number()
{
	return token_Number;
}
float appointment::getfee()
{
	return fee;
}
bool appointment::getstatus()
{
	return status;
}
ostream& operator<<(ostream& out, const appointment& obj)
{
	cout << "\n Disease_Type : " << obj.Disease_Type;
	cout << "\n Patient id : " << obj.pId;
	cout << "\n Doctor id : " << obj.dId;
	cout << "\n Date  " << obj.appDate;
	cout << " Time  " << obj.appTime;
	cout << " Token number : " << obj.token_Number;
	cout << "\n Fee : " << obj.fee;
	cout << "\n Status : " << obj.status;
	return out;
}

ifstream& operator>>(ifstream& in, appointment& obj)
{
	float fe;
	char* dt = new char[30];
	int pi, di, da, mo, ye, ho, mi, se, to;
	bool sta;

	in >> dt >> pi >> di >> da >> mo >> ye >> ho >> mi >> se >> to >> fe >> sta;

	obj.setDisease_Type(dt);
	obj.setpid1(pi);
	obj.setdid(di);
	obj.setappDate(da, mo, ye);
	obj.setappTime(ho, mi, se);
	obj.settoken_Number(to);
	obj.setfee(fe);
	obj.setstatus(sta);

	return in;
}

ofstream& operator<<(ofstream& out, appointment& obj)
{
	date b;
	b = obj.getappdate();
	mTime a;
	a = obj.getapptime();
	
	out << obj.getDisease_Type() <<" " << obj.getdid() << " " << obj.getpid() << " " << b.getday() << " " << b.getmonth() << " " << b.getyear() << " " << a.gethour() << " " << a.getmin() << " " << a.getsec() << " " << obj.gettoken_Number() << " " << obj.gettoken_Number() << " " << obj.getfee() << " " << obj.getstatus() << endl;
	return out;
}


////////////////////////////////////////////////////////					clinic					//////////////////////////////////////////////////////
	
clinic::clinic()
{
	Doctors = new doctor*[10];
	dcount = 0;

	Patients = new patient * [15];
	pcount = 0;
	
	Appointments = new appointment * [20];
	acount = 0;
}
clinic::~clinic()
{
	cout << "~clinic()";
	//for (int i = 0; i < pcount; i++)
	//{
	//	delete[] Patients[i];
	//}
	//delete[]Patients;
	//Patients = nullptr;

	//for (int i = 0; i < acount; i++)
	//{
	//	delete[] Appointments[i];
	//}
	//delete[] Appointments;
	//Appointments = nullptr;

	//for (int i = 0; i < dcount; i++)
	//{
	//	delete[] Doctors[i];
	//}
	//delete[] Doctors;
	//Doctors = nullptr;

}
void clinic::add_patient()
{

	//static int x = 100;
	//patient temp(x, "junaid", "afzal", 130, 140, 145, 170, 180);
	//
	//x++;

	//////////////////////////////////////////   important

	patient temp;

	temp.setpId();
	cout << "			 Enter date of birth  \n";
	temp.setdob();
	temp.setAge();
	temp.setNid();
	temp.setname();
	
	Patients[pcount] = new patient(temp);	
	pcount++;

	//cout << Patients[pcount - 1];
	//temp.history[inde] = new pRecord(pr);
}

void clinic::add_doctor()
{
	doctor temp;

	temp.setname();
	cout << "		 Enter Date of Birth  \n";

	temp.setdob();
	temp.setAge();
	temp.setNid();
	temp.setdid();
	temp.setspecialization();
	//static int z= 1122;
	//doctor temp(z, "abc", "abc", "def", 2, 2, 4, 5, 6);
	//z = z + 11;
	Doctors[dcount] = new doctor(temp);
	dcount++;
	
}
void clinic::make_appointment()
{
	patient obj;
	appointment temp;

	obj.setname();
	cout << "			 Enter Date of Birth \n";
	obj.setdob();
	obj.setAge();
	obj.setNid();
	obj.setpId();
	
	temp.setDisease_Type();
	//temp.setpId();
	temp.setpid1(obj.getpId());
	temp.setdid();
	cout << "	        	Set appointment date  \n";
	temp.setappDate();
	cout << "				Set appointment time \n";
	temp.setappTime();
	temp.settoken_Number();
	temp.setfee();
	temp.setstatus();

	//static int x = 100;
	//patient obj(x,  "junaid", "afzal", 130, 140, 145, 170, 180);
	//appointment temp("abc", x, 1122, 3, 4, 5, 6, 7, 8, 9, 10,0);
	//x++;

	if (temp.getstatus() == 1)
	{
		pRecord his;
		his.setAssignedDoc(temp.getdid());
		his.setDiseaseType(temp.getDisease_Type());
		his.setfeepaid(temp.getfee());

		date d;
		d = temp.getappdate();
		his.setvisDate(d);

		mTime t;
		t = temp.getapptime();
		his.setvisTime(t);

		obj.sethistory(his);
	}

	Patients[pcount] = new patient(obj);
	pcount++;

	bool flag = temp.getstatus();
	if (flag == false)
	{
		Appointments[acount] = new appointment(temp);
		acount++;
	}
	else
	{
		for (int j = 0; j < dcount; j++)
		{
			if (temp.getdid() == Doctors[j]->getdid())
			{
				Doctors[j]->setpatientsvisited(temp.getpid());
			}
		}
	}
	//cout << temp;
}


void clinic::update_appointment_status()
{
	bool flag = false;
	int pd,As;
	cout << " Enter patient id : ";
	cin >> pd;

	for (int j = 0; j < acount; j++)
	{
		if (pd == Appointments[j]->getpid())
		{
			cout << " Appointment pending. Enter 1 to update the appointment status : ";
			cin >> As;

			Appointments[j]->setstatus(As);

			for (int l = 0; l < pcount; l++)
			{
				if (Patients[l]->getpId() == pd)
				{

					pRecord his;
					his.setAssignedDoc(Appointments[j]->getdid());
					his.setDiseaseType(Appointments[j]->getDisease_Type());
					his.setfeepaid(Appointments[j]->getfee());

					date d;
					d = Appointments[j]->getappdate();
					his.setvisDate(d);

					mTime t;
					t = Appointments[j]->getapptime();
					his.setvisTime(t);

					Patients[l]->sethistory(his);
				}
			}


			for (int z = 0; z < dcount; z++)
			{
				if (Appointments[j]->getdid() == Doctors[z]->getdid())
				{
					Doctors[z]->setpatientsvisited(pd);
				}
			}

			for (int k = j; k < acount; k++)
			{
				Appointments[k] = Appointments[k + 1];
			}
			acount--;

			flag = true;
			break;
		}
	}
	if (flag == false)
	{
		cout << "\n		Patient id does not exist. \n";
	}
}

void clinic::make_app_for_exising_patient()
{
	bool check = false;
	int id;
	cout << " Enter ID of existing patient : ";
	cin >> id;
	for (int i = 0; i < pcount; i++)
	{
		if (id == Patients[i]->getpId())
		{
			check = true;
			appointment temp;

			pRecord **p1(Patients[i]->gethistory());

			//temp.setDisease_Type(p1[0][0].getDiseaseType());
			temp.setDisease_Type();
			temp.setpid1(id);
			temp.setdid();
			//temp.setdid(p1[0][0].getAssignedDoc());
			cout << " Enter appointmnet date \n";
			temp.setappDate();
			cout << " Enter appointment time \n";
			temp.setappTime();
			temp.settoken_Number();
			temp.setfee();
			temp.setstatus();

			//                                           saving history.
			//pRecord his;

			//his.setAssignedDoc(temp.getdid());
			//his.setDiseaseType(temp.getDisease_Type());
			//his.setfeepaid(temp.getfee());

			//date d;
			//d = temp.getappdate();
			//his.setvisDate(d);

			//mTime t;
			//t = temp.getapptime();
			//his.setvisTime(t);

			//Patients[i][0].sethistory(his);
			/////

			bool flag = temp.getstatus();
			if (flag == false)
			{
				Appointments[acount] = new appointment(temp);
				acount++;
				break;
			}
			else
			{
				for (int j = 0; j < dcount; j++)
				{
					if (temp.getdid() == Doctors[j]->getdid())
					{
						Doctors[j]->setpatientsvisited(temp.getpid());
					}
				}
				break;
			}
		}
	}
	if (check == false)
	{
		cout << "\n			 Patient id does not exist.\n";
	}
}

void clinic::print_6()
{
	bool flag = false;
	bool check = false, check2 = false;
	int di;
	int cc = 1;
	cout << "\n Enter Doctor's id : ";
	cin >> di;


	for (int i = 0; i < dcount; i++)
	{
		if (di == Doctors[i]->getdid())		// fetch a doctor if exist
		{
			cout << "\n			Bio data of patients visited the doctor.	\n";
			cout << "\n yes\n";
			date vd;
			vd.setday();
			vd.setmonth();
			vd.setyear();
			//for (int j = 0 ; j  <  Doctors[i]->getNoPV() ; j++)			
			{	
				check = false;
				int *temp=Doctors[i]->getpateintsVisited();   //get ids of patients from the doctor.	

				for (int k = 0; k < Doctors[i]->getNoPV(); k++)
				{
					for (int pc = 0; pc < pcount; pc++)
					{					
						if (temp[k] == Patients[pc]->getpId())			/// compare the entered pid with the pids stored in doctors 
						{
							pRecord** obj;
							obj = Patients[pc]->gethistory();
							
							for (int z = 0; z < Patients[pc]->getinde(); z++)
							{								
								date tp;
								tp = obj[z]->getvisDate();
								flag = vd.compare(tp);
								if (flag == true)
								{
									cout << endl << "\n	------------------- Patient :"<<cc++ << " ---------------------  " << endl << Patients[pc][0];
									check = true;
									check2 = true;
									//cout << endl <<"pc "<< pc << " i " << i << "  j "  << " k " << k << " ";
									break;
								}
								
							}
						}	
						/*if (check==true)
						{
							break;
						}*/
					}
				}
			}
			break;
		}
	}
	if (check2 == false)
	{
		cout << "\n\n The entered doctor's id does not exist or there is no pending appointment.\n\n";
	}
}



void clinic::print7()
{
	int di;
	int oo = 1;
	bool flag = false;
	cout << "\n  Enter doctor's id : ";
	cin >> di;

	for (int i = 0; i < dcount; i++)
	{
		if (di == Doctors[i]->getdid())
		{
			
			int* temp = Doctors[i]->getpateintsVisited();

			for (int j = 0; j < Doctors[i]->getNoPV(); j++)
			{
				for (int k = 0; k < pcount; k++)
				{
					if (temp[j] == Patients[k]->getpId())
					{
						if (oo == 1)
						{
							cout << "\n   Details of all patients who visited same doctor but on different days.\n";
						}
						cout << "\n--------------------- Patient : " << oo++ << " ---------------------  " << endl << endl;
						cout << Patients[k][0];
						flag = true;
						break;
					}
				}
			}
			break;
		}
		
	}
	if (flag == false)
	{
		cout << "\n\n  Entered Doctor id does not exist or non of the patients visited the doctor.\n\n";
	}
}


void clinic::print8()
{
	int oo = 1;
	date temp;
	bool flag = false;
	bool check = false;
	cout << "		Enter the date \n";
	temp.setday();
	temp.setmonth();
	temp.setyear();

	for (int i = 0; i < acount; i++)
	{
		flag=Appointments[i]->getappdate().compare(temp);

		if (flag == true && Appointments[i]->getstatus() == 0)
		{		
			if (oo== 1)
			{
				cout << "\n Details of all pending appointments on : " << temp << endl;
			}
			cout << "\n\n----------------------  Appointment  "  << oo++ << " ---------------------  ";
			cout << endl << Appointments[i][0] << endl;
			check = true;
		}
	}
	if (check == false)
	{
		cout << "\n\n No appointment exist on : "<<temp<<endl;
	}
}

void clinic::print9()
{
	bool check = false;
	int oo = 1;
	int temp;
	cout << "\n Enter Doctor's id :";
	cin >> temp;

	for (int i = 0; i < acount; i++)
	{
		if (temp == Appointments[i]->getdid() && Appointments[i]->getstatus() == 0)
		{
			if (oo == 1)
			{
				cout << "\n Details of all pending appointments of a particular doctor.   \n";
			}
			cout << "\n\n-----------------  Appointment  " << oo++ << " ---------------------  ";
			cout << endl << Appointments[i][0] << endl;
			check = true;
		}
	}
	if (check == false)
	{
		cout << "\n  Doctor's id does not exist or doctor have no appointment.   ";
	}
}

ostream& operator<<(ostream& out, clinic& obj)
{
	for (int i = 0; i <obj.dcount; i++)
	{
		cout << "\n ---------------------  Doctor  " << i+1 <<" ---------------------  " <<endl;
		cout << obj.Doctors[i][0];
	}
	
	for (int i = 0; i < obj.acount; i++)
	{
		cout << "\n ---------------------   Appointment  " << i+1 << " ---------------------  " << endl;
		cout << obj.Appointments[i][0];
	}

	for (int i = 0; i < obj.pcount; i++)
	{
		cout << "\n ---------------------  Patient  " << i +1 << " ---------------------  " << endl<<endl;
		cout << obj.Patients[i][0];
	}
	return out;
}


void clinic::inputfromfile()
{
	int choice = 0;
	while (true)
	{
		cout << "\n Enter 1 to read data of a doctor.\n Enter 2 to read data of a patient. \n Enter 3 to read data for appointments. \n Enter 0 to reurn to main menu. \n   Enter choice : ";
		cin >> choice;
		if (choice == 1)
		{

			ifstream file;
			file.open("Doctor.txt");

			while (!file.eof())
			{
				doctor obj;
				file >> obj;
				Doctors[dcount] = new doctor(obj);
				dcount++;
			}
			file.close();
		}
		if (choice == 2)
		{
			ifstream file1;
			file1.open("Patient.txt");

			while (!file1.eof())
			{
				patient pat;
				file1 >> pat;
				Patients[pcount] = new patient(pat);
				pcount++;
			}
			file1.close();
		}
		if (choice == 3)
		{
			ifstream file2;
			file2.open("Appointment.txt");

			while (!file2.eof())
			{
				appointment app;
				file2 >> app;
				Appointments[acount] = new appointment(app);
				acount++;
			}
			file2.close();
		}
		if (choice == 0)
		{
			break;
		}


	}
}

void clinic::outpuinfile()
{

	ofstream fout;
	fout.open("Patient output.txt");
	ofstream file5;
	file5.open("Patient - History output.txt");

	for (int i = 0; i < pcount; i++)
	{
		fout << Patients[i][0];

		if (Patients[i][0].getinde()!=0)
		{
			file5 << Patients[i][0].getpId()<<" " << Patients[i][0].getinde();

			pRecord** p1 = Patients[i][0].gethistory();

			for (int j = 0; j < Patients[i][0].getinde(); j++)
			{
				file5 << p1[j][0];
			}
			file5 << endl;
		}
	}
	fout.close();
	file5.close();




	ofstream file2;
	file2.open("Doctor output.txt");
	ofstream file4;
	file4.open("Patients visited output.txt");

	for (int i = 0; i < dcount; i++)
	{
		file2 << Doctors[i][0];

		if (Doctors[i][0].getNoPV() != 0)
		{	
			int* temp = Doctors[i][0].getpateintsVisited();

			file4 << Doctors[i][0].getdid() << " " << Doctors[i][0].getNoPV()<<" ";

			for (int j = 0; j < Doctors[i][0].getNoPV(); j++)
			{
				file4 << temp[j] << " ";
			}
			file4 << endl;
		}
	}
	file2.close();
	file4.close();




	ofstream file3;
	file3.open("Appointment output.txt");
	for (int i = 0; i < acount; i++)
	{
		file3 << Appointments[i][0];
	}
	file3.close();
}
