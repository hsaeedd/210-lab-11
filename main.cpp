//Hannah Saeed
//IDE: VS Code

#include <iostream>
using namespace std;

const int NR_PETS = 3, NR_APPTS = 4;
struct Pet {
    string name;
    int age;
    string type;
    int * appointmentsyears;

    ~Pet() { 
        if (appointmentsyears)
            delete [] appointmentsyears;
        appointmentsyears = nullptr;
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
    sptr -> appointmentsyears = new int[NR_APPTS];
    for (int i = 0; i < NR_APPTS; i++){
        cout << "Appointment #" << i + 1 << " Year: ";
        cin >> sptr->appointmentsyears[i];
    }
    cin.ignore();
    cout << endl<< endl;
    nrPet++;
} 

void displayPet(Pet * sptr){
    cout << "Pet summary" << endl;
    cout << "Name: " << sptr->name << endl;
    cout << "Age: " << sptr->age << endl;
    cout << "Type: " << sptr->type << endl;
    for(int i = 0; i < NR_APPTS; i++){
        cout << "Appointment #" << i+1 << " Year: " << sptr->appointmentsyears[i] << endl;


    }
}
