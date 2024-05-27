#include <iostream>
#include <fstream>

using namespace std;

class compoundintrest
{
private:
    int principle;
    int rate;
    int years;

public:
    void setdata(void);
    void desplaydata(void);
};

void compoundintrest ::setdata(void)
{
    cout << endl;
    cout << "compund intrest" << endl;
    cout << endl;
    cout << "Enter the Principle : " << endl;
    cin >> principle;

    cout << "Enter the rate: " << endl;
    cin >> rate;

    cout << "Enter the years : " << endl;
    cin >> years;
}
void compoundintrest ::desplaydata(void)
{
    cout << principle * 1 + rate / 100 * years + principle;
}

class SimpleIntrest
{
    int principle;
    int rate;
    int years;

public:
    void setdata(void);
    void desplaydata2(void);
};
void SimpleIntrest ::setdata(void)
{
    cout << "Enter The Principle : " << endl;

    cin >> principle;

    cout << "Enter The rate : " << endl;

    cin >> rate;

    cout << "Enter The years : " << endl;

    cin >> years;
};

void SimpleIntrest ::desplaydata2(void)
{

    cout << endl
         << principle * rate * years / 100 << endl;
    cout << "the total amount is" << endl
         << principle * rate * years / 100 + principle << endl;
};
class newcoustomer
{

    int principle1;
    int rate2;
    int years3;
public:
    char customername[50];
    int customerno;
    int customeradress;


    void setnew1(void);
    void desplaynew(void);

};
void newcoustomer ::setnew1(void)
{

    cout << "enter customer name : " << endl;
    cin >> customername;
    cout << "enter customer mobile no : " << endl;
    cin>>customerno;
    cout << "enter the customer adrees : " << endl;
    cin >> customeradress;
    cout << "Enter The Principle : " << endl;

    cin >> principle1;

    cout << "Enter The rate : " << endl;

    cin >> rate2;

    cout << "Enter The years : " << endl;

    cin >> years3;
};
void newcoustomer::desplaynew(void)
{
    cout << endl;
    cout << "simple intrest" << endl
         << principle1 * rate2 * years3 / 100 << endl;
    cout << "the total amount is" << endl
         << principle1 * rate2 * years3/ 100 + principle1 << endl;
};




int main()

{

    int choice;

    cout << "=====================================================================" << endl;
    cout << "========================CHOSE THE OPTION============================" << endl;
    cout << endl;
    cout << "1.Simple Intrest : " << endl;
    cout << "2.Compund Intrest : " << endl;
    cout << "3.New Customer : " << endl;
    cout << "=====================================================================" << endl;
    cin >> choice;

    if (choice == 1)
    {
        SimpleIntrest bank;
        bank.setdata();
        bank.desplaydata2();
    }

    else if (choice == 2)
    {
        compoundintrest bank2;
        bank2.setdata();
        bank2.desplaydata();
    }
    else  
    {
        newcoustomer bank3;
        bank3.setnew1();
        bank3.desplaynew();
    }

    return 0;
}