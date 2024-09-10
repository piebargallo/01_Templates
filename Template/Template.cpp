// I always use 'typename' because it
// indicates (to the reader) that you can use any type
// not just "class types"

template<typename Type1, typename Type2>
void func(Type1, Type2)
{

}

int main()
{
	func(1, 3.2);
}