//Hannah Saeed
//IDE: VS Code

#include <iostream>
using namespace std;

const int NR_PETS = 3;
struct Pet {
    string name;
    int age;
    string type;
    int * appointments;

    ~Pet() { 
        if (appointments)
            delete [] appointments;
        appointments = nullptr;
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

void inputPet(Pet * sptr){
    static int nrPet = 1;
    cout << "Input data for Pet #" << nrPet << ":" << endl;
    cout << "Name: ";
    getline(cin, sptr->name);
    cout << "Age: ";
    cin >> sptr->age;
    cout << "Type: ";
    getline(cin, sptr->type);


} 