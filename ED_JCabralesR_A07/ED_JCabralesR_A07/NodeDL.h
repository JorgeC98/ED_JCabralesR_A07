template <typename T> class NodeDL {
public:
	T data;
	NodeDL<T> *prev;
	NodeDL<T> *next;

	NodeDL(T d) {
		data = d;
		prev = nullptr;
		next = nullptr;
	}
};