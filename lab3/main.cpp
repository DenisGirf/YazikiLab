#include <iostream>
#include <fstream>
#include <string>
#include <dirent.h>
#include <sstream>


void ogogo(const std::string&filename, std::string path)
{
    std:: ifstream inputFile(filename);
    if (inputFile.is_open()){
        std::string line;
        std::ofstream fileOut(path + "newfile.txt");
        fileOut << "���������� ����� " << filename  << ", ���������� �� 2" << "\n---------------" << std::endl ;
        while (std::getline(inputFile, line))
        {
            std::istringstream iss(line);
            std::string element;
            while (iss >> element)
            {
               fileOut << stoi(element) * 2 << " ";
            }


        }
        std::cout << "���� ��������" << std::endl ;
        inputFile.close();
        fileOut.close();

    }

    else {
        std::cout << "���� �� ������" << std::endl;
    }
}

int main() {
    setlocale(LC_ALL, "");
    std::string path = "C:\\Users\\artem\\Desktop\\myworks\\Lab3\\";
    DIR* dir;
    struct dirent *ent;
    if ((dir = opendir(path.c_str())) != NULL) {
        while ((ent = readdir(dir)) != NULL) {
            std::string filename = ent->d_name;
            if (filename.length() > 4 && filename.substr(filename.length()-4) == ".txt") {
                std::cout << "���������� �����: " << filename << ": " << std::endl;
                std::ifstream file(path + "/" + filename);
                std::string line;
                while (std::getline(file, line)) {
                    std::cout << line << std::endl;
                }
                file.close();

                std::cout << "------------------------" << std::endl;
            }
        }
        closedir(dir);
    } else {
        std::cerr << "������ ��� �������� �������� - ��������, ����������� ������ ����" << std::endl;
        return EXIT_FAILURE;
    }
    ogogo(path + "123.txt", path);
    return 0;
}
