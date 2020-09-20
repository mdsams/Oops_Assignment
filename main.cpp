#include<iostream>
using namespace std;
class Name
{
    string f_name,m_name,l_name;
public:
    Name(string f_name1,string m_name1,string l_name1):f_name(f_name1),m_name(m_name1),l_name(l_name1)
    {
        cout<<"Constructor for Name class"<<endl;
    }
    void display()
    {
        cout<<"Name is "<<f_name<<" "<<m_name<<" "<<l_name<<endl;
    }
    ~Name()
    {
        cout<<"Destructor for Name class"<<endl;
    }
};
class Address
{
    string st_name;
    int st_address;
public:
    Address(string st_name1,int st_address1):st_name(st_name1),st_address(st_address1)
    {
        cout<<"Constructor of adress class"<<endl;
    }
    void display()
    {
        cout<<"Name and address "<<st_name<<" "<<st_address<<endl;
    }
    ~Address()
    {
        cout<<"destructor of adress class"<<endl;
    }
};
class creditcardholder
{
Name n1;
Address a1;
float m_payment;
public:
    creditcardholder(string s1,string s2,string s3,string s4,int s5,float s6):n1(s1,s2,s3),a1(s4,s5),m_payment(s6)
    {
        cout<<"Constructor of the class"<<endl;
    }
    void display()
    {
        cout<<endl;
        n1.display();
        a1.display();
        cout<<"monthly payment = "<<m_payment<<endl;
    }
    ~creditcardholder()
    {
        cout<<"destructor of credit class"<<endl;
    }
};
int main()
{
    creditcardholder c("Shams","","Tabrez","10/6",700080,301.00);
    c.display();
    return 0;
}