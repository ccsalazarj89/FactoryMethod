#include <iostream>
#include <stdlib.h>
#include <string>



using namespace std;

//This is the base class with default Charatacter's values.

class Character{
       
                 int  lifePoints;
                 int  manaPoints;
     
        public: 
        virtual void CheckStats();

        Character(){
                this->lifePoints = 40;
                this->manaPoints = 20;
        };

        virtual ~Character() {};

};

void Character::CheckStats(){
        cout<<"Lifepoints:"<<lifePoints<<endl;
        cout<<"ManaPoints:"<<manaPoints<<endl;
}





