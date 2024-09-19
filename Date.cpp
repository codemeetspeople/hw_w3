// Імплементувати класс для обробки дат.
// Приймати 3 параметри: день, місяць та рік.
// Вхідні параметри мають відповідати вимогам григоріанського календаря.
// Підказка:
//    - різні місяці мають різну кількість днів. 31 квітня чи 31 червня не існує ))
//    - роки бувають високосними
//    - 0 року, 0 місяця та 0 дня не буває
// Імплементувати можливість отримати різницю між датами в днях

#include <iostream>

class InvalidDateException {};

class Date {
   private:
       int day;
       int month;
       int year;

       void validate(int day, int month, int year) {
            // your code here
       }
   public:
        Date(int day=1, int month=1, int year=1970) {
            this->validate(day, month, year);

            this->day = day;
            this->month = month;
            this->year = year;
        }

        int getDay() const { return this->day; }
        int getMonth() const { return this->month; }
        int getYear() const { return this->year; }

        int operator-(const Date& other) const {
            // your code here
        }
};

std::ostream& operator<<(std::ostream& out, const Date& date);


int main {
    Date start(24, 2, 2022);
    Date current(19, 9, 2024);
    int days = current - start;


    std::cout << start << std::endl; // 24.02.2024
    std::cout << current << std::endl; // 19.09.2024
    std::cout << days << std::endl; // 939

    return 0;
}
