#include <iostream>

class Singleton
{
public:
    static Singleton& instance()
    {
        static Singleton* instance = nullptr;
        if (instance == nullptr)
        {
            instance = new Singleton;
        }
        return *instance;
    }
};

int main(void)
{
    Singleton::instance();
    return 0;
}