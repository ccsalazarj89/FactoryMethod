#include "HumanCharacterFactory.cpp"

int main(){

    //Client who depending of family values create the object in execution time.

    HumanCharacterFactory *cf;  
    cf->getname(1);
    cf->getname(2);
    return 0;
}