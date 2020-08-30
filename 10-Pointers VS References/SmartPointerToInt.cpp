#include<iostream>

class SmartPointer{
private:
    int *ptr;
public:
    explicit SmartPointer(int *p=NULL){
        ptr=p;
    }

    ~SmartPointer(){
        delete(ptr);
    }

    int &operator *(){
        return *ptr;
    }
};

int main()
{
    SmartPointer ptr(new int());
    *ptr=20;
    std::cout<<*ptr;
    return 0;
}
