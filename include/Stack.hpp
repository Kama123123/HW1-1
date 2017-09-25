#include <iostream>
using namespace std;
template <typename T>
class Stack
{
    T * array_; //Указатель на массив
    size_t array_size_; //Размер массива
    size_t count_ = 0; //Значение счетчика по умолчанию
public:
    //Конструктор класса без параметров
    Stack(){
      array_size_ = 10; //По умолчанию размер стека задается равным 10
      array_ = new T[array_size_]; //Определение указателя выделенной для массива памятью
    };
    //Конструктор класса с параметром
    Stack(size_t st) : array_size_(st){
      array_ = new T[st]; //Определение указателя выделенной для массива памятью
    };
    //Метод count
    size_t count() const{
      return count_;
    };
    //Метод для увеличения размеров стека
    void More_StackSize(){
      if (count_ == array_size_){
            T* new_array_ = new T[2*array_size_]; //Выделение новой памяти под стек
            for (int i = 0; i != array_size_; ++i){
                new_array_[i] = array_[i]; //Перезапись элементов из старого массива в новый при помощи цикла
            }
            delete []array_; // Освобождаем выделенную память
            array_ = new_array_; // Переопределение указателя на массив
          }
        };
    void push(T const &value){
      More_StackSize(); //Метод для увеличения размеров стека
      array_[count_] = value; //Добавляем значение в стек по ссылке
      ++count_; //Увеличиваем счетчик на единицу
    }
    //Метод для контроля выхода счетчика за границы массива
    void Null_Stack(){
      if (count_ == 0){
           throw runtime_error("---Stack is empty---"); //Пуск исключения
       }
    }
    T pop(){
      Null_Stack(); //Метод для контроля выхода счетчика за границы массива
      --count_; //Снижение счетчика на единицу
      return array_[count_];
    }
    //Деструктор класса Stack
    ~Stack<T>(){
      delete []array_; //Освобождаем выделенную под него память
    }
};
