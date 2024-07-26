#define ORDER 20

template <typename T>
class BTreeNode {
public:
    T keys[ORDER];
    int t;
    BTreeNode<T>* Children[ORDER];
    int n;
    bool leaf;
};