// Класс "Аркуш Паперу"
// На аркущі можно надрукувати тільки певну кількість символів
// Якщо на аркущі недостатньо місця, щоб надрукувати повідомлення (message) повністю, треба надрукувати стільки, скільки може помістити аркуш
// метод addContent повертає кількість символів, які були надруковані на аркущі

#include <iostream>

class OutOfSpace {};

class Paper {
    private:
        int maxSymbols;
        int symbols;
        std::string content;
    public:
        Paper(int maxSymbols=4096) {
            // your code here
        }

        int getMaxSymbols() const { return this->maxSymbols; }
        int getSymbols() const { return this->symbols; }

        int addContent(const std::string& message) {
            // your code here
        }
        void show() const {
            // your code here
        }
};

// Перегрузити оператор << для паперу

int main {
    Paper paper;
    int symbols = paper.addContent("Hello, Santa!");

    std::cout << symbols << std::endl; // 13
    paper.show() // Hello, Santa!

    std::cout << paper << std::endl;

    return 0;
}
