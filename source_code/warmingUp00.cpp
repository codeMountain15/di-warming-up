// warmingUp00.cpp
//

#include <iostream>
#include <vector>

using namespace std;


int main() {

    vector<string> team;
  
    team.push_back("Takis");
    team.push_back("Vivi");

    // +1 push to vector
    
    // +1 push to vector
  
    team.push_back("Iordanis");
    
    team.push_back("Maria")
  
    // +1 push to vector
    
    team.push_back("gpnb");
  
    team.push_back("Efthymis");
    
    team.push_back("oxiKafritsas");
  
    
    
    team.push_back("Vaghelis");  
    
    // +1 push to vector
    
    team.push_back("Harrys");
  
    team.push_back("Alex");
    
    team.push_back("Themos");
    
    
    team.push_back("Iosif");
    
    team.push_back("Iason"); 
    // show on the screen
    for (auto i = team.rbegin(); i != team.rend(); i++)
        cout << *i << endl;

    return 0;
}
