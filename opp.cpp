#include<iostream>
#include<string>
using namespace std;
class Cricketer{
protected:
string name;
int age ;
public:
     Cricketer(){
      cout<< "Enter name: ";
      cin>> name;
      cout<<"Enter Age: ";
      cin>> age;
     }
 void display(){
 cout<< "Cricketer Name: " <<name <<endl;
 cout<< "Cricketer Age: " << age <<endl;
}
virtual void bat() = 0;
};

class Running{
public:
    virtual void out(){
    cout<< "Bats man out : " <<endl;
    }
};
class Team_Bangladesh: public Cricketer, public virtual Running{
protected:
    string next_batsMan;
    int needRun;
    int currentRun;
public:
    Team_Bangladesh(int r, int c){
      this-> needRun = r;
      this-> currentRun = c;
    }
    void setnext_batsMan(string n){
      next_batsMan = n;
    }
    string getnext_batsMan(){
      return next_batsMan;
    }
    void bat() override {
    cout << name << " is batting." << endl;
  }
  void out() override {
    cout << name << " is out." << endl;
  }
    void display_t(){
         cout<<"next bats Man: "<<next_batsMan << endl;
       cout<<"Need Runs: " <<needRun <<endl;
       cout<< "current run: " <<currentRun <<endl;

      cout<<"============================================" <<endl;
    }

};
int main(){
    Team_Bangladesh t(123, 22);
    t.bat();
    t.out();
    t.setnext_batsMan("Bijoy");
    t.display_t();
}
