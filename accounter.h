#pragma once
class Counter {
protected:
    int i;
public:
    Counter();
    Counter(int number);
    void plus();
    void minus();
    void look();
};