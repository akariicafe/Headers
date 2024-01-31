@interface TSTTableDataObjectKeyDict : NSObject {
    void *mMap;
}

- (id)init;
- (void)dealloc;
- (unsigned long long)count;
- (void)removeKeyForObject:(id)a0;
- (void)setKey:(unsigned int)a0 forObject:(id)a1;
- (unsigned int)keyForObject:(id)a0;
- (void)removeAllKeys;

@end
