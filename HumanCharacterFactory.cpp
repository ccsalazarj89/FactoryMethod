#include "CharacterFactory.h"
using namespace std;
class HumanCharacterFactory:public CharacterFactory{


//Implementation of method which creates the objects.

    public:
    virtual Character* getname(int fam)  
    {

        Character *a;
        switch(fam){

            case 1:
                a = new HumanWarlock(20);
            case 2:
                a = new HumanHunter(10);  

            return a;        

        }
    }

};


// Subclasses according to a specific Character family 


class HumanWarlock:public Character{

    int magicindex;

    public:
    HumanWarlock(){
    };

    HumanWarlock(int magicindex){
        this->magicindex = magicindex;
    };
};


class HumanHunter:public Character{

    int accuracy; 
    public:

    HumanHunter(){
    };

    HumanHunter(int accuracy){
        this->accuracy= accuracy;
    };
};



