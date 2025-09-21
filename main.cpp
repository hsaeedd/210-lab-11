//Hannah Saeed
//IDE: VS Code

#include <iostream>
using namespace std;

struct Pet {
    string name;
    int age;
    string type;
    int * legcount;

    ~Pet() { 
        if (legcount)
            delete [] legcount;
        legcount = nullptr;
    }

};

void inputPet(Pet *);
void displayPet(Pet *);

int main(){
    Pet *intakeofall = new Pet[NR_PETS];

    for (int i = 0; i < NR_PETS; i++)
    {
        inputPet(&intakeofall[i]);
    }

    for (int i = 0; i < NR_PETS; i++)
    {
        displayPet(&intakeofall[i]);
    }

    return 0;
}