# Bank Management System

This is a Bank Management System program written in C++. It allows users to perform various banking operations such as creating accounts, depositing money, withdrawing money, issuing loans, and managing loan accounts.

## Features

- Add account: Users can add new bank accounts by providing account details such as account number, name, account type (saving or current), balance, and phone number.
- Deposit money: Users can deposit money into their bank accounts by specifying the account number and the amount to be deposited.
- Withdraw money: Users can withdraw money from their bank accounts, given that the account balance is sufficient.
- Display account details: Users can view the details of a single bank account by entering the account number.
- Display all accounts: Users can view the details of all bank accounts stored in the system.
- Modify account details: Users can modify the details of an existing bank account by specifying the account number.
- Delete account: Users can delete a bank account from the system by entering the account number.
- Issue loan: Users can issue loans by providing loan details such as loan ID, account number, name, account type, balance, loan amount, and date of issuing the loan.
- Return loan: Users can deposit money to repay a loan, reducing the loan amount.
- Display loan details: Users can view the details of a single loan by entering the loan ID and account number.
- Display all loans: Users can view the details of all loans stored in the system.
- Modify loan details: Users can modify the details of an existing loan by specifying the loan ID and account number.
- Delete loan: Users can delete a loan account from the system by entering the loan ID and account number.

## How to Use

1. Compile the source code using a C++ compiler.
2. Run the executable file.
3. Follow the on-screen menu to perform various banking operations.

## Dependencies

This program uses the following C++ libraries:

- `<fstream.h>`: For file input/output operations.
- `<conio.h>`: For console input/output operations.
- `<process.h>`: For process-related operations.
- `<stdio.h>`: For standard input/output operations.
- `<ctype.h>`: For character handling operations.
- `<string.h>`: For string handling operations.
- `<dos.h>`: For DOS-specific operations.
- `<stdlib.h>`: For standard library functions.

## Limitations

- The program does not provide any authentication or security features. It assumes that the user has appropriate access rights to perform banking operations.
- The program stores data in a binary file (`bank.dat`), which means that the data is not stored in a structured database and can be easily manipulated or lost.
- The program lacks error handling and validation mechanisms. It assumes that the user enters valid input and does not handle exceptional cases appropriately.

## Contribution

This program was developed as a project for the C++ course. Currently, no contributions are accepted.

If you encounter any issues or have suggestions for improvement, please feel free to open an issue in the repository.
## License
This project is licensed under the MIT License. See the LICENSE file for more information.

## Link
You can see and run the code here : [BankSystem](https://onlinegdb.com/_HcCXN2vU)

## Credits
- Shivansh Yadav (https://github.com/iamshivanshyadav)
