#include <iostream>

class Singleton
{
public:
    static Singleton& instance()
    {
        if (m_instance == nullptr)
        {
            m_instance = new Singleton();
            atexit(free);
        }
        return *m_instance;
    }

    ~Singleton()
    {

    }

    static void free()
    {
        if (m_instance != nullptr)
            delete m_instance;
    }

private:
    Singleton()
    {

    }

    static Singleton* m_instance;
};

int main(void)
{
    Singleton::instance();
    return 0;
}