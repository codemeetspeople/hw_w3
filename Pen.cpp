// Класс Ручка
// Ручка пише, доки є чорнила
// Якщо чорнил недостатньо , щоб написати повідомлення (message) повністю, треба писати доки чорнила є. Розхід чорнил - 1 одиниця на 1 символ
// метод write повертає кількість символів, які були написані
// текст, який пише ручка нікуди зберігати не треба

#include <iostream>

class OutOfInk {};

class Pen {
    private:
        int inkAmount;
        int inkCapacity;
    public:
        Pen(int inkCapacity=4096) {
            // your code here
        }

        int getInkAmount() const { return this->inkAmount; }
        int getInkCapacity() const { return this->inkCapacity; }

        int write(const std::string& message) {
            // your code here
        }
        void refill() {
            // your code here
        }
};

// Перегрузити оператор << для ручки

int main {
    Pen pen;
    int symbols = pen.write("Hello, Santa!");

    std::cout << symbols << std::endl; // 13
    std::cout << paper << std::endl;

    return 0;
}