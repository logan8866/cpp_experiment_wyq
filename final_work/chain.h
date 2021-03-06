template <class T>
class ChainNode{
	public:
		T element;
		ChainNode<T>* next;
		~ChainNode();
		ChainNode(const T &element);
		ChainNode(const T &element, ChainNode<T>* next);
		ChainNode(ChainNode<T> &chainnode);
		ChainNode();
};
template <class T>
class Chain{
	public:
		ChainNode<T>* head;
		ChainNode<T>* end;
		int length;
		Chain();
		Chain(int i);
		Chain(Chain<T>& chain);
		~Chain();
		int insert(int index,ChainNode<T>* chainnode);
		int end_insert(ChainNode<T>* chainnode);
		int delete_any(int index);
		int update_any(int index,const T &element);
		int show_any(int index);
		int show_all();
};
