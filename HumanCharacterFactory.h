#include <iostream>
#include <stdlib.h>
#include <memory>
#include "CharacterFactory.h"

using namespace std;
//using namespace std;



// Subclasses according to a specific Character family 

class HumanWarlock:public Character{

    public:

    int magicindex;


    HumanWarlock(int  _magicindex){
        this->magicindex = _magicindex;
    };

    void CheckStats();

    virtual ~HumanWarlock() {};

};

void HumanWarlock::CheckStats(){
    Character::CheckStats();
    cout<<"Magic points:"<<magicindex<<endl;
}


class HumanHunter:public Character{

     
    public:
    int accuracy;


    HumanHunter(int  _accuracy){
        this->accuracy= _accuracy;
    };

    void CheckStats();

    virtual ~HumanHunter() {};

};

void HumanHunter::CheckStats(){
    Character::CheckStats();
    cout<<"AccuracyPoints:"<<accuracy<<endl;
}


class HumanCharacterFactory{

public:
enum CharacterType{
    warlock,
    hunter,
};
//Implementation of method which creates the objects.

    static unique_ptr<Character> createCharacter(CharacterType characterType)
    {

        switch (characterType)
        {
            case warlock: return make_unique<HumanWarlock>(70);
            case hunter:  return make_unique<HumanHunter>(50);
        }
        throw  "Invalid character type";

    }

};








