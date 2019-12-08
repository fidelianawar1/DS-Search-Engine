#ifndef INDEXAVL_H
#define INDEXAVL_H
#include "IndexInterface.h"
#include "DSAVLTree.h"

class indexAVL: public IndexInterface {
    private:

    public:
    DSAVLTree<Word> words;
        indexAVL();
        void addWord(Word);
        Word& find(string);
        bool contains(string);
        void printWords();
        ~indexAVL() = default;
};

#endif // INDEXAVL_H
