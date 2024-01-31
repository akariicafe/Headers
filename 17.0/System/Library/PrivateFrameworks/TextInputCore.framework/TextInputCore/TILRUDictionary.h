@class TILRUDictionaryNode;

@interface TILRUDictionary : NSObject {
    struct __CFDictionary { } *_dictionary;
    unsigned long long _maxCount;
    TILRUDictionaryNode *_head;
    TILRUDictionaryNode *_tail;
}

+ (id)dictionaryWithMaximumCapacity:(unsigned long long)a0;

- (void)_moveNodeToFront:(id)a0;
- (void)dealloc;
- (id)allKeys;
- (id)objectForKeyWithoutAffectingLRU:(id)a0;
- (void)removeAllObjects;
- (unsigned long long)linkedListCount;
- (void)_removeNodeFromLinkedList:(id)a0;
- (void)_removeNode:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (unsigned long long)count;
- (void)removeObjectForKey:(id)a0;
- (id)description;
- (id)initWithMaximumCapacity:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)a0;
- (void)_addNodeToFront:(id)a0;
- (id)allValuesInLRUOrder;
- (id)objectForKey:(id)a0;
- (id)allKeysInLRUOrder;

@end
