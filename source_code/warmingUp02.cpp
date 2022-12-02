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
 *****************************/
 
 class StudentBurnOut : public Human {
 public:
     StudentBurnOut(string a = "", string b = "", string c = "") : Human(a, b, c) {};
     void show() { cout << name << " is burned out.\n" << endl; }
 };
 


int main() {

    vector<Human*> team;

    // area for object construnction
    // objects join the team

    StudentYolo Takis34("Takis", "1115202100XXX", "Greek Mouzaka forever!");
    team.push_back(&Takis34);

    StudentSuper Vivi22("Vivi", "1115202100XXX", "W_vs_W");
    team.push_back(&Vivi22);

    StudentBurnOut Vaghelis("Vaghelis", "1115202000084", "geia sas");
    team.push_back(&Vaghelis);

    // area for object show up
    // objects on the screen
    for (auto i = team.rbegin(); i != team.rend(); i++)
        (*i)->show();

    return 0;
}
