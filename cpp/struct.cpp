#include <iostream>

// 구조체 정의
struct Person
{
    std::string name;
    int age;
    double height;
};

int main()
{
    // 구조체 변수 생성
    Person person1;
    person1.name = "Alice";
    person1.age = 30;
    person1.height = 165.5;

    // 구조체 변수 출력
    std::cout << "Name: " << person1.name << std::endl;
    std::cout << "Age: " << person1.age << std::endl;
    std::cout << "Height: " << person1.height << " cm" << std::endl;

    return 0;
}
