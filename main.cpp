#include <iostream>
#include <stdio.h>

using namespace std;

int num_trucks=0, num_cars=0, num_bikes=0, charges=0, total=0; 
// 15, 10, 7
void truck(){
    num_trucks++;
    charges = charges + 15;
    total++;
}

void car(){
    num_cars++;
    charges = charges + 10;
    total++;
}

void bike(){
    num_bikes++;
    charges = charges + 7;
    total++;
}

void show_data(){
    cout << "Total Trucks: " << num_trucks << endl;
    cout << "Total Cars: " << num_cars << endl;
    cout << "Total Bikes: " << num_bikes << endl;
    cout << "Number of Vehicles in Parking: " << total << endl;
    cout << "Total Parking Fees: " << charges << endl;
}

void delete_data(){
    num_trucks = 0;
    num_cars = 0;
    num_bikes = 0;
    charges = 0;
    total = 0;
    
    system("clear");
    
    cout << "Records Deleted" << endl;
    cout << "\n";
}


int menu(){
    int value;
    
    cout << "Enter Value: " << endl;
    cin >> value;
    
    return value;
}

int main(){
    system("clear"); 
    
    cout << "Parking Garage System v1.0" << endl;
    cout << "\n";
    
    cout << "**********************" << endl;
    cout << "Press 1 for Truck" << endl;
    cout << "Press 2 for Car" << endl;
    cout << "Press 3 for Bike" << endl;
    cout << "Press 4 for Garage Records" << endl;
    cout << "Press 5 to Delete the Records" << endl;
    cout << "Press 6 to Exit" << endl;
    cout << "**********************" << endl;
    
    int value = menu();
    
    while (value != 6){
        if (value == 1){
            truck();
        }
        else if (value == 2){
            car();
        }
        else if (value == 3){
            bike();
        }
        else if (value == 4){
            show_data();
        }
        else if (value == 5){
            delete_data();
        }
        else{
           cout << "Invalid command, try again" << endl; 
        }
        
        value = menu();
    }
    cout << "** Done **\n";
    
    return 0;
}