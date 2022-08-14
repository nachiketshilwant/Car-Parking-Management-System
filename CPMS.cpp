#include <bits/stdc++.h>
using namespace std;

int no_bs = 0, no_rk = 0, no_cy = 0, amount = 0;
int cont = 0;

void bus()
{
    no_bs++;
    amount += 200;
    cont++;
}

void riksha()
{
    no_rk++;
    amount += 150;
    cont++;
}

void cycle()
{
    no_cy++;
    amount += 100;
    cont++;
}

int Menu()
{
    int choice;
    cout << "---------------------------------------" << endl;
    cout << "PRESS 1 FOR BUS CHARGES IS 200 INR" << endl;
    cout << "PRESS 2 FOR RICKSHAW CHARGES IS 150 INR" << endl;
    cout << "PRESS 3 FOR CYCLE CHARGES IS 100 INR" << endl;
    cout << "PRESS 4 TO SEE THE ENTERED RECORD" << endl;
    cout << "PRESS 5 TO DELETE THE RECORD" << endl;
    cout << "PRESS 6 FOR EXIT" << endl;
    cout << "---------------------------------------" << endl;
    cout << "PLEASE ENTER YOUR CHOICE" << endl;
    cin >> choice;
    return choice;
}

void showdetails()
{
    cout << "---------------------------------------" << endl;
    cout << "TOTAL NUMBER OF BUS STANDING IN PARKING :" << no_bs << endl;
    cout << "TOTAL NUMBER OF CYCLE STANDING IN PARKING :" << no_cy << endl;
    cout << "TOTAL NUMBER OF RICKSHAW STANDING IN PARKING :" << no_rk << endl;
    cout << "TOTAL NUMBER OF VEHICLE STANDING IN PARKING AREA :" << cont << endl;
    cout << "TOTAL COLLECTION OF PARKING :" << amount << endl;
    cout << "---------------------------------------" << endl;
}

void Delete()
{
    no_bs = 0;
    no_cy = 0;
    no_rk = 0;
    amount = 0;
    cont = 0;
}

int main()
{
    int choice;

    do
    {
        switch (Menu())
        {
        case 1:
            bus();
            break;
        case 2:
            riksha();
            break;
        case 3:
            cycle();
            break;
        case 4:
            showdetails();
            break;
        case 5:
            Delete();
            break;

        default:
            cout << "WRONG CHOICE SELECTED, SELECT AGAIN" << endl;
            break;
        }

        cout<<"TO ADD/VIEW MORE VEHICLE DETAILS PRESS 0 ELSE ANY NUMBER TO EXIT"<<endl;
        cout<<"ENTER YOUR CHOICE"<<endl;
        cin>>choice;
    } while (choice==0);

    return 0;
}