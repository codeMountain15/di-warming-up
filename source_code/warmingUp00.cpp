// warmingUp00.cpp
//

#include <iostream>
#include <vector>

using namespace std;


int main() {

    vector<string> team;
  
    team.push_back("Takis");
    team.push_back("Vivi");

    team.push_back("Spiros");
    
    // +1 push to vector
  
    team.push_back("Iordanis");
    
    team.push_back("Maria")
  
    // +1 push to vector
    
    team.push_back("gpnb");
  
    team.push_back("Efthymis");
    
    team.push_back("oxiKafritsas");
    team.push_back("sokratis");
    // +1 push to vector
    
    team.push_back("Vaghelis");  
    
    // +1 push to vector
    
    // +1 push to vector
    team.push_back("Vivi");
  
    team.push_back("Alex");
    team.push_back("Petros");
    // +1 push to vector


=======
    team.push_back("Themos")
    
    
    
    
    team.push_back("Iason");     
    team.push_back("Kostas");       
    // show on the screen
    for (auto i = team.rbegin(); i != team.rend(); i++)
        cout << *i << endl;

    return 0;
}
