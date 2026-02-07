#ifndef WORKER_H
#define WORKER_H

#include <string>

class WORKER {
private:
    std::string fio;           // фамилия и инициалы
    std::string position;        // должность
    double salary;               // зарплата
    int year_joined;             // год поступления на работу

public:
    // Конструкторы
    WORKER();  // по умолчанию
    WORKER(const std::string& f, const std::string& p, double s, int y);
    WORKER(const WORKER& other);  // копирующий

    // Деструктор
    ~WORKER();

    // Методы доступа (геттеры и сеттеры)
    std::string getFio() const;
    void setFio(const std::string& f);

    std::string getPosition() const;
    void setPosition(const std::string& p);

    double getSalary() const;
    void setSalary(double s);

    int getYearJoined() const;
    void setYearJoined(int y);

    // Метод отображения данных работника
    void display() const;

    // Метод расчёта стажа (на текущий год)
    int getExperience(int current_year) const;
};

#endif // WORKER_H
