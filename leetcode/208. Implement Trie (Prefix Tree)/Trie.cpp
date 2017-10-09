class Trie {
public:
    /** Initialize your data structure here. */
    Trie* child[26];
    bool terminal;
    
    Trie() : terminal(false) {
        memset(child, NULL, 26);
    }
    inline int toNumber(char ch) {
        return (int)(ch - 'a');
    }
    void insert(const string& word, int index) {
        if(index == word.size()) {
            terminal = true;
        } else {
            int to = toNumber(word[index]);
            if(child[to] == NULL) {
                child[to] = new Trie();    
            }
            child[to]->insert(word, index + 1);
        }
    }
    /** Inserts a word into the trie. */
    void insert(string word) {
        insert(word, 0);
    }
    
    bool search(const string& word, int index) {
        if(index == word.size()) return terminal;
        int to = toNumber(word[index]);
        if(child[to] == NULL) {
            return false;    
        } else {
            return child[to]->search(word, index + 1);  
        }
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        return search(word, 0);
    }
    
    bool startsWith(const string& word, int index) {
        if(index == word.size()) return true;
        int to = toNumber(word[index]);
        if(child[to] == NULL) {
            return false;    
        } else {
            return child[to]->startsWith(word, index + 1);  
        }
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        return startsWith(prefix, 0);
    }
};