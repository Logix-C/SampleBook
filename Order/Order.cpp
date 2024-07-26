#include <iostream>
#include <chrono>

enum buyOrSellEnum {
    Buy,
    Sell
};

class Order {
    Order() = default;

private:
    static int orderId;
    auto timeStamp;
    buyOrSellEnum side;
    double price;
    int volume;

public:
    int getPrice();
    int setPrice();
};