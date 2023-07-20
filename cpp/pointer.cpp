#include <iostream>

int main()
{
    int number = 10;
    int *ptr = &number; // 포인터 ptr은 number 변수의 주소

    std::cout << "number: " << number << std::endl;
    std::cout << "ptr: " << ptr << std::endl;   // ptr에 저장된 주소를 출력
    std::cout << "*ptr: " << *ptr << std::endl; // ptr이 가리키는 주소의 값 출력

    *ptr = 20; // ptr을 통해 number의 값을 변경

    std::cout << "After updating *ptr, number: " << number << std::endl;

    return 0;
}
