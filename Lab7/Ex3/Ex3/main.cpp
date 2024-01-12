/*
vector container push-backp[i]


tempate<class T>
class Tablou{
    T * elements;
    unsigned lenght;

    public:
        Tablou();
        Tablou(unsigned);
        Tablou<T>& operator=(const Tablou<T>);
        Tablou(const Tablou<T>)
        ...
};



template <class T>
Tablou<T>&  Tablou <T>::operator=(const Tablou<T> other){
    delete[] this->elements;
    this->lenght = other.lenght;
    this->elements = new T[this->lenght];
    for(int i = 0; i < this->lenght; ++i)
    {
        this->elements[i] = other.elements[i];
    }

    return *this;
}

*/