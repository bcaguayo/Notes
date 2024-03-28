
template <typename T1, typename T2>
void bar(T1 &&a, T2 &&b) {
    foo(std::forward<T1>(a), std::forward<T2>(b));
}

// make unique requires perfect fowarding
// read this: https://stackoverflow.com/questions/3582001/what-are-the-main-purposes-of-stdforward-and-which-problems-does-it-solve
// and this: https://en.cppreference.com/w/cpp/utility/forward