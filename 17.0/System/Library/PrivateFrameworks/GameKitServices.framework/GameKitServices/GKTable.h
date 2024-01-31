@interface GKTable : NSObject {
    struct _gktableitem { unsigned int x0; id x1; double x2; double x3; } *_items;
    unsigned long long _size;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (readonly) unsigned long long count;

- (id)initWithSize:(unsigned long long)a0;
- (id)init;
- (void)dealloc;
- (void)makeObjectsPerformSelector:(SEL)a0;
- (void)removeAllObjects;
- (void)print;
- (void)setObject:(id)a0 forKey:(unsigned int)a1;
- (void)lock;
- (void)makeObjectsPerformSelector:(SEL)a0 withObject:(id)a1;
- (void)removeObjectForKey:(unsigned int)a0;
- (void)unlock;
- (id)allObjects;
- (id)objectForKey:(unsigned int)a0;
- (void)touchObject:(id)a0;
- (void)touchObjectForKey:(unsigned int)a0;

@end
