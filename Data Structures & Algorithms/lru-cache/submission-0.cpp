class LRUCache {
private:

    struct Node {
        int key;
        int value;
        Node* prev;
        Node* next;

        Node(int k, int v) {
            key = k;
            value = v;
            prev = nullptr;
            next = nullptr;
        }
    };

    int capacity;

    unordered_map<int, Node*> mp;

    Node* head;
    Node* tail;

    void remove(Node* node) {
        node->prev->next = node->next;
        node->next->prev = node->prev;
    }

    void insert(Node* node) {
        node->next = tail;
        node->prev = tail->prev;

        tail->prev->next = node;
        tail->prev = node;
    }

public:

    LRUCache(int capacity) {

        this->capacity = capacity;

        head = new Node(0, 0);
        tail = new Node(0, 0);

        head->next = tail;
        tail->prev = head;
    }

    int get(int key) {

        if (mp.find(key) == mp.end()) {
            return -1;
        }

        Node* node = mp[key];

        // key was just used → make it MRU
        remove(node);
        insert(node);

        return node->value;
    }

    void put(int key, int value) {

        // Key already exists
        if (mp.find(key) != mp.end()) {

            Node* node = mp[key];

            node->value = value;

            // key was just used → make it MRU
            remove(node);
            insert(node);

            return;
        }

        // New key
        Node* node = new Node(key, value);

        mp[key] = node;

        // New node becomes MRU
        insert(node);

        // Cache exceeded capacity
        if (mp.size() > capacity) {

            // First real node = LRU
            Node* lru = head->next;

            remove(lru);

            mp.erase(lru->key);

            delete lru;
        }
    }
};