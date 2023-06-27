#include <fstream.h>
#include <conio.h>
#include <process.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <dos.h>
#include <stdlib.h>
#include <stdio.h>

void frame()
{
    int i, j;
    for (i = 3, j = 1; i < 78; i++, j++)
    {
        gotoxy(i, 2);
        cout << char(205);
        sound(j * 10);

        delay(10);
        nosound();
    }
    nosound();

    for (i = 3; i < 47; i++, j++)
    {
        gotoxy(77, i);
        cout << char(205);
        sound(j * 20);
        delay(10);
        nosound();
    }
    nosound();
    for (i = 77; i > 2; i--, j--)
    {
        gotoxy(i, 47);
        cout << char(205);
        sound(j * 20);
        delay(10);

        nosound();
    }
    nosound();
    for (i = 46; i > 2; i--, j--)
    {
        gotoxy(3, i);
        cout << char(205);
        sound(j * 10);
        delay(10);
        nosound();
    }
    nosound();
}

class bank
{
    int accno;
    char n[50], actype, phone[11];
    float balance;

public:
    void accept()
    {
        gotoxy(18, 16);
        cout << "Enter the account no. ";

        cin >> accno;

        gotoxy(18, 18);
        cout << "Enter the name ";
        cin.get();
        cin.getline(n, 20);

        while (1)
        {
            gotoxy(18, 20);
            cout << "Enter the account type S or C";
            gotoxy(18, 21);
            cout << "(S for Saving Account and C for Current Account) ";
            cin >> actype;

            if (toupper(actype) == 'S' || toupper(actype) == 'C')
                break;
            else
            {
                gotoxy(18, 22);
                cout << "Enter the account type as S or C only ";
            }
        }

        gotoxy(18, 24);
        cout << "Enter the balance ";
        cin >> balance;

        gotoxy(18, 26);
        cout << "Enter the phone no. ";
        cin >> phone;
        cout << '\n';
    }
    void modify()
    {
        gotoxy(18, 18);
        cout << "Enter the name ";
        cin.get();
        cin.getline(n, 20);

        while (1)
        {
            gotoxy(18, 20);
            cout << "Enter the account type S or C ";
            gotoxy(18, 21);
            cout << "(S for Saving Account and C for Current Account) ";

            cin >> actype;

            if (toupper(actype) == 'S' || toupper(actype) == 'C')
                break;
            else
            {
                gotoxy(18, 22);
                cout << "Enter the account type as S or C only ";
            }
        }

        gotoxy(18, 24);
        cout << "Enter the balance ";
        cin >> balance;

        gotoxy(18, 26);
        cout << "Enter the phone no. ";
        cin >> phone;
        cout << '\n';
    }

    void display()
    {
        gotoxy(18, 16);

        cout << "Account No. " << accno << '\n';

        gotoxy(18, 18);
        cout << "Name " << n << '\n';

        gotoxy(18, 20);
        cout << "Account type " << actype << '\n';

        gotoxy(18, 22);
        cout << "Balance " << balance << '\n';

        gotoxy(18, 24);
        cout << "Phone No. " << phone << '\n'
             << '\n';
    }
    void deposit(float a)
    {
        balance += a;
        gotoxy(18, 20);
        cout << "Your amount is deposited." << '\n'
             << '\n';
    }
    void withdraw(float a)
    {
        if (balance - 1000 >= a)

        {
            balance -= a;
            gotoxy(18, 20);
            cout << "Your amount is withdrawn." << '\n'
                 << '\n';
        }
        else
        {
            gotoxy(18, 20);
            cout << "Withdrawl is not possible." << '\n'
                 << '\n';
        }
    }
    int search(int acc)
    {
        if (accno == acc)
            return (1);
        else
            return (0);
    }
};

