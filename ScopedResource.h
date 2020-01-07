template <typename RESTYPE>
class ScopedResource final {
public:
	ScopedResource() { managedResource = new RESTYPE(); }
	~ScopedResource() { delete managedResource; }

	RESTYPE* operator->() const { return managedResource; }
private:
	RESTYPE* managedResource;
};