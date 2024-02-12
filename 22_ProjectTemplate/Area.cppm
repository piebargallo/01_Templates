module;

export module Area;

export template <typename T>
class Area
{
public:
	explicit Area(size_t width = DefaultWidth,
		size_t heigth = DefaultHeigth);
	virtual ~Area() = default;

	size_t getWidth() const { return m_width; }
	size_t getHeigth() const { return m_heigth; }

	static const size_t DefaultWidth { 10 };
	static const size_t DefaultHeigth { 10 };
private:
	size_t m_width{ 0 }, m_heigth{ 0 };
};

template <typename T>
Area<T>::Area(size_t width, size_t heigth) :
	m_width{ width }, m_heigth{ heigth } {}