class loan
{
    int accno, d, m, y;
    char n[50], actype, phone[11], lid[20];
    float balance, amt;

public:
    void accept()
    {
        gotoxy(18, 16);
        cout << "Enter loan id ";
        cin >> lid;

        gotoxy(18, 18);
        cout << "Enter the account no. ";
        cin >> accno;

        gotoxy(18, 20);
        cout << "Enter the name ";
        cin.get();
        cin.getline(n, 20);

        while (1)
        {
            gotoxy(18, 22);
            cout << "Enter the account type S or C";
            gotoxy(18, 23);
            cout << " (S for Saving Account and C for Current Account) ";
            cin >> actype;

            if (toupper(actype) == 'S' || toupper(actype) == 'C')
                break;
            else
            {
                gotoxy(18, 24);
                cout << "Enter the account type as S or C only ";
            }
        }

        gotoxy(18, 26);
        cout << "Enter the balance ";
        cin >> balance;

        gotoxy(18, 28);
        cout << "Enter the phone no. ";
        cin >> phone;

        gotoxy(18, 30);
        cout << "Enter the loan amount ";
        cin >> amt;

        gotoxy(18, 32);
        cout << "Enter the date of issuing loan ";

        gotoxy(50, 32);
        cin >> d;
        gotoxy(53, 32);
        cin >> m;
        gotoxy(56, 32);
        cin >> y;
        cout << '\n';
    }
    void modify()
    {
        gotoxy(18, 20);
        cout << "Enter the name ";
        cin.get();
        cin.getline(n, 20);

        while (1)
        {
            gotoxy(18, 22);
            cout << "Enter the account type S or C ";
            gotoxy(18, 23);
            cout << "(S for Saving Account and C for Current Account) ";
            cin >> actype;

            if (toupper(actype) == 'S' || toupper(actype) == 'C')
                break;
            else
            {
                gotoxy(18, 24);
                cout << "Enter the account type as S or C only ";
            }
        }

        gotoxy(18, 26);
        cout << "Enter the balance ";
        cin >> balance;

        gotoxy(18, 28);
        cout << "Enter the phone no. ";
        cin >> phone;

        gotoxy(18, 30);
        cout << "Enter the loan amount ";
        cin >> amt;
        gotoxy(18, 32);
        cout << "Enter the date of issuing loan ";
        gotoxy(50, 32);

        cin >> d;
        gotoxy(53, 32);
        cin >> m;
        gotoxy(56, 32);
        cin >> y;
        cout << '\n';
    }

    void display()
    {
        gotoxy(18, 16);
        cout << "Loan ID " << lid << '\n';

        gotoxy(18, 18);
        cout << "Account No. " << accno << '\n';

        gotoxy(18, 20);
        cout << "Name " << n << '\n';

        gotoxy(18, 22);
        cout << "Account type " << actype << '\n';

        gotoxy(18, 24);
        cout << "Balance " << balance << '\n';

        gotoxy(18, 26);
        cout << "Loan amount " << amt << '\n';

        gotoxy(18, 28);
        cout << "Date of issuing loan " << d << '-' << m << '-' << y << '\n';

        gotoxy(18, 30);
        cout << "Phone No. " << phone << '\n'
             << '\n';
    }
    void depositloan(float a)
    {
        amt = amt - a;
        gotoxy(18, 24);
        cout << "Your amount is deposited" << '\n';
        gotoxy(18, 26);
        cout << "Your remaining loan amount is " << amt << '\n';
    }
    void loantime(int a)
    {
        if (y < y + a)

        {
            amt = amt + (a * 0.1 * amt);
        }
        gotoxy(18, 22);
        cout << "Your total loan amount with  " << a << " year interest is " << amt << '\n';
    }
    int search(int acc, char id[])
    {
        if (accno == acc && strcmp(lid, id) == 0)
            return (1);
        else
            return (0);
    }
};

