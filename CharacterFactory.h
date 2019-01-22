
using namespace std;


//This is the base class with default Charatacter's values.

class Character{
       
                 int  lifePoints;
                 int  manaPoints;
     
        public: 


        Character(){
                this->lifePoints = 40;
                this->manaPoints = 20;
        };


};


//This is an abstract class that will create the new objects 

class CharacterFactory:public Character{
        public:
        virtual Character* getname(int fam)  = 0;
};

