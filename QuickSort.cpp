//
//  QuickSort_Skeleton.cpp
//
//  Created by Bahamon, Julio on 6/25/19.
//  UNC Charlotte
//  Copyright © 2019 Bahamon, Julio. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

//  Declaring a new struct to store patient data
struct patient {
    int age;
    char name[20];
    float balance;
};

// Display Function
void display(patient p[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "\tAge: " << p[i].age << "\tName: " << p[i].name << "\tBalance: " << p[i].balance << "\n";
    }
}

//  TODO:
//  IMPLEMENT A FUNCTION THAT COMPARES TWO PATIENTS BY AGE
int compAge(const void *a, const void *b) {
    int c = ((struct patient *) a) -> age;
    int d = ((struct patient *) b) -> age;
    
    if (c < d) {
        return -1;
    } else if (c == d) {
        return 0;
    } else {
        return 1;
    }
}



//  TODO:
//  IMPLEMENT A FUNCTION THAT COMPARES TWO PATIENTS BY BALANCE DUE
int compBal(const void *a, const void *b) {
    int c = ((struct patient *) a) -> balance;
    int d = ((struct patient *) b) -> balance;
    
    if (c < d) {
        return -1;
    } else if (c == d) {
        return 0;
    } else {
        return 1;
    }
}

//  TODO:
//  IMPLEMENT A FUNCTION THAT COMPARES TWO PATIENTS BY NAME
int compName(const void *a, const void *b) {
    patient *c = ((struct patient *) a);
    patient *d = ((struct patient *) b);
    
    if (strcmp(c -> name, d -> name) < 0) {
        return -1;
    } else if (strcmp(c -> name, d -> name) == 0) {
        return 0;
    } else {
        return 1;
    }
}




//  The main program
int main()
{
    int total_patients = 5;
    
    //  Storing some test data
    struct patient patient_list[5] = {
        {25, "Juan Valdez   ", 1250},
        {15, "James Morris  ", 2100},
        {32, "Tyra Banks    ", 750},
        {62, "Maria O'Donell", 375},
        {53, "Pablo Picasso ", 615}
    };
    
    // Initail print of patients
    cout << "Patient List: " << endl;
    
    //  TODO:
    //  IMPLEMENT THE CODE TO DISPLAY THE CONTENTS
    //  OF THE ARRAY BEFORE SORTING
    display(patient_list, total_patients);
    
    cout << endl;
    
    // First Sort, by age
    cout << "Sorting..." << endl;
    
    //  TODO:
    //  CALL THE qsort FUNCTION TO SORT THE ARRAY BY PATIENT AGE
    qsort(patient_list, total_patients, sizeof(patient_list[0]), compAge);
    
    cout << "Patient List - Sorted by Age: " << endl;
    
    //  TODO:
    //  DISPLAY THE CONTENTS OF THE ARRAY
    //  AFTER SORTING BY AGE
    display(patient_list, total_patients);
    
    cout << endl;
    
    // Second Sort, by balance
    cout << "Sorting..." << endl;
    
    //  TODO:
    //  CALL THE qsort FUNCTION TO SORT THE ARRAY BY PATIENT BALANCE
    qsort(patient_list, total_patients, sizeof(patient_list[0]), compBal);
    
    cout << "Patient List - Sorted by Balance Due: " << endl;
    
    //  TODO:
    //  DISPLAY THE CONTENTS OF THE ARRAY
    //  AFTER SORTING BY BALANCE
    display(patient_list, total_patients);
    
    cout << endl;
    
    // Third Sort, by name
    cout << "Sorting..." << endl;
    
    //  TODO:
    //  CALL THE qsort FUNCTION TO SORT THE ARRAY BY PATIENT NAME
    qsort(patient_list, total_patients, sizeof(patient_list[0]), compName);
    
    cout << "Patient List - Sorted by Name: " << endl;
    
    //  TODO:
    //  DISPLAY THE CONTENTS OF THE ARRAY
    //  AFTER SORTING BY NAME
    display(patient_list, total_patients);
    
    cout << endl;
    
    return 0;
}
