#include <iostream>
using namespace std;

// ============================
// Q1: Hello World & Control Characters
// ============================
void question1() {
    cout << "\n--- Q1: Hello World & Control Characters ---\n";
    cout << "Hello World\n";          // New line
    cout << "Hello\tWorld\n";         // Tab space
    cout << "Hello\aWorld\n";         // Alert sound (beep)
    cout << "Hello World\rBye\n";     // Carriage return overwrites "Hello" with "Bye"
}

// ============================
// Q2: Celsius to Fahrenheit
// ============================
void question2() {
    cout << "\n--- Q2: Celsius to Fahrenheit ---\n";
    float celsius, fahrenheit;
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;
    fahrenheit = (9 * celsius) / 5 + 32;
    cout << "Temperature in Fahrenheit: " << fahrenheit << endl;
}

// ============================
// Q3: Demonstrate Loops
// ============================
void question3() {
    cout << "\n--- Q3: Loop Demonstrations ---\n";
    
    // Normal for loop
    cout << "For loop: ";
    for (int i = 0; i < 5; i++)
        cout << i << " ";
    cout << endl;

    // For loop without initialization
    int j = 0;
    cout << "For without init: ";
    for (; j < 5; j++)
        cout << j << " ";
    cout << endl;

    // For loop without increment
    int k = 0;
    cout << "For without increment: ";
    for (; k < 5;)
        cout << k++ << " ";
    cout << endl;

    // While loop
    int x = 0;
    cout << "While loop: ";
    while (x < 5)
        cout << x++ << " ";
    cout << endl;

    // Do-while loop
    int y = 0;
    cout << "Do-while loop: ";
    do {
        cout << y++ << " ";
    } while (y < 5);
    cout << endl;
}

// ============================
// Q4: Structure for Student Details
// ============================
struct StudentStruct {
    string name;
    int rollNo;
    string degree;
    string hostel;
    float currentCGPA;

    void addDetails() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cout << "Enter Degree: ";
        cin >> degree;
        cout << "Enter Hostel: ";
        cin >> hostel;
        cout << "Enter Current CGPA: ";
        cin >> currentCGPA;
    }

    void updateCGPA() {
        cout << "Enter new CGPA: ";
        cin >> currentCGPA;
    }

    void updateHostel() {
        cout << "Enter new Hostel: ";
        cin >> hostel;
    }

    void displayDetails() {
        cout << "\nName: " << name << "\nRoll No: " << rollNo
             << "\nDegree: " << degree << "\nHostel: " << hostel
             << "\nCGPA: " << currentCGPA << endl;
    }
};

void question4() {
    cout << "\n--- Q4: Structure for Student Details ---\n";
    StudentStruct s;
    s.addDetails();
    s.displayDetails();
    s.updateCGPA();
    s.updateHostel();
    s.displayDetails();
}

// ============================
// Q5 & Q6: Class with Private/Public Access & Private Function Call
// ============================
class StudentClass {
private:
    string name;
    int rollNo;
    float currentCGPA;

    void secretFunction() {
        cout << "(Private function accessed)\n";
    }

public:
    string degree;
    string hostel;

    void addDetails() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cout << "Enter Degree: ";
        cin >> degree;
        cout << "Enter Hostel: ";
        cin >> hostel;
        cout << "Enter Current CGPA: ";
        cin >> currentCGPA;
    }

    void displayDetails() {
        secretFunction();  // Private function called inside public function
        cout << "\nName: " << name << "\nRoll No: " << rollNo
             << "\nDegree: " << degree << "\nHostel: " << hostel
             << "\nCGPA: " << currentCGPA << endl;
    }
};

void question5and6() {
    cout << "\n--- Q5 & Q6: Class with Private/Public Access ---\n";
    StudentClass s;
    s.addDetails();
    s.displayDetails();
}

// ============================
// Q7: Complex Number Class
// ============================
class Complex {
private:
    float real, imag;

public:
    void set(float r, float i) {
        real = r;
        imag = i;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }

    Complex sum(Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
};

void question7() {
    cout << "\n--- Q7: Complex Number Sum ---\n";
    Complex c1, c2, c3;
    c1.set(3.4, 5.6);
    c2.set(1.2, 3.4);
    c3 = c1.sum(c2);
    cout << "Sum: ";
    c3.display();
}

// ============================
// Q8: Namespace Example
// ============================
namespace First {
    int value = 100;
    void show() {
        cout << "First Namespace Value: " << value << endl;
    }
}

namespace Second {
    int value = 200;
    void show() {
        cout << "Second Namespace Value: " << value << endl;
    }
}

void question8() {
    cout << "\n--- Q8: Namespace Example ---\n";
    First::show();
    Second::show();
}

// ============================
// MAIN PROGRAM
// ============================
int main() {
    int choice;
    do {
        cout << "\n\n===== OBJECT ORIENTED PROGRAMMING LAB ASSIGNMENT =====\n";
        cout << "1. Hello World & Control Characters\n";
        cout << "2. Celsius to Fahrenheit\n";
        cout << "3. Loop Demonstrations\n";
        cout << "4. Structure for Student Details\n";
        cout << "5 & 6. Class with Private/Public Access\n";
        cout << "7. Complex Number Sum\n";
        cout << "8. Namespace Example\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: question1(); break;
            case 2: question2(); break;
            case 3: question3(); break;
            case 4: question4(); break;
            case 5: question5and6(); break;
            case 7: question7(); break;
            case 8: question8(); break;
            case 0: cout << "Exiting..."; break;
            default: cout << "Invalid choice!";
        }
    } while (choice != 0);

    return 0;
}
