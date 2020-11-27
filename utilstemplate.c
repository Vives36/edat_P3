#include "utils.h"

int no_deleted_registers = NO_DELETED_REGISTERS;

void replaceExtensionByIdx(const char *fileName, char * indexName) {
    int i=strlen(indexName);
    if(!indexName){
        exit();
    }
    
    indexName[i-1]='x';
    indexName[i-2]='d';
    indexName[i-3]='i';
    return;
}

bool createTable(const char * tableName) {
     int num = -1;
    if(!tableName){
        return false;
    }
    fopen(tableName,"w");
    fwrite(num,sizeof(int),1,tableName);
    fclose(tableName);

 

    return true;
}

bool createIndex(const char *indexName) {
    return true;
}
void printnode(size_t _level, size_t level,
               FILE * indexFileHandler, int node_id, char side) {
    return;
}

void printTree(size_t level, const char * indexName)
{
    return;
}

bool findKey(const char * book_id, const char *indexName,
             int * nodeIDOrDataOffset)
 {
     return true;
 }

bool addIndexEntry(char * book_id,  int bookOffset, char const * indexName) {
    return true;
}

bool addTableEntry(Book * book, const char * dataName,
                   const char * indexName) {
    return true;
}