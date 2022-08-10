#include <iostream>
using namespace std;
int choose, car, seatid, ctr;
struct cars
{
	int idcar;
	int chair[30];
};
cars arr[10];
bool cheakcar()
{
	if (0 < car  && car < 11)
		return true;
	else
		return false;
}
bool cheakchair()
{
	if (0 < seatid  && seatid < 31)
		return true;
	else
		return false;
}
void spacific_seat4()
{
	cout << "enter the number of car :";
	cin >> car;
	cout << "enter the seatid :";
	cin >> seatid;
	if (cheakchair() && cheakcar() )
	{
		if (arr[car - 1].chair[seatid - 1] == 0)
		{
			cout << "this seat is avalible : ";
		}
		else
			cout << "this seat is not avalible : ";
	}
	else
	{
		cout << "wrong input \n";
	}
	
}
void cancel_ticket2()
{
	cout << "Enter number of car :" << endl;
	cin >> car;
	cout << "Enter the id of seat :" << endl;
	cin >> seatid;
	if(cheakchair() && cheakcar() )
	{
	if (arr[car - 1].chair[seatid - 1] == 1)
	{
		arr[car - 1].chair[seatid - 1] = 0;
		cout << "done \n" << endl;
		
	}
	else if (arr[car - 1].chair[seatid - 1] == 0)
	{
		cout << "this seat is not book you can not cancel it \n";
	}
	}
	else
		cout<<"wrong input"<<endl;;
}
void showsp_c_avali_of_car6()
{
	cout << "enter the number of car :";
	cin >> car;
	if (cheakcar() )
	{
	for (int j = 0; j < 30; j++)
	{
		if (arr[car-1 ].chair[j] == 0)
			cout << "the seat  " << j + 1 << "  is avaliable" << endl;
		else
			cout << "the seat" << j + 1 << "is not  avaliable" << endl;
	}
	}
	else
		cout<<"wrong input"<<endl;

}
void book1()
{
	cout << "Enter number of cars: ";
	cin >> car;
	cout << "Enter seatid: ";
	cin >> seatid;
	if (cheakchair() && cheakcar())
	{
	 if (arr[car - 1].chair[seatid - 1] == 0)
	 {
		arr[car - 1].chair[seatid - 1] = 1;
		cout << "the process was done \n";
	 }
	 else if (arr[car - 1].chair[seatid - 1] == 1)
	 {
		cout << "sorry this seat is not avaliable \n";
	 }
	}
	else
	{
		cout << "wrong input \n";
	}


}
void num_of_free_seat5()
{
	cout << "enter the number of car :";
	cin >> car;
	ctr = 0;
	if(cheakcar())
	{
		for (int j = 0; j < 30; j++)
		{
			if (arr[car-1].chair[j] == 0)
			{
				ctr++;
			}
		}
	
	cout << "number of  free seats is  " << ctr << "\n";
	}
	else
		cout<<"wrong input"<<endl;
}
void sp_c_avali_seat3()
{
	cout << "enter the number of car:";
	cin >> car;
	ctr = 0;
	if(cheakcar())
	{
      for (int j = 0; j < 30; j++)
	  {
			if (arr[car-1].chair[j] == 0)
				ctr++;
	  }
	
	if (ctr > 0)
		cout << "this car has avalible seats";
	else
		cout << "this car has not avalible seats";
	}
	else
		cout<<"wrong input"<<endl;
}
void show()
{
	cout << "if you want to book a ticket enter 1 . \n";
	cout << "if you want to cancel a ticket enter 2 . \n";
	cout << "if you want to know specific car has avaliable seat or not enter 3 .\n";
	cout << "if you want to know specific seat is avalible or not enter 4 .\n";
	cout << "if you want to know the of avalible seats in aspecific car enter 5 .\n";
	cout << "if you want to show all the seats status of a specific car enter 6 .\n";
	cout << "if you want to exit enter 7 . \n";
	cout << "enter your choice now : \n";
}


int main()
{
	for(int i=0; i<10; i++)
	{
		for(int j=0; j<30; j++)
		{
			arr[i].chair[j]=0;
		}
	}
	while (true)
	{
		cout << "*******************************************************************************************************\n";
		cout << "\n";
		show();
		cin >> choose;
		cout << "********************************************************************************************************\n";
		switch (choose)
		{
		case 1:
			book1();
			break;
		case 2:
			cancel_ticket2();
			break;
		case 3:
			sp_c_avali_seat3();
			break;
		case 4:
			spacific_seat4();
			break;
		case 5:
			num_of_free_seat5();
			break;
		case 6:
			showsp_c_avali_of_car6();
			break;
		case 7:
			return 0;
		default:
			cout << "wrong.......enter a number from 1 to 7 \n";
			

		}
	}
	system("pause");
}