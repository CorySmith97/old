

typedef struct Ui_Node Ui_Node;
struct Ui_Node {
};

typedef struct Ui_Layout Ui_Layout;
struct Ui_Layout {
    Ui_Node *nodes;
    u64 node_count;
};
