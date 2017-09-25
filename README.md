## Homework I
Данная домашняя работа посвящена изучению шаблонов и работой с классами.

## Tasks
- [x] 1.Реализовать шаблонный класс `stack`, со следующим интерфейсом:

## Tutorial

```ShellSession
template <typename T>
class stack
{
public:
    stack();
    size_t count() const;
    void push(T const &);
    T pop();
private:
    T * array_;
    size_t array_size_;
    size_t count_;
};
```
## Result
```ShellSession
---Stack of Int elements---
7
6
5
4
3
2
1


---Stack of Char elements---
World

---Stack of Char elements with adding new memory---
More_memory

```
