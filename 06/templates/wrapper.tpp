// main.cpp doesn't use the .tpp file directly, but it is included in wrapper.h
// but main.cpp needs to instantiate, so it needs know interface and details
// include full details from including header

// withour int, will not find how to make a wrapper<int>

// Wrappers are libraries that use other files
template <typename T>
wrapper<T>::wrapper(T t) : t {t}
{}

template <typename T>
T wrapper<T>::get() const
{
    return t;
}

template <typename T>
void wrapper<T>::set(T t)
{
    this->t = t;
}

// Now main.cpp can use this, since wrapper makes code
wrapper<int>;
wrapper<std::string>;