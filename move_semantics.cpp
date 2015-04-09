#include <stdio.h>
#include <string.h>
#include <iostream>
#include <sys/time.h>
const int DATA_LEN = 1024 * 1024;

class A
{
public:
    A()
    {
        d = new char[DATA_LEN];
        printf("Constructor\t%p\n", this);
    }
    ~A()
    {
        if(d) {
            delete[] d;
            d = NULL;
        }
        printf("Destructor\t%p\n", this);
    }
    A(const A &source)
    {
        d = new char[DATA_LEN];
        memcpy(d, source.d, sizeof(char) * DATA_LEN);
        printf("Copy Constructor%p\n", this);
    }
    A &operator=(const A &source)
    {
        if(this != &source) {
            memcpy(d, source.d, sizeof(char) * DATA_LEN);
        }
        printf("Assignment\t%p\n", this);
        return *this;
    }
    A(A &&source)
    {
        d = source.d;
        source.d = NULL;
        printf("Move Copy\t%p\n", this);
    }
    A &operator=(A &&source)
    {
        if(this != &source) {
            if(d) {
                delete[] d;
            }
            d = source.d;
            source.d = NULL;
        }
        printf("Move Assignment\t%p\n", this);
        return *this;
    }
private:
    char *d;
};

void Show(const A &a)
{
    A b = a;
    puts("LValue");
}

void Show(A &&a)
{
    A b = std::move(a);
    puts("RValue");
}

int main()
{
    struct timeval startexe, endexe;
    A a, b;
    puts("======");
    gettimeofday(&startexe, NULL);
    a = A();
    Show(A());
    gettimeofday(&endexe, NULL);
    printf("%ld\n", 1000000 * (endexe.tv_sec - startexe.tv_sec) + endexe.tv_usec - startexe.tv_usec);
    puts("======");
    gettimeofday(&startexe, NULL);
    a = b;
    Show(a);
    gettimeofday(&endexe, NULL);
    printf("%ld\n", 1000000 * (endexe.tv_sec - startexe.tv_sec) + endexe.tv_usec - startexe.tv_usec);
    puts("\nSystem:");
    return 0;
}
