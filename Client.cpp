#include "HumanCharacterFactory.h"


void GetInfoCharacter(HumanCharacterFactory::CharacterType charactertype){

     unique_ptr<Character> character = HumanCharacterFactory::createCharacter(charactertype);
     cout<<charactertype<<endl;
     character->CheckStats();
}


int main(){

    //Client who depending of type values create the object in execution time.

    GetInfoCharacter(HumanCharacterFactory::hunter);
    GetInfoCharacter(HumanCharacterFactory::warlock);
    return 0;
}