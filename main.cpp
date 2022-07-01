#include <iostream>
#include <fstream>
#include <stdio.h>
#include <iomanip>
using namespace std;

void encrypt()
{
    char fileName[30], ch, e;
    int pin;
    cout << "Remember This Pin For Decrypt :: 1563" <<endl;
    cout << "Enter Pin :" << endl;
    cin >> hex >> pin;
    cout << "Enter the Name of File: " << endl;
    cin >> fileName;
    cout << "Enter Password " << endl;
    cin >> e;
    fstream fps, fpt;
    fps.open(fileName, fstream::in);
    if (!fps)
    {
        cout << "\nError Occurred, Opening the Source File (to Read)!";
    }
    fpt.open("tmp.txt", fstream::out);
    if (!fpt)
    {
        cout << "\nError Occurred, Opening/Creating the tmp File!";
    }
    while (fps >> noskipws >> ch)
    {
        ch = ch + e + pin;
        fpt << ch;
    }

    fps.close();
    fpt.close();
    fps.open(fileName, fstream::out);
    if (!fps)
    {
        cout << "\nError Occurred, Opening the Source File (to write)!";
    }
    fpt.open("tmp.txt", fstream::in);
    if (!fpt)
    {
        cout << "\nError Occurred, Opening the tmp File!";
    }
    while (fpt >> noskipws >> ch)
        fps << ch;
    fps.close();
    fpt.close();
    cout << "\nFile '" << fileName << "' Encrypted Successfully!" << endl;
}

void decrypt()
{
    int verify_pin;
    cout << "Enter Your By Default Pin "<<endl;
    cin >> verify_pin;
    char d_fileName[30], d_ch, d_e;
    int d_pin;
    if (verify_pin == 1563)
    {
        cout << "Enter Pin :" << endl;
        cin >> hex >> d_pin;
        cout << "Enter the Name of File: " << endl;
        cin >> d_fileName;
        cout << "Enter Password " << endl;
        cin >> d_e;
        fstream d_fps, d_fpt;

        d_fps.open(d_fileName, fstream::in);
        if (!d_fps)
        {
            cout << "\nError Occurred, Opening the Source File (to Read)!";
        }
        d_fpt.open("tmp.txt", fstream::out);
        if (!d_fpt)
        {
            cout << "\nError Occurred, Opening/Creating the tmp File!";
        }
        while (d_fps >> noskipws >> d_ch)
        {
            d_ch = d_ch - d_e - d_pin;
            d_fpt << d_ch;
        }

        d_fps.close();
        d_fpt.close();
        d_fps.open(d_fileName, fstream::out);
        if (!d_fps)
        {
            cout << "\nError Occurred, Opening the Source File (to write)!";
        }
        d_fpt.open("tmp.txt", fstream::in);
        if (!d_fpt)
        {
            cout << "\nError Occurred, Opening the tmp File!";
        }
        while (d_fpt >> noskipws >> d_ch)
            d_fps << d_ch;
        d_fps.close();
        d_fpt.close();
        cout << "\nFile '" << d_fileName << "' Decrypted Successfully!" << endl;
    }
    else{
        cout << "Your By Defult Pin Is Worng";
    }
}
void menu()
{
    int choice;
    cout << "\nEnter 1 to Encrypt Your massages\n";
    cout << "\nEnter 2 to Decrypt Your massages\n";
    cin >> choice;

    switch (choice)
    {
    case 1:
        encrypt();
        menu();

    case 2:
        decrypt();
        menu();
    }
}

int main()
{
    menu();
    return 0;
}
