#include"Header.h"

int main()
{
	int x;
	
	clinic obj;

	
	do 
	{
		cout << "\n 0. To clear screen.\n 1. Add new patient.\n 2. Add new Doctor \n 3. Make an appointment for new patient.\n 4. Update patient and doctor’s record once an appointment status is completed, and remove it from appointment list. \n 5. Make appointment for already existing patient.\n 6. Print details of all patients, whom a doctor has visited on a particular date.\n 7. Print details of all patients who visited same doctor but on different days.\n 8. Print details of all pending appointments of a particular date.\n 9. Print details of all pending appointments of a particular doctor. \n10. Print complete history of a patient, and doctor. ";
		cout << "\n11. To read data from file.\n12. To write data on file. \n-1. To Exit.\n Enter choice : ";
		cin >> x; 
		if (x == 0)
		{
			system("cls");
		}
		if (x == 1)
		{
			obj.add_patient();
		}
		if (x == 2)
		{
			obj.add_doctor();
		}
		if (x == 3)
		{
			obj.make_appointment();
		}
		if (x == 4)
		{
			obj.update_appointment_status();
		}
		if (x == 5)
		{
			obj.make_app_for_exising_patient();
		}
		if (x == 6)
		{
			obj.print_6();
		}
		if (x == 7)
		{
			obj.print7();
		}
		if (x == 8)
		{
			obj.print8();
		}
		if (x == 9)
		{
			obj.print9();
		}
		if (x == 10)
		{
			cout << obj;
		}
		if (x == 11)
		{
			obj.inputfromfile();
		}
		if (x == 12)
		{
			obj.outpuinfile();
		}
		if (x == -1)
		{
			break;
		}
	} while (true);
		

	return 0;
}