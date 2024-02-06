auto sumar(auto a, auto b) {
    return a + b;
}

int main()
{
    auto r1 = sumar(7, 3);       // int
    auto r2 = sumar(7, 6.5);     // double
    auto r3 = sumar(4.0f, 7.0f); // float
    return 0;
}