#include<iostream>
template<class T>
class SmartPointer{
private:
    T *ptr;
public:
    explicit SmartPointer(T *p=NULL){
        ptr=p;
    }

    ~SmartPointer(){
        delete(ptr);
    }

    T* &operator ->(){
        return ptr;
    }

    T &operator *(){
        return *ptr;
    }
};

int main(){

    SmartPointer<int> pInt(new int());
    *pInt=7;
    std::cout<<"Pointer to int:"<<*pInt<<std::endl;

    SmartPointer<char> pChar(new char());
    *pChar='A';
    std::cout<<"Pointer to Char:"<<*pChar<<std::endl;

    SmartPointer<std::string> pStr(new std::string());
    *pStr="Aishani";
    std::cout<<"Pointer to String:"<<*pStr<<std::endl;

    return 0;
}
