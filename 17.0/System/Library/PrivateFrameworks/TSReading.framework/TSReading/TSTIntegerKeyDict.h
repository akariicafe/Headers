@interface TSTIntegerKeyDict : NSObject {
    void *mMap;
}

- (id)allValues;
- (id)init;
- (void)dealloc;
- (void)makeObjectsPerformSelector:(SEL)a0;
- (void)removeAllObjects;
- (void)setObject:(id)a0 forKey:(unsigned int)a1;
- (void)removeFirstObject;
- (long long)count;
- (void)removeObjectForKey:(unsigned int)a0;
- (id)objectForKey:(unsigned int)a0;
- (void)applyFunction:(void /* function */ *)a0 withState:(void *)a1;
- (void)applyFunction:(void /* function */ *)a0 withState:(void *)a1 andState:(void *)a2;
- (void)transformWithFunction:(void /* function */ *)a0 withState:(void *)a1;

@end
