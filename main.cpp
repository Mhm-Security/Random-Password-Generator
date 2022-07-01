#include <iostream>
// #include<iomanip>
#include <chrono>
using namespace std::chrono; //for time header file
using namespace std;
// 1.southile pela user select kershe 1 2 3 whatever
// 2.eni pachi user enter kershe ke how many lenght of passaword
// 3. pachi select kershe ke password compexcity
// 4.and pachi function password ni if user enter kare to kevanu ke password ni compexcity aatli che

void headMessage()
{
    // system("clear");
    cout << "\033[0;33m\n\t\t\t###########################################################################" << endl;
    cout << "\033[0;36m\n\t\t\t############                                                   ############" << endl;
    cout << "\n\t\t\t############ \033[0;32m          Welcome To Password Generator \033[0;36m          ############" << endl;
    cout << "\n\t\t\t############                                                   ############" << endl;
    cout << "\033[0;33m\n\t\t\t###########################################################################\033[0;37m" << endl;    
}
void all(int n)
{

    auto start = high_resolution_clock::now();
    int i = 0;
    int randomizer = 0;
    srand((unsigned int)(time(NULL))); //unsigned int store 10^10
    char numbers[] = "0123456789";
    char letter[] = "abcdefghijklmnoqprstuvwyzx";
    char LETTER[] = "ABCDEFGHIJKLMNOQPRSTUYWVZX";
    char symbols[] = "!@#$%^&*()_+-=?/<,':;{[}]|";
    char password[n];
    randomizer = rand() % 4;
    cout << "\n\t\t\t---------------------------------------------------------------------------\033[0;34m\n";
    cout << "\t\t\t\t\t\t\t";
    for (i = 0; i < n; i++)
    {
        if (randomizer == 1)
        {
            password[i] = numbers[rand() % 10];
            randomizer = rand() % 4;
            cout << password[i];
        }
        else if (randomizer == 2)
        {
            password[i] = symbols[rand() % 26];
            randomizer = rand() % 4;
            cout << password[i];
        }
        else if (randomizer == 3)
        {
            password[i] = LETTER[rand() % 26];
            randomizer = rand() % 4;
            cout << password[i];
        }
        else
        {
            password[i] = letter[rand() % 26];
            randomizer = rand() % 4;
            cout << password[i];
        }
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "\n\t\t\t\033[0;35m############ Time taken to Generate Password is " << duration.count() << " microseconds ###########";
    cout << "\n\t\t\t\033[0;37m---------------------------------------------------------------------------\n";
}
void numb(int n)
{ 
    auto start = high_resolution_clock::now();
    int i = 0;
    int randomizer = 0;
    srand((unsigned int)(time(NULL)));
    char numbers[] = "0123456789";
    char password[n];
    cout << "\n\t\t\t---------------------------------------------------------------------------\033[0;32m\n";
    cout << "\t\t\t\t\t\t\t";
    for (i = 0; i < n; i++)
    {
        password[i] = numbers[rand() % 10];
        randomizer = rand() % 4;

        cout << password[i];
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "\n\t\t\t\033[0;35m############ Time taken to Generate Password is " << duration.count() << " microseconds ###########";
    cout << "\n\t\t\t\033[0;37m---------------------------------------------------------------------------\n";
    
}
void letter(int n)
{
    auto start = high_resolution_clock::now();
    cout << "\n\t\t\t\033[0;37m---------------------------------------------------------------------------\n";
    int i = 0;
    int randomizer = 0;
    srand((unsigned int)(time(NULL)));
    char letter[] = "abcdefghijklmnoqprstuvwyzx";
    char password[n];
    cout << "\n\t\t\t---------------------------------------------------------------------------\033[0;33m\n";
    cout << "\t\t\t\t\t\t\t";
    for (i = 0; i < n; i++)
    {
        password[i] = letter[rand() % 26];
        randomizer = rand() % 4;
        cout << password[i];
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "\n\t\t\t\033[0;35m############ Time taken to Generate Password is " << duration.count() << " microseconds ###########";
    cout << "\n\t\t\t\033[0;37m---------------------------------------------------------------------------\n";
}
void LETTER(int n)
{
    auto start = high_resolution_clock::now();
    cout << "\n\t\t\t\033[0;37m---------------------------------------------------------------------------\n";
    int i = 0;
    int randomizer = 0;
    srand((unsigned int)(time(NULL)));
    char LETTER[] = "ABCDEFGHIJKLMNOQPRSTUYWVZX";
    char password[n];
    cout << "\n\t\t\t---------------------------------------------------------------------------\033[0;35m\n";
    cout << "\t\t\t\t\t\t\t";
    for (i = 0; i < n; i++)
    {
        password[i] = LETTER[rand() % 26];
        randomizer = rand() % 4;
        cout << password[i];
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "\n\t\t\t\033[0;35m############ Time taken to Generate Password is " << duration.count() << " microseconds ###########";
    cout << "\n\t\t\t\033[0;37m---------------------------------------------------------------------------\n";
}
void symbols(int n)
{
    auto start = high_resolution_clock::now();
    cout << "\n\t\t\t\033[0;37m---------------------------------------------------------------------------\n";
    int i = 0;
    int randomizer = 0;
    srand((unsigned int)(time(NULL)));
    char symbols[] = "!@#$%^&*()_+-=?/<,':;{[}]|";
    char password[n];
    cout << "\n\t\t\t---------------------------------------------------------------------------\033[0;36m\n";
    cout << "\t\t\t\t\t\t\t";
    for (i = 0; i < n; i++)
    {
        password[i] = symbols[rand() % 26];
        randomizer = rand() % 4;
        cout << password[i];
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "\n\t\t\t\033[0;35m############ Time taken to Generate Password is " << duration.count() << " microseconds ###########";
    cout << "\n\t\t\t\033[0;37m---------------------------------------------------------------------------\n";
}
void latterandcap(int n)
{
    auto start = high_resolution_clock::now();
    cout << "\n\t\t\t\033[0;37m---------------------------------------------------------------------------\n";
    int i = 0;
    int randomizer = 0;
    srand((unsigned int)(time(NULL)));
    char LETTER[] = "ABCDEFGHIJKLMNOQPRSTUYWVZX";
    char letter[] = "abcdefghijklmnoqprstuvwyzx";
    randomizer = rand() % 4;
    char password[n];
    cout << "\n\t\t\t---------------------------------------------------------------------------\033[0;32m\n";
    cout << "\t\t\t\t\t\t\t";
    for (i = 0; i < n; i++)
    {
        if (randomizer == 1)
        {
            password[i] = LETTER[rand() % 26];
            randomizer = rand() % 4;
            cout << password[i];
        }
        else
        {
            password[i] = letter[rand() % 26];
            randomizer = rand() % 4;
            cout << password[i];
        }
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "\n\t\t\t\033[0;35m############ Time taken to Generate Password is " << duration.count() << " microseconds ###########";
    cout << "\n\t\t\t\033[0;37m---------------------------------------------------------------------------\n";
}
void latterandnum(int n)
{
    auto start = high_resolution_clock::now();
    cout << "\n\t\t\t\033[0;37m---------------------------------------------------------------------------\n";
    int i = 0;
    int randomizer = 0;
    srand((unsigned int)(time(NULL)));
    char numbers[] = "0123456789";
    char letter[] = "abcdefghijklmnoqprstuvwyzx";
    randomizer = rand() % 4;
    char password[n];
    cout << "\n\t\t\t---------------------------------------------------------------------------\033[0;33m\n";
    cout << "\t\t\t\t\t\t\t";
    for (i = 0; i < n; i++)
    {
        if (randomizer == 1)
        {
            password[i] = letter[rand() % 26];
            randomizer = rand() % 4;
            cout << password[i];
        }
        else
        {
            password[i] = numbers[rand() % 10];
            randomizer = rand() % 4;
            cout << password[i];
        }
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "\n\t\t\t\033[0;35m############ Time taken to Generate Password is " << duration.count() << " microseconds ###########";
    cout << "\n\t\t\t\033[0;37m---------------------------------------------------------------------------\n";
}
void latterandsym(int n)
{
    auto start = high_resolution_clock::now();
    cout << "\n\t\t\t\033[0;37m---------------------------------------------------------------------------\n";
    int i = 0;
    int randomizer = 0;
    srand((unsigned int)(time(NULL)));
    char symbols[] = "!@#$%^&*()_+-=?/<,':;{[}]|";
    char letter[] = "abcdefghijklmnoqprstuvwyzx";
    randomizer = rand() % 4;
    char password[n];
    cout << "\n\t\t\t---------------------------------------------------------------------------\033[0;35m\n";
    cout << "\t\t\t\t\t\t\t";
    for (i = 0; i < n; i++)
    {
        if (randomizer == 1)
        {
            password[i] = letter[rand() % 26];
            randomizer = rand() % 4;
            cout << password[i];
        }
        else
        {
            password[i] = symbols[rand() % 26];
            randomizer = rand() % 4;
            cout << password[i];
        }
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "\n\t\t\t\033[0;35m############ Time taken to Generate Password is " << duration.count() << " microseconds ###########";
    cout << "\n\t\t\t\033[0;37m---------------------------------------------------------------------------\n";
}
void LETTERandnum(int n)
{
    auto start = high_resolution_clock::now();
    cout << "\n\t\t\t\033[0;37m---------------------------------------------------------------------------\n";
    int i = 0;
    int randomizer = 0;
    srand((unsigned int)(time(NULL)));
    char numbers[] = "0123456789";
    char LETTER[] = "ABCDEFGHIJKLMNOQPRSTUYWVZX";
    randomizer = rand() % 4;
    char password[n];
    cout << "\n\t\t\t---------------------------------------------------------------------------\033[0;36m\n";
    cout << "\t\t\t\t\t\t\t";
    for (i = 0; i < n; i++)
    {
        if (randomizer == 1)
        {
            password[i] = LETTER[rand() % 26];
            randomizer = rand() % 4;
            cout << password[i];
        }
        else
        {
            password[i] = numbers[rand() % 10];
            randomizer = rand() % 4;
            cout << password[i];
        }
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "\n\t\t\t\033[0;35m############ Time taken to Generate Password is " << duration.count() << " microseconds ###########";
    cout << "\n\t\t\t\033[0;37m---------------------------------------------------------------------------\n";
}
void LETTERandsym(int n)
{
    auto start = high_resolution_clock::now();
    cout << "\n\t\t\t\033[0;37m---------------------------------------------------------------------------\n";
    int i = 0;
    int randomizer = 0;
    srand((unsigned int)(time(NULL)));
    char symbols[] = "!@#$%^&*()_+-=?/<,':;{[}]|";
    char LETTER[] = "ABCDEFGHIJKLMNOQPRSTUYWVZX";
    randomizer = rand() % 4;
    char password[n];
    cout << "\n\t\t\t---------------------------------------------------------------------------\033[0;32m\n";
    cout << "\t\t\t\t\t\t\t";
    for (i = 0; i < n; i++)
    {
        if (randomizer == 1)
        {
            password[i] = LETTER[rand() % 26];
            randomizer = rand() % 4;
            cout << password[i];
        }
        else
        {
            password[i] = symbols[rand() % 26];
            randomizer = rand() % 4;
            cout << password[i];
        }
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "\n\t\t\t\033[0;35m############ Time taken to Generate Password is " << duration.count() << " microseconds ###########";
    cout << "\n\t\t\t\033[0;37m---------------------------------------------------------------------------\n";
}
void NumberandSym(int n)
{
    auto start = high_resolution_clock::now();
    cout << "\n\t\t\t\033[0;37m---------------------------------------------------------------------------\n";
    int i = 0;
    int randomizer = 0;
    srand((unsigned int)(time(NULL)));
    char symbols[] = "!@#$%^&*()_+-=?/<,':;{[}]|";
    char numbers[] = "0123456789";
    randomizer = rand() % 4;
    char password[n];
    cout << "\n\t\t\t---------------------------------------------------------------------------\033[0;33m\n";
    cout << "\t\t\t\t\t\t\t";
    for (i = 0; i < n; i++)
    {
        if (randomizer == 1)
        {
            password[i] = numbers[rand() % 26];
            randomizer = rand() % 4;
            cout << password[i];
        }
        else
        {
            password[i] = symbols[rand() % 26];
            randomizer = rand() % 4;
            cout << password[i];
        }
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "\n\t\t\t\033[0;35m############ Time taken to Generate Password is " << duration.count() << " microseconds ###########";
    cout << "\n\t\t\t\033[0;37m---------------------------------------------------------------------------\n";
}
void lLNumber(int n)
{
    auto start = high_resolution_clock::now();
    cout << "\n\t\t\t\033[0;37m---------------------------------------------------------------------------\n";
    system("clear");
    int i = 0;
    int randomizer = 0;
    srand((unsigned int)(time(NULL)));
    char letter[] = "abcdefghijklmnoqprstuvwyzx";
    char LETTER[] = "ABCDEFGHIJKLMNOQPRSTUYWVZX";
    char numbers[] = "0123456789";
    randomizer = rand() % 4;
    char password[n];
    cout << "\n\t\t\t---------------------------------------------------------------------------\033[0;35m\n";
    cout << "\t\t\t\t\t\t\t";
    for (i = 0; i < n; i++)
    {
        if (randomizer == 1)
        {
            password[i] = LETTER[rand() % 26];
            randomizer = rand() % 4;
            cout << password[i];
        }
        else if (randomizer == 2)
        {
            password[i] = numbers[rand() % 10];
            randomizer = rand() % 4;
            cout << password[i];
        }
        else
        {
            password[i] = letter[rand() % 26];
            randomizer = rand() % 4;
            cout << password[i];
        }
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "\n\t\t\t\033[0;35m############ Time taken to Generate Password is " << duration.count() << " microseconds #########";
    cout << "\n\t\t\t\033[0;37m---------------------------------------------------------------------------\n";
}
void symletNum(int n)
{
    auto start = high_resolution_clock::now();
    cout << "\n\t\t\t\033[0;37m---------------------------------------------------------------------------\n";
    int i = 0;
    int randomizer = 0;
    srand((unsigned int)(time(NULL)));
    char symbols[] = "!@#$%^&*()_+-=?/<,':;{[}]|";
    char letter[] = "abcdefghijklmnoqprstuvwyzx";
    char numbers[] = "0123456789";
    randomizer = rand() % 4;
    char password[n];
    cout << "\n\t\t\t---------------------------------------------------------------------------\033[0;36m\n";
    cout << "\t\t\t\t\t\t\t";
    for (i = 0; i < n; i++)
    {
        if (randomizer == 1)
        {
            password[i] = letter[rand() % 26];
            randomizer = rand() % 4;
            cout << password[i];
        }
        else if (randomizer == 2)
        {
            password[i] = numbers[rand() % 10];
            randomizer = rand() % 4;
            cout << password[i];
        }
        else
        {
            password[i] = symbols[rand() % 26];
            randomizer = rand() % 4;
            cout << password[i];
        }
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "\n\t\t\t\033[0;35m############ Time taken to Generate Password is " << duration.count() << " microseconds ###########";
    cout << "\n\t\t\t\033[0;37m---------------------------------------------------------------------------\n";
}
void symLETNum(int n)
{
    auto start = high_resolution_clock::now();
    cout << "\n\t\t\t\033[0;37m---------------------------------------------------------------------------\n";
    int i = 0;
    int randomizer = 0;
    srand((unsigned int)(time(NULL)));
    char symbols[] = "!@#$%^&*()_+-=?/<,':;{[}]|";
    char LETTER[] = "ABCDEFGHIJKLMNOQPRSTUYWVZX";
    char numbers[] = "0123456789";
    randomizer = rand() % 4;
    char password[n];
    cout << "\n\t\t\t---------------------------------------------------------------------------\033[0;32m\n";
    cout << "\t\t\t\t\t\t\t";
    for (i = 0; i < n; i++)
    {
        if (randomizer == 1)
        {
            password[i] = LETTER[rand() % 26];
            randomizer = rand() % 4;
            cout << password[i];
        }
        else if (randomizer == 2)
        {
            password[i] = numbers[rand() % 10];
            randomizer = rand() % 4;
            cout << password[i];
        }
        else
        {
            password[i] = symbols[rand() % 26];
            randomizer = rand() % 4;
            cout << password[i];
        }
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "\n\t\t\t\033[0;35m############ Time taken to Generate Password is " << duration.count() << " microseconds ###########";
    cout << "\n\t\t\t\033[0;37m---------------------------------------------------------------------------\n";
}
void letLETsym(int n)
{
    auto start = high_resolution_clock::now();
    cout << "\n\t\t\t\033[0;37m---------------------------------------------------------------------------\n";
    int i = 0;
    int randomizer = 0;
    srand((unsigned int)(time(NULL)));
    char letter[] = "abcdefghijklmnoqprstuvwyzx";
    char LETTER[] = "ABCDEFGHIJKLMNOQPRSTUYWVZX";
    char symbols[] = "!@#$%^&*()_+-=?/<,':;{[}]|";
    randomizer = rand() % 4;
    char password[n];
    cout << "\n\t\t\t---------------------------------------------------------------------------\033[0;33m\n";
    cout << "\t\t\t\t\t\t\t";
    for (i = 0; i < n; i++)
    {
        if (randomizer == 1)
        {
            password[i] = LETTER[rand() % 26];
            randomizer = rand() % 4;
            cout << password[i];
        }
        else if (randomizer == 2)
        {
            password[i] = letter[rand() % 10];
            randomizer = rand() % 4;
            cout << password[i];
        }
        else
        {
            password[i] = symbols[rand() % 26];
            randomizer = rand() % 4;
            cout << password[i];
        }
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "\n\t\t\t\033[0;35m############ Time taken to Generate Password is " << duration.count() << " microseconds ###########";
    cout << "\n\t\t\t\033[0;37m---------------------------------------------------------------------------\n";
}
int menu()
{
    int n;
    int choice = 0;
    cout << "\n\033[0;31m" << setw(40) <<"(1) Number only" <<"\033[0;32m" <<setw(67) << "(2) Lower case only\033[0;37m" << endl;
    cout <<"\033[0;33m"<<setw(44)<< "(3) Upper case only"<<"\033[0;34m"<< setw(54) << "(4) Symbols only " <<endl;
    cout <<"\033[0;35m"<<setw(56)<<"(5) Lower case,Upper case only "<<"\033[0;36m"<<setw(52) << "(6) Lower case,number only " << endl;
    cout <<"\033[0;31m"<<setw(53)<<"(7) Lower case,Symbols only " <<"\033[0;32m"<<setw(55) <<"(8) Upper case,Number only " << endl;
    cout <<"\033[0;33m"<<setw(53)<<"(9) Upper case,Symbols only "<<"\033[0;34m" <<setw(53)<< "(10) Number,Symbols only " << endl;
    cout <<"\033[0;35m"<<setw(65)<<"(11) Lower case,Upper case ,Number only " <<"\033[0;36m"<<setw(53)<< "(12) Upper case,Symbols, Number only " << endl;
    cout <<"\033[0;31m"<<setw(68)<<"(13) Lower case,Number,Symbols Number only " <<"\033[0;32m"<<setw(60)<< "(14) Lower case,Upper case,Symbols Number only " << endl;
    cout <<"\033[0;33m"<<setw(41)<<"(15) Everything\n"<< endl;
    cout << "\t\t\t\033[0;34m Enter Number 1 to 15:-  ";
    cin >> choice;
    cout <<"\033[0;36m"<< "\n"<<setw(49)<<"Enter Password Length:- ";
    switch (choice)
    {
    case 0:
        cin >> n;
        numb(n);
        int main();
    case 1:
        cin >> n;
        numb(n);
        main();

    case 2:
        cin >> n;
        letter(n);
        main();

    case 3:
        cin >> n;
        LETTER(n);
        main();
    case 4:
        cin >> n;
        symbols(n);
        main();
    case 5:
        cin >> n;
        latterandcap(n);
        main();
    case 6:
        cin >> n;
        latterandnum(n);
        main();
    case 7:
        cin >> n;
        latterandsym(n);
        main();
    case 8:
        cin >> n;
        LETTERandnum(n);
        main();
    case 9:
        cin >> n;
        LETTERandsym(n);
        main();
    case 10:
        cin >> n;
        NumberandSym(n);
        main();
    case 11:
        cin >> n;
        lLNumber(n);
        main();
    case 12:
        cin >> n;
        symLETNum(n);
        main();
    case 13:
        cin >> n;
        symletNum(n);
        main();
    case 14:
        cin >> n;
        letLETsym(n);
        main();
    case 15:
        cin >> n;
        all(n);
        main();

    default:
        cout << "\n\n\n\t\t\t \033[0;31m Invalied Input Try again...\033[0;37m" << endl;

        main();
    }
    return 0;
}
int main(void)
{
    headMessage();
    menu();
    return 0;
}
