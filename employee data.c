#include <iostream>
using namespace std;
struct employee {
   string name;
   int age;
   string phone_number;
   int salary;
};
void displayDeitals(struct employee emp[], int n) {
   cout<<"\n\n --- Employee "<<n+1<<" ---- \n";
   cout<<"Employee name: "<<emp[n].name<<endl;
   cout<<"Employee age:"<<emp[n].age<<endl;
   cout<<"Employee phone number: "<<emp[n].phone_number<<endl;
   cout<<"Employee salary : "<<emp[n].salary<<endl;
}
int main() {
   int n = 2;
   struct employee emp[4];
   emp[0].name = " Chirag";
   emp[0].age = 24;
   emp[0].phone_number = "1234567788";
   emp[0].salary = 20000;
   emp[1].name = "Arnav";
   emp[1].age = 31;
   emp[1].phone_number = "1234567891";
   emp[1].salary = 56000;
   emp[2].name = "Shivam";
   emp[2].age = 45;
   emp[2].phone_number = "8881101111";
   emp[2].salary = 30500;
   for(int i= 0; i<=n; i++)
   displayDeitals(emp, i);
   return 0;
}