void main()
{
    clrscr();
    fstream obj, obj1;
    bank b;
    loan ln;
    int l, a, i, j, ch, t, c = 0;
    float amt;
    char id[100];

    char chmain;
    textmode(C40);
    textcolor(RED);

    gotoxy(17, 11);
    char y1[] = "Loading...";
    cputs(y1);
    char y2 = '-';
    textcolor(GREEN);

    for (i = 0; i < 3; i++)
    {
        for (j = 17; j < 28; j++)
        {
            gotoxy(j, 14);
            clreol();
            putch(y2);
            delay(100);
        }
        clreol();
        delay(100);
    }
    textcolor(GREEN);

    char z[] = "       WELCOME TO";
    char z1[] = "ST.MARY'S INTER COLLEGE";
    for (i = 1; i < 12; i++)
    {
        clrscr();
        gotoxy(10, i);
        cputs(z);
        gotoxy(10, i + 1);
        cputs(z1);
        sound(i * 50);
        delay(300);
    }
    nosound();
    for (i = 4; i < 39; i += 2)
    {
        gotoxy(i, 17);
        cout << char(5);
    }
    for (i = 1; i < 200; i = i + 10)
    {
        sound(i * 20);
        delay(100);

        nosound();
    }
    nosound();

    textmode(3);
    textmode(C4350);
    textbackground(BLACK);
    textcolor(RED);
    frame();
    gotoxy(1, 3);
    cout << "         *****************  ST MARY'S INTER COLLEGE  ******************";
    gotoxy(24, 5);
    cout << "****  WELCOME TO THE PROJECT OF C++  ****";
    gotoxy(22, 10);

    cout << '\t' << "ON BANK MANAGEMENT SYSTEM";
    gotoxy(10, 25);
    cout << "Under The Guidance Of-";
    gotoxy(11, 30);
    cout << "MR ANIL KUMAR";
    gotoxy(50, 25);
    cout << "Submitted by-";
    gotoxy(51, 30);
    cout << "SHIVANSH YADAV" << endl;
    cout << " ";
    getch();

    clrscr();
    gotoxy(24, 18);
    cout << "WELCOME TO THE BANK MANAGEMENT SYSTEM" << '\n';
    cout << " ";
    getch();

    do
    {
        clrscr();

        gotoxy(24, 6);
        cout << "Main menu" << '\n';

        gotoxy(24, 8);
        cout << "1-Add records." << '\n';

        gotoxy(24, 10);
        cout << "2-Deposit money." << '\n';

        gotoxy(24, 12);
        cout << "3-Withdraw money." << '\n';

        gotoxy(24, 14);
        cout << "4-Display single account details." << '\n';

        gotoxy(24, 16);
        cout << "5-Display all accounts details." << '\n';

        gotoxy(24, 18);
        cout << "6-Modify a account holder's details" << '\n';

        gotoxy(24, 20);
        cout << "7-Delete a account holder's details" << '\n';

        gotoxy(24, 22);
        cout << "8-Issue a loan." << '\n';

        gotoxy(24, 24);
        cout << "9-Return a loan." << '\n';

        gotoxy(24, 26);
        cout << "10-Display single loan details." << '\n';

        gotoxy(24, 28);
        cout << "11-Display all loan details." << '\n';

        gotoxy(24, 30);
        cout << "12-Modify loan details." << '\n';

        gotoxy(24, 32);
        cout << "13-Delete a loan account." << '\n';

	gotoxy(24, 34);
	cout << "14-Exit" << '\n';

	gotoxy(24, 36);
	cout << "Enter your choice ";
	cin >> ch;
	cout << '\n';
	clrscr();
        switch (ch)
        {
        case 1:
            obj.open("bank.dat", ios::binary | ios::app);
            b.accept();
            obj.write((char *)&b, sizeof(b));
            obj.close();
            break;
        case 2:
            obj.open("bank.dat", ios::binary | ios::in | ios::out);

            gotoxy(18, 16);
            cout << "Enter the account no. ";
            cin >> a;

            gotoxy(18, 18);
            cout << "Enter the amount to be deposited ";
            cin >> amt;
            c = 0;
            while (!obj.eof())
            {
                obj.read((char *)&b, sizeof(b));
                l = b.search(a);
                c++;
                if (l == 1)
                {
                    b.deposit(amt);
                    obj.seekp((c - 1) * sizeof(b), ios::beg);
                    obj.write((char *)&b, sizeof(b));
                    break;
                }
            }
            if (l == 0)
            {
                clrscr();
                gotoxy(18, 20);
                cout << "Account not found." << '\n';
            }
            gotoxy(18, 50);

            cout << "Press any key.....";
            getch();
            obj.close();
            break;
        case 3:
            obj.open("bank.dat", ios::binary | ios::in | ios::out);

            gotoxy(18, 16);
            cout << "Enter the account no. ";
            cin >> a;

            gotoxy(18, 18);
            cout << "Enter the amount to be withdrawn ";
            cin >> amt;
            c = 0;
            while (!obj.eof())
            {
                obj.read((char *)&b, sizeof(b));
                l = b.search(a);
                c++;
                if (l == 1)
                {
                    b.withdraw(amt);

                    obj.seekp((c - 1) * sizeof(b), ios::beg);
                    obj.write((char *)&b, sizeof(b));
                    break;
                }
            }
            if (l == 0)
            {
                clrscr();
                gotoxy(18, 20);
                cout << "Account not found." << '\n';
            }
            gotoxy(18, 50);
            cout << "Press any key.....";
            getch();
            obj.close();
            break;
        case 4:
            gotoxy(18, 14);
            cout << "Enter the account no. ";
            cin >> a;
            obj.open("bank.dat", ios::binary | ios::in);
            while (!obj.eof())

            {
                obj.read((char *)&b, sizeof(b));
                l = b.search(a);
                if (l == 1)
                {
                    b.display();
                    break;
                }
            }
            if (l == 0)
            {
                clrscr();
                gotoxy(18, 20);
                cout << "Account not found." << '\n';
            }
            gotoxy(18, 50);
            cout << "Press any key.....";
            getch();
            obj.close();
            break;
        case 5:
            obj.open("bank.dat", ios::binary | ios::in);
            while (!obj.eof())
            {
                clrscr();

                obj.read((char *)&b, sizeof(b));
                if (obj.eof())
                    break;
                b.display();
                gotoxy(18, 50);
                cout << "Press any key.....";
                getch();
            }

            obj.close();
            break;
        case 6:
            gotoxy(18, 16);
            cout << "Enter the account number ";
            cin >> a;
            obj.open("bank.dat", ios::binary | ios::in | ios::out);
            c = 0;
            while (!obj.eof())
            {
                obj.read((char *)&b, sizeof(b));
                l = b.search(a);
                c++;

                if (l == 1)
                {
                    b.modify();
                    obj.seekp((c - 1) * sizeof(b), ios::beg);
                    obj.write((char *)&b, sizeof(b));
                    break;
                }
            }
            if (l == 0)
                if (l == 0)
                {
                    clrscr();
                    gotoxy(18, 20);
                    cout << "Account not found." << '\n';
                }
            gotoxy(18, 32);
            cout << "Press any key.....";
            getch();
            obj.close();
            break;
        case 7:
            obj.open("bank.dat", ios::binary | ios::in);
            obj1.open("temp.dat", ios::binary | ios::out);

            char confirm = 'n';

            gotoxy(18, 14);

            cout << "Enter the account number to be delete ";
            cin >> a;
            int tt = 0;
            while (!obj.eof())
            {
                obj.read((char *)&b, sizeof(b));
                if (obj.eof())
                    break;
                l = b.search(a);
                if (l == 1)
                {
                    b.display();
                    gotoxy(18, 32);
                    cout << "Are you sure you want to delete this account?(y/n) ";
                    cin >> confirm;
                    if (toupper(confirm) == 'N')
                        obj1.write((char *)&b, sizeof(b));
                }

                else
                {
                    tt = 1;
                    obj1.write((char *)&b, sizeof(b));
                }
            }
            obj.close();
            obj1.close();
            remove("bank.dat");
            rename("temp.dat", "bank.dat");
            if (tt == 1)
            {
                clrscr();
                obj.open("bank.dat", ios::binary | ios::in);
                gotoxy(18, 14);
                cout << "Now the accounts are " << '\n';
                while (!obj.eof())
                {
                    obj.read((char *)&b, sizeof(b));
                    if (obj.eof())
                        break;
                    b.display();
                }

                t = 2;
            }
            if (tt == 2)
            {
                clrscr();
                gotoxy(18, 20);
                cout << "Account not found." << '\n';
            }
            gotoxy(18, 50);
            cout << "Press any key.....";
            getch();
            obj.close();
            break;
        case 8:
            obj.open("loan.dat", ios::binary | ios::app);
            ln.accept();
            obj.write((char *)&ln, sizeof(ln));

            gotoxy(18, 40);
            cout << "Your loan is issued." << '\n';
            obj.close();

            gotoxy(18, 50);
            cout << "Press any key.....";
            getch();

            break;
        case 9:
            obj.open("loan.dat", ios::binary | ios::in | ios::out);

            gotoxy(18, 14);
            cout << "Enter the account no. ";
            cin >> a;

            gotoxy(18, 16);
            cout << "Enter the loan id ";
            cin >> id;

            gotoxy(18, 18);
            cout << "Enter the amount to be return for loan ";
            cin >> amt;

            gotoxy(18, 20);

            cout << "Enter the time period ";
            cin >> t;
            c = 0;
            while (!obj.eof())
            {
                obj.read((char *)&ln, sizeof(ln));
                l = ln.search(a, id);
                c++;
                if (l == 1)
                {
                    ln.loantime(t);
                    ln.depositloan(amt);
                    obj.seekp((c - 1) * sizeof(ln), ios::beg);
                    obj.write((char *)&ln, sizeof(ln));
                    break;
                }
            }
            if (l == 0)
            {
                clrscr();
                gotoxy(18, 20);
                cout << "Account not found." << '\n';
            }
            gotoxy(18, 50);

            cout << "Press any key.....";
            getch();
            obj.close();
            break;
        case 10:
            gotoxy(18, 12);
            cout << "Enter the account no. ";
            cin >> a;

            gotoxy(18, 14);
            cout << "Enter the loan id ";
            cin >> id;
            obj.open("loan.dat", ios::binary | ios::in);
            while (!obj.eof())
            {
                obj.read((char *)&ln, sizeof(ln));
                l = ln.search(a, id);
                if (l == 1)
                {
                    ln.display();
                    break;
                }
            }

            if (l == 0)
            {
                clrscr();
                gotoxy(18, 20);
                cout << "Account not found." << '\n';
            }
            gotoxy(18, 50);
            cout << "Press any key.....";
            getch();

            obj.close();
            break;
        case 11:
            obj.open("loan.dat", ios::binary | ios::in);
            while (!obj.eof())
            {
                clrscr();
                obj.read((char *)&ln, sizeof(ln));
                if (obj.eof())
                    break;
                ln.display();
                gotoxy(18, 50);
                cout << "Press any key.....";

                getch();
            }

            obj.close();
            break;
        case 12:
            gotoxy(18, 16);
            cout << "Enter the account number ";
            cin >> a;

            gotoxy(18, 18);
            cout << "Enter the loan id ";
            cin >> id;
            obj.open("loan.dat", ios::binary | ios::in | ios::out);
            c = 0;
            while (!obj.eof())
            {
                obj.read((char *)&ln, sizeof(ln));
                l = ln.search(a, id);
                c++;
                if (l == 1)
                {
                    ln.modify();

                    obj.seekp((c - 1) * sizeof(ln), ios::beg);
                    obj.write((char *)&ln, sizeof(ln));
                    break;
                }
            }
            if (l == 0)
            {
                clrscr();
                gotoxy(18, 20);
                cout << "Account not found." << '\n';
            }
            gotoxy(18, 50);
            cout << "Press any key.....";
            getch();

            obj.close();
            break;
        case 13:
            obj.open("loan.dat", ios::binary | ios::in);
            obj1.open("temp.dat", ios::binary | ios::out);
            confirm = 'n';

            gotoxy(18, 10);
            cout << "Enter the account number to be delete ";
            cin >> a;

            gotoxy(18, 12);
            cout << "Enter the loan id ";
            cin >> id;
            tt = 0;
            while (!obj.eof())
            {
                obj.read((char *)&ln, sizeof(ln));
                if (obj.eof())
                    break;
                l = ln.search(a, id);
                if (l == 1)
                {
                    ln.display();
                    gotoxy(18, 32);
                    cout << "Are you sure you want to delete this account?(y/n) ";
                    cin >> confirm;
                    if (toupper(confirm) == 'N')
                        obj1.write((char *)&ln, sizeof(ln));
                }
                else
                {
                    tt = 1;
                    obj1.write((char *)&ln, sizeof(ln));
                }
            }
            obj.close();
            obj1.close();
            remove("loan.dat");
            rename("temp.dat", "loan.dat");
            if (tt == 1)
            {
                clrscr();
                obj.open("loan.dat", ios::binary | ios::in);
                gotoxy(18, 14);
                cout << "Now the accounts are " << '\n';
                while (!obj.eof())
                {
                    obj.read((char *)&ln, sizeof(ln));
                    if (obj.eof())
                        break;
                    ln.display();
                }
                t = 2;
            }
            if (tt == 2)
            {
                clrscr();
                gotoxy(18, 20);
                cout << "Account not found." << '\n';
            }
            gotoxy(18, 50);
            cout << "Press any key.....";
            getch();
            obj.close();
            break;
        case 14:
            gotoxy(18, 22);
            cout << "Closing.....";
            delay(2000);
            exit(0);
        default:
            cout << "INVALID INPUT" << '\n';
        }
        cout << '\n';
    } while (1);
}
