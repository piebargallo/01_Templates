module;

export module Area;

export template <typename T, size_t WIDTH, size_t HEIGTH>
class Area
{
public:
	Area() = default;
	virtual ~Area() = default;

	size_t getWidth() const { return WIDTH; }
	size_t getHeigth() const { return HEIGTH; }
};







