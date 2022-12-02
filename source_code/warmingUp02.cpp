// warmingUp02.cpp
//

#include <iostream>
#include <vector>

using namespace std;

class Human {
protected:
    string name;
    string id;
    string slogan;

public:
    Human(string in1 = "", string in2 = "", string in3 = "") : name(in1), id(in2), slogan(in3) {};
    virtual void show() {} //pure virtual
};
class squid;
 
class StudentYolo : public Human {
public:
    StudentYolo(string in1 = "", string in2 = "", string in3 = "") : Human(in1, in2, in3) {};
    void show() { cout << "My name is " << name << endl; }
};

 class StudentSuper : public Human {
 public:
     StudentSuper(string a = "", string b = "", string c = "") : Human(a, b, c) {};
     void show() { cout << name << " is the best" << endl; }
 };



 /*
 *****************************
 
 // put here your subclass //
 
 *****************************
 */


int main() {

    vector<Human*> team;

    // area for object construnction
    // objects join the team
    squid kuriaki("kuriaki", "1115202100XXX", " i'm good ");

    StudentYolo Takis34("Takis", "1115202100XXX", "Greek Mouzaka forever!");
    team.push_back(&Takis34);

    StudentSuper Vivi22("Vivi", "1115202100XXX", "W_vs_W");
    team.push_back(&Vivi22);

    /*
     *****************************

     // put here your code //

     *****************************
     */
    
    
    
 squid kuriaki("kuriaki", "1115202100XXX", " i'm good ");
    // area for object show up
    // objects on the screen
    for (auto i = team.rbegin(); i != team.rend(); i++)
        (*i)->show();

    return 0;
}


class Squid : public Human {
public:
      StudentGameMaster(string a = "", string b = "", string c = "") : Human(a, b, c) {};
      void show() { cout << "My name is " << name << " and i understand nothing" << endl; }
};
