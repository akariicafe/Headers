@interface NSClassicHashTable : NSHashTable {
    struct { void /* function */ *hash; void /* function */ *isEqual; void /* function */ *retain; void /* function */ *release; void /* function */ *describe; } _callBacks;
    struct __CFBasicHash { } *_ht;
}

- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
- (void)removeItem:(const void *)a0;
- (void)removeAllItems;
- (unsigned long long)count;
- (id)copy;
- (void)insertItem:(const void *)a0;
- (id)allObjects;
- (id)description;
- (void)insertKnownAbsentItem:(const void *)a0;
- (void *)getItem:(const void *)a0;
- (void)getKeys:(const void **)a0 count:(unsigned long long *)a1;
- (BOOL)isEqual:(id)a0;
- (void)addObject:(id)a0;

@end
