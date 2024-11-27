#include "DynamicArray.hpp"

string array_element_to_string(ArrayElement *el);

// CONSTR

DynamicArray::DynamicArray()
{
    count = 0;
    els = new ArrayElement *[1];
};

DynamicArray::DynamicArray(int size = 1)
{
    count = 0;
    els = new ArrayElement *[size];
};

// PUBLIC

int DynamicArray::add(ArrayElement *el)
{
    if (count >= RESIZE_THRESHOLD * size)
    {
        resize(size * 2);
    };
    els[count] = el;

    return count++;
}

ArrayElement *DynamicArray::remove(int i)
{
    ArrayElement *ptr = nullptr;

    if (0 <= i < count)
    {
        ptr = els[i];
        els[i] = els[--count];

        if (count < REFIT_THRESHOLD * size)
        {
            fit();
        }
    }

    return ptr;
}

ArrayElement *DynamicArray::get(int i)
{
    return els[i];
}

void DynamicArray::print()
{
    cout << "[";
    if (count > 0)
    {
        for (int i = 0; i < count - 1; i++)
        {
            cout << array_element_to_string(els[i]) << ", ";
        }
        cout << array_element_to_string(els[count - 1]);
    }
    cout << "]";
}

// PRIVATE

void DynamicArray::resize(int size)
{
    try
    {
        ArrayElement **temp;

        this->size = size;
        temp = new ArrayElement *[size];
        for (int i = 0; i < count; i++)
        {
            temp[i] = els[i];
        }

        delete[] els;
        els = temp;
    }
    catch (std::bad_alloc e)
    {
        size = size / 2;
    }
};

void DynamicArray::fit()
{
    resize(count);
};