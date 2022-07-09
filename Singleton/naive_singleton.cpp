#include <iostream>
using namespace std;

class Singleton{
private:
    static Singleton *instance;
    string name;
    int age;

    Singleton(string name, int age)
    {
        this->name = name;
        this->age = age;
    };

public:
    static Singleton *getInstance(){
        if(instance == nullptr){
            instance = new Singleton("Rahul", 21);
        }
        return instance;
    }

    string getName(){
        return this->name;
    }

    int getAge(){
        return this->age;
    }

    void setName(string name){
        this->name = name;
    }

    void setAge(int age){
        this->age = age;
    }
};

Singleton* Singleton::instance = nullptr;

int main()
{
    Singleton *s1 = Singleton::getInstance();
    Singleton *s2 = Singleton::getInstance();

    cout << s1->getName() << " " << s1->getAge() << endl;

    s2->setName("Ajay");
    s2->setAge(22);

    cout << s1->getName() << " " << s1->getAge() << endl;

    return 0;
}
