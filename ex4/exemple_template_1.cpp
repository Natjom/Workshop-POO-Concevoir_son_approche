#include <iostream>
#include <string>

template <typename T>
class DynamicArray
{
private:
    T *data;
    size_t size;
    size_t capacity;

    void resize(size_t newCapacity)
    {
        T *temp = new T[newCapacity];
        for (size_t i = 0; i < size; i++)
        {
            temp[i] = data[i];
        }
        delete[] data;
        data = temp;
        capacity = newCapacity;
    }

public:
    DynamicArray() : size(0), capacity(1)
    {
        data = new T[capacity];
    }

    ~DynamicArray()
    {
        delete[] data;
    }

    void add(const T &element)
    {
        if (size >= capacity)
        {
            resize(capacity * 2);
        }
        data[size++] = element;
    }

    T get(size_t index) const
    {
        if (index < size)
        {
            return data[index];
        }
        throw std::out_of_range("Index out of bounds");
    }

    size_t getSize() const
    {
        return size;
    }
};

int main()
{
    DynamicArray<std::string> stringArray;
    stringArray.add("Hello");
    stringArray.add("World");
    std::cout << stringArray.get(0) << " " << stringArray.get(1) << std::endl;
    return 1;
}