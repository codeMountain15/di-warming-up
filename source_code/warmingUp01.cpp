// warmingUp01.cpp
//

#include <iostream>
#include <vector>

using namespace std;

class wiseStudent {
protected:
    string name;
    string id;
    string slogan;

public:
    wiseStudent(string in1 = "", string in2 = "", string in3 = "") : name(in1), id(in2), slogan(in3) {};
    void show() {
        cout << name << ", id = " << id << ", slogan: '" << slogan << "'" << endl;
    }
};


int main() {

    vector<wiseStudent> team;

    // area for object construnction
    // objects join the team
    wiseStudent Takis34("Takis", "1115202100XXX", "Greek Mouzaka forever!");
    team.push_back(Takis34);

    wiseStudent Vivi22("Vivi", "1115202100XXX", "W_vs_W");
    team.push_back(Vivi22);

    wiseStudent NotKaf("OxiKafritsas", "1115202100193", "den eimai o kafritsas"); team.push_back(NotKaf);
    

    wiseStudent Kafritsas("Kafritsas", "1115202100060", "OxiOxiKafritsas");  team.push_back(Kafritsas);


    wiseStudent Maria12("Maria", "1115202100177", "it takes practice being this cringe ♡");
    team.push_back(Maria12);


    wiseStudent gpnb2("gerorge", "sdi", "rand()");  team.push_back(gpnb2);


    wiseStudent thymios03("Efthymis","1115202100102","mpamies");
    team.push_back(thymios03);


    wiseStudent Vaghelis("Vaghelis", "1115202000084", "I've got the blues.");
    team.push_back(Vaghelis);

    wiseStudent Iosif13("Iosif", "1115201800299", "Protathlima tha paroume olous tha tous trelanoume");

    wiseStudent Kostas("Kostas", "1925", "Protathlima kai kypello ksana ston peiraia");     team.push_back(Kostas);


    wiseStudent Takis34("Takis", "1115202100138", "Burgers forever!"); 
    team.push_back(Takis34);


    wiseStudent Takis34("Alex", "1115202000164", "Gyros forever!!");
    team.push_back(Alex);


    wiseStudent Spiros00("Spiros", "1115201900104", "Go-to enjoyer ");
    team.push_back(Spiros00);

    // +1 constructor // +1 push to vector


    // +1 constructor // +1 push to vector
 wiseStudent isi("isi", "2141587645", "mpla");
    team.push_back(isi);

    wiseStudent Kuriaki50("Kuriaki", "1115202000255", "I understand nothing");
    team.push_back(Kuriaki50);

    // +1 constructor // +1 push to vector


    // +1 constructor // +1 push to vector


    // +1 constructor // +1 push to vector


    // +1 constructor // +1 push to vector


    // +1 constructor // +1 push to vector


    // +1 constructor // +1 push to vector


    // +1 constructor // +1 push to vector


    // +1 constructor // +1 push to vector


    // +1 constructor // +1 push to vector


    // +1 constructor // +1 push to vector


    // +1 constructor // +1 push to vector


    // +1 constructor // +1 push to vector


    // +1 constructor // +1 push to vector


    // +1 constructor // +1 push to vector


    // +1 constructor // +1 push to vector


    // +1 constructor // +1 push to vector
    


    wiseStudent Iason22("Iason", "111520210097", "LGBT Rights, I guess?");
    team.push_back(Iason22);


    // area for object show up
    // objects on the screen
    for (auto i = team.rbegin(); i != team.rend(); i++)
        i->show();

    return 0;
}
