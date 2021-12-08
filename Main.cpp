#include <iostream>
#include <Windows.h>

//1. Student information system (Uses classes mainly)


//function

class grades {
public:
	int Math;
	int History;
	int Science;
	int LA;
};

class schedule {
public:
    std::string Eight;
    std::string Nine;
    std::string Ten;
    std::string Eleven;
};

class info {
public:
    int age;
    int height;
    std::string Ethnic;
    int ID;
};

void check(std::string in) {
    if (in == "1") {

        system("cls");

        std::cout << "..............................................\n";
        std::cout << "Nolan Tran - SBISD Grade Book\n";
        std::cout << "..............................................\n\n\n";

        grades nolan;
        nolan.History = 87;
        nolan.LA = 97;
        nolan.Math = 94;
        nolan.Science = 95;

        std::cout << "History: " << nolan.History << "\nLA: " << nolan.LA << "\n" << "Math: " << nolan.Math << "\n" << "Science: " << nolan.Science << "\n";

        std::cout << "\n\n\n1. Grades\n";
        std::cout << "2. Schedule\n";
        std::cout << "3. Student Info\n";
    
        std::string input;
        std::cin >> input;
        check(input);

    }
    else if (in == "2") {

        
        system("cls");

        std::cout << "..............................................\n";
        std::cout << "Nolan Tran - SBISD Grade Book\n";
        std::cout << "..............................................\n\n\n";

        schedule nolan;
        nolan.Eight = "LA";
        nolan.Nine = "Math";
        nolan.Ten = "History";
        nolan.Eleven = "Science";

        std::cout << "8:00 - " << nolan.Eight << "\n9:00 - " << nolan.Nine << "\n10:00 - " << nolan.Ten << "\n11:00 - " << nolan.Eleven << "\n";

        std::cout << "\n\n\n1. Grades\n";
        std::cout << "2. Schedule\n";
        std::cout << "3. Student Info\n";

        std::string input;
        std::cin >> input;
        check(input);

    }
    else
    {
       
        system("cls");

        std::cout << "..............................................\n";
        std::cout << "Nolan Tran - SBISD Grade Book\n";
        std::cout << "..............................................\n\n\n";

        info nolan;
        nolan.age = 14;
        nolan.Ethnic = "Chinese/Vietmese";
        nolan.height = 67;
        nolan.ID = 465;

        std::cout << "Age: " << nolan.age << "\nEthnic: " << nolan.Ethnic << "\nHeight: " << nolan.height << "\n ID: " << nolan.ID;

        std::cout << "\n\n\n1. Grades\n";
        std::cout << "2. Schedule\n";
        std::cout << "3. Student Info\n";

        std::string input;
        std::cin >> input;
        check(input);

    }
}



    int main() {
        //Decor

        std::cout << "..............................................\n";
        std::cout << "Nolan Tran - SBISD Grade Book\n";
        std::cout << "..............................................\n";
        std::cout << "1. Grades\n";
        std::cout << "2. Schedule\n";
        std::cout << "3. Student Info\n";
        std::string input;
        std::cin >> input;
        check(input);

        return 0;
    }